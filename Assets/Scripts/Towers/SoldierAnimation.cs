using System;
using System.Collections;
using System.Linq;
using MMK.ScriptableObjects;
using MMK.Towers;
using PathCreation;
using UnityEngine;
using UnityEngine.Rendering;

namespace Towers
{


    public class SoldierAnimation : TowerAnimation
    {
        public delegate void UpdateMuzzlesDelegate(int Level);
        public UpdateMuzzlesDelegate UpdateMuzzles;
        

        public delegate void OnBulletHitEnemyDelegate(Vector3 Position);
        event OnBulletHitEnemyDelegate OnBulletHitEnemy;

        
        
        public GameObject FireStreamPrefab;
        public GameObject ProjectileBeamPrefab;
        public GameObject ThrowPathPrefab;
        public GameObject ThrowedObjectPrefab;

        public GameObject ExplosionPrefab;
        
        
        public Muzzle RightMuzzle;
        public Muzzle LeftMuzzle;


        public SoldierController SoldierController { private set; get; }
        
        const float ObjectMaxHeight = 2.5f;
        public const string SHOOT_CLIP_NAME = "Shoot";





        Muzzle GetMuzzleByWeaponSide(Side WeaponSide)
        {
            if (WeaponSide == Side.Right)
            {
                if (RightMuzzle == null)
                    throw new NullReferenceException("Right Muzzle is Null [value = null]");

                return RightMuzzle;
            }
            else
            {
                if (LeftMuzzle == null)
                    throw new NullReferenceException("Left Muzzle is Null [value = null]");
                
                return LeftMuzzle;
            }

            return null;
        }




        protected override void Awake()
        {
            SoldierController = this.GetComponent<SoldierController>();
            
            base.Awake();
        }

        protected override void OnDestroy()
        {
            base.OnDestroy();
        }

        protected override void Start()
        {
            base.Start();
            
        }

        protected override void Update()
        {
            base.Update();
        }

        protected override void FixedUpdate()
        {
            base.FixedUpdate();
        }



#region Register & Unregister Handlers
        
        protected override void RegisterHandlers()
        {
            base.RegisterHandlers();

            UpdateMuzzles += OnUpdateMuzzles;

            SoldierController.OnLevelUp += PlayLevelUpAnimation;
            SoldierController.OnRemoveTower += PlayRemoveAnimation;
            SoldierController.TowerWeaponComponent.OnShoot += PlayShootAnimation;

            OnBulletHitEnemy += PlayExplosionAnimation;

        }

        protected override void UnregisterHndlers()
        {
            OnBulletHitEnemy -= PlayExplosionAnimation;
            
            SoldierController.TowerWeaponComponent.OnShoot -= PlayShootAnimation;
            SoldierController.OnRemoveTower -= PlayRemoveAnimation;
            SoldierController.OnLevelUp -= PlayLevelUpAnimation;

            UpdateMuzzles -= OnUpdateMuzzles;
            
            base.UnregisterHndlers();
        }
        
#endregion



        void OnUpdateMuzzles(int Level)
        {
            GameObject towerObject = this.transform.GetChild(Level).gameObject;

            Muzzle[] muzzles = towerObject.GetComponentsInChildren<Muzzle>();
            RightMuzzle = muzzles.FirstOrDefault(muzzle => muzzle.Side == Side.Right);
            LeftMuzzle = muzzles.FirstOrDefault(muzzle => muzzle.Side == Side.Left);
        }
        




#region Shoot Animation

        // void PlayShootAnimation(EnemyController target, Side WeaponSide, bool EnemyInCenter, Weapon Wepaon)
        // {
        //     Animation.Play(SHOOT_CLIP_NAME);
        //     
        //     BulletAnimation(target, WeaponSide, Wepaon);
        //
        //
        // }
        
        void PlayShootAnimation(EnemyController target, Side[] WeaponSides, bool EnemyInCenter, Weapon Wepaon)
        {
            
            foreach (var WeaponSide in WeaponSides)
            {
                ShootAnimation(WeaponSide);
                
                BulletAnimation(target, WeaponSide, Wepaon);
            }


        }

        public void ShootAnimation(Side WeaponSide)
        {
            string animationLayerName = WeaponSide == Side.Right ? "R" : "L";
            int animationLayer = Animator.GetLayerIndex(animationLayerName);
            Animator.Play(SHOOT_CLIP_NAME, animationLayer);
        }

        
        
#endregion

        
        
#region Bullet Animation
        
        float maxBulletTrailLenght = 6.5f;
        
        void BulletAnimation(EnemyController target, Side WeaponSide, Weapon Wepaon)
        {
            Vector3 targetPosition = target.transform.position;
            
            float bulletSpeed = Vector3.Distance(this.transform.position, targetPosition) / maxBulletTrailLenght;

            if (Wepaon.DamageType == DamageType.Fire)
            {
                ParticleSystem fireStreamParticle = Instantiate(FireStreamPrefab, Vector3.zero, Quaternion.identity).GetComponent<ParticleSystem>();
                StartCoroutine(DoFireStream(fireStreamParticle, bulletSpeed, WeaponSide, target));
            }
            else if (Wepaon.ShootingType == ShootingType.Shootable)
            {
                LineRenderer lineRenderer = Instantiate(ProjectileBeamPrefab, Vector3.zero, Quaternion.identity).GetComponent<LineRenderer>();
                StartCoroutine(DoProjectileBeam(lineRenderer, bulletSpeed, WeaponSide, targetPosition, Wepaon.DamageType == DamageType.Splash) );
            }
            else if (Wepaon.ShootingType == ShootingType.Throwable)
            {
                PathCreator throwPath = Instantiate(ThrowPathPrefab, Vector3.zero, Quaternion.identity).GetComponent<PathCreator>();
                StartCoroutine(DoThrowPath(throwPath, WeaponSide, target, Wepaon.DamageType == DamageType.Splash) );
            }
        }

        IEnumerator DoProjectileBeam(LineRenderer lineRenderer, float bulletSpeed, Side WeaponSide, Vector3 endPosition, bool playExplosionAnimation)
        {
            Transform muzzle = GetMuzzleByWeaponSide(WeaponSide).transform;
            Vector3 startPosition = muzzle.position;

            // Spawn Line Renderer (Animator)
            // LineRenderer lineRenderer = Instantiate(ProjectileBeamPrefab, Vector3.zero, Quaternion.identity).GetComponent<LineRenderer>();

            // Fix End Position (longer distance)
            Vector3 directionToEndPosition = (endPosition - startPosition).normalized;
            endPosition += directionToEndPosition;
            
            // Do Animtion
            lineRenderer.positionCount = 2;

            lineRenderer.SetPosition(0, startPosition);
            lineRenderer.SetPosition(1, startPosition);

            while (Vector3.Distance(lineRenderer.GetPosition(1), endPosition) > 0.1f)
            {
                Vector3 newEndPosition = Vector3.Lerp(lineRenderer.GetPosition(1), endPosition, 0.5f);
                lineRenderer.SetPosition(1, newEndPosition);

                yield return new WaitForSeconds(Time.deltaTime * 2f / bulletSpeed);
            }

            yield return new WaitForSeconds(0.01f / bulletSpeed);

            while (Vector3.Distance(lineRenderer.GetPosition(0), endPosition) > 0.1f)
            {
                Vector3 newEndPosition = Vector3.Lerp(lineRenderer.GetPosition(0), endPosition, 0.5f);
                lineRenderer.SetPosition(0, newEndPosition);

                yield return new WaitForSeconds(Time.deltaTime / bulletSpeed / 4f / 4f);
            }

            lineRenderer.positionCount = 0;

            Destroy(lineRenderer.gameObject);
            
            
            if(playExplosionAnimation)
                OnBulletHitEnemy?.Invoke(endPosition);
            
            
        }

        IEnumerator DoThrowPath(PathCreator throwPath, Side WeaponSide, EnemyController EnemyController, bool playExplosionAnimation)
        {
            Transform target = EnemyController.transform;
            Transform muzzle = GetMuzzleByWeaponSide(WeaponSide).transform;
            
            // PathCreator throwPath = Instantiate(ThrowPathPrefab, Vector3.zero, Quaternion.identity).GetComponent<PathCreator>();
            
            BezierPath bezierPath = throwPath.bezierPath;

            GameObject throwedObject = Instantiate(ThrowedObjectPrefab, Vector3.zero, Quaternion.identity);


            Vector3 startPosition = muzzle.position;
            Vector3 heightPosition = ( (startPosition + target.position) / 2 ) + new Vector3(0, ObjectMaxHeight, 0);

            // Setup Bezier Path
            bezierPath.SetPoint(0, startPosition);  // start point
            bezierPath.SetPoint(3, heightPosition); // highest Point
            bezierPath.SetPoint(6, target.position);         // end Point

            bezierPath.ControlPointMode = BezierPath.ControlMode.Aligned;

            yield return new WaitForEndOfFrame();

            bezierPath.ControlPointMode = BezierPath.ControlMode.Automatic;
            throwPath.TriggerPathUpdate();

            yield return new WaitForSeconds(0.2f); // animation time

            
            // Simulate Throw Trajectory
            float distanceTravelled = 0;

            float distance = throwPath.path.length;
            float time = 0.3f;
            float velocity = distance / time;

            while (distanceTravelled < distance)
            {
                distanceTravelled += velocity / 100f;
                throwedObject.transform.position = throwPath.path.GetPointAtDistance(distanceTravelled);
                throwedObject.transform.rotation = Quaternion.Euler(throwedObject.transform.eulerAngles + new Vector3(Time.deltaTime * 10, 0, Time.deltaTime * 30));


                if (target != null)
                    bezierPath.SetPoint(6, target.position);

                yield return new WaitForSeconds(1f / 100f);

                throwPath.TriggerPathUpdate();

            }

            Destroy( throwedObject );
            Destroy( throwPath.gameObject );
            
            if(playExplosionAnimation)
                OnBulletHitEnemy?.Invoke(target.position);
        }

        IEnumerator DoFireStream(ParticleSystem fireStreamParticle, float fireSpeed, Side WeaponSide, EnemyController enemy)
        {
            ParticleSystem hotterStreamParticle = fireStreamParticle.transform.GetChild(0).GetComponent<ParticleSystem>();
            
            Transform muzzle = GetMuzzleByWeaponSide(WeaponSide).transform;
            Vector3 enemyPosition = enemy.transform.position;
            
            // ParticleSystem fireStreamParticle = Instantiate(FireStreamPrefab, muzzle.transform.position, this.transform.rotation).GetComponent<ParticleSystem>();
            fireStreamParticle.transform.position = muzzle.transform.position;
            fireStreamParticle.transform.rotation = Quaternion.LookRotation(enemy.transform.position - this.transform.position);

            var fireStreamMain = fireStreamParticle.main;
            float multiplier = 3f;
            fireStreamMain.startLifetime =  (Vector3.Distance(this.transform.position, enemy.transform.position) + 1f) / fireStreamParticle.velocityOverLifetime.z.constant / multiplier ;
            
            var hotterStreamMain = hotterStreamParticle.main;
            hotterStreamMain.startLifetime = fireStreamMain.startLifetime;
            
            
            fireStreamParticle.Play();

            float time = 0.5f + fireStreamMain.startLifetime.constant;
            while (time >= 0)
            {
                fireStreamParticle.transform.position = muzzle.transform.position;
                fireStreamParticle.transform.rotation = Quaternion.LookRotation(enemy.transform.position - this.transform.position);
                
                yield return new WaitForSeconds(Time.deltaTime);
                time -= Time.deltaTime;
            }
            
            Destroy(fireStreamParticle.gameObject);
            
            yield return null;
        }
        
#endregion



#region Explosion Animation

        void PlayExplosionAnimation(Vector3 position)
        {
            ParticleSystem explosionParticle = Instantiate(ExplosionPrefab, position, Quaternion.identity).GetComponent<ParticleSystem>();

            explosionParticle.Play();
            
            Destroy(explosionParticle.gameObject, 2f);
        }
        
#endregion
        
        
        
        
        
    }
}
