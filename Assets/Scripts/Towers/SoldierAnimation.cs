﻿using System;
using System.Collections;
using System.Linq;
using System.Threading.Tasks;
using MMK.ScriptableObjects;
using MMK.Towers;
using PathCreation;
using Pooling;
using UnityEngine;
using UnityEngine.Rendering;

namespace Towers
{


    public class SoldierAnimation : TowerAnimation
    {
        static ParticlePoolManager ProjectileBeamPoolManager;
        Particle CreateProjectileBeamParticle() => Instantiate(ProjectileBeamPrefab, Vector3.zero, Quaternion.identity, ProjectileBeamPoolManager.transform).GetComponent<Particle>();
        void DestroyProjectileBeamParticle(Particle particle) => Destroy(particle);
        void ResetProjectileBeamParticle(Particle particle)
        {
            particle.gameObject.SetActive(false);
            particle.transform.position = Vector3.zero;
            particle.GetComponent<LineRenderer>().positionCount = 0;;
        }
        void BeforeSpawnProjectileBeamParticle(Particle particle)
        {
            particle.GetComponent<LineRenderer>().positionCount = 0;
            particle.transform.position = this.transform.position;
            particle.gameObject.SetActive(true);
        }





        public delegate void UpdateMuzzlesDelegate(int Level);
        public UpdateMuzzlesDelegate UpdateMuzzles;
        
        public delegate void UpdatePrefabsDelegate(int Level);
        public UpdatePrefabsDelegate UpdatePrefabs;


        public delegate void OnBulletHitEnemyDelegate(Vector3 Position);
        event OnBulletHitEnemyDelegate OnBulletHitEnemy;

        
        
        public GameObject[] FireStreamPrefabs;
        public GameObject FireStreamPrefab;
        
        public GameObject[] ProjectileBeamPrefabs;
        public GameObject ProjectileBeamPrefab;
        
        public GameObject[] ThrowPathPrefabs;
        public GameObject ThrowPathPrefab;
        
        public GameObject[] ThrowedObjectPrefabs;
        public GameObject ThrowedObjectPrefab;

        public GameObject[] ExplosionPrefabs;
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

            if (ProjectileBeamPoolManager == null)
            {
                ProjectileBeamPoolManager = ParticlePoolManager.InitParticlePool("Projectile Beam Pool");
                ProjectileBeamPoolManager.Pool = new Pool<Particle>(CreateProjectileBeamParticle, DestroyProjectileBeamParticle, ResetProjectileBeamParticle, 60);
            }
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
            UpdatePrefabs += OnUpdatePrefabs;

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

            UpdatePrefabs -= OnUpdatePrefabs;
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


        void OnUpdatePrefabs(int Level)
        {

            FireStreamPrefab = FireStreamPrefabs.Length > Level ? FireStreamPrefabs[Level] : null;

            ProjectileBeamPrefab = ProjectileBeamPrefabs.Length > Level ? ProjectileBeamPrefabs[Level] : null; //ProjectileBeamPrefabs[Level];

            ThrowPathPrefab = ThrowPathPrefabs.Length > Level ? ThrowPathPrefabs[Level] : null; //ThrowPathPrefabs[Level];

            ThrowedObjectPrefab = ThrowedObjectPrefabs.Length > Level ? ThrowedObjectPrefabs[Level] : null; //ThrowedObjectPrefabs[Level];

            ExplosionPrefab = ExplosionPrefabs.Length > Level ? ExplosionPrefabs[Level] : null;//ExplosionPrefabs[Level];

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
                ParticleSystem fireStreamParticleSystem = Instantiate(FireStreamPrefab, Vector3.zero, Quaternion.identity).GetComponent<ParticleSystem>();
                Particle fireStreamParticle = fireStreamParticleSystem.GetComponent<Particle>();
                fireStreamParticle.StartCoroutine(DoFireStream(fireStreamParticleSystem, bulletSpeed, WeaponSide, target));
            }
            else if (Wepaon.ShootingType == ShootingType.Shootable)
            {
                //LineRenderer lineRenderer = Instantiate(ProjectileBeamPrefab, Vector3.zero, Quaternion.identity).GetComponent<LineRenderer>();
                //Particle lineRendererParticle = lineRenderer.GetComponent<Particle>();
                //lineRendererParticle.StartCoroutine(DoProjectileBeam(lineRenderer, bulletSpeed, WeaponSide, targetPosition, Wepaon.DamageType == DamageType.Splash) );
                Particle projectileBeamParticle = ProjectileBeamPoolManager.Pool.Get(BeforeSpawnProjectileBeamParticle);

                if (projectileBeamParticle == null)
                    return;

                DoProjectileBeam(projectileBeamParticle, bulletSpeed, WeaponSide, targetPosition, Wepaon.DamageType == DamageType.Splash);
            }
            else if (Wepaon.ShootingType == ShootingType.Throwable)
            {
                PathCreator throwPath = Instantiate(ThrowPathPrefab, Vector3.zero, Quaternion.identity).GetComponent<PathCreator>();
                Particle throwPathParticle = throwPath.GetComponent<Particle>();
                throwPathParticle.StartCoroutine(DoThrowPath(throwPath, WeaponSide, target, Wepaon.DamageType == DamageType.Splash) );
            }
        }

        async void DoProjectileBeam(Particle projectileBeamParticle, float bulletSpeed, Side WeaponSide, Vector3 endPosition, bool playExplosionAnimation)
        {
            LineRenderer lineRenderer = projectileBeamParticle.GetComponent<LineRenderer>();

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

                //yield return new WaitForSeconds(Time.deltaTime * 2f / bulletSpeed);
                await Task.Delay(Mathf.RoundToInt(Time.deltaTime * 2f / bulletSpeed * 1000));
            }

            //yield return new WaitForSeconds(0.01f / bulletSpeed);
            await Task.Delay(Mathf.RoundToInt(0.01f / bulletSpeed * 1000));

            while (Vector3.Distance(lineRenderer.GetPosition(0), endPosition) > 0.1f)
            {
                Vector3 newEndPosition = Vector3.Lerp(lineRenderer.GetPosition(0), endPosition, 0.5f);
                lineRenderer.SetPosition(0, newEndPosition);

                //yield return new WaitForSeconds(Time.deltaTime / bulletSpeed / 4f / 4f);
                await Task.Delay(Mathf.RoundToInt(Time.deltaTime / bulletSpeed / 4f / 4f * 1000));
            }

            ProjectileBeamPoolManager.Pool.Release(projectileBeamParticle);
            //lineRenderer.positionCount = 0;
            //Destroy(lineRenderer.gameObject);


            if (playExplosionAnimation)
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
            ParticleSystem explosionParticleSystem = Instantiate(ExplosionPrefab, position, Quaternion.identity).GetComponent<ParticleSystem>();
            
            explosionParticleSystem.Play();
            
            Destroy(explosionParticleSystem.gameObject, 2f);
        }


        
#endregion
        
        
        
        
        
    }
}
