using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using Firebase.Auth;
using MMK.Extensions;
using MMK.ScriptableObjects;
using MMK.Towers;
using UnityEngine;

namespace Towers
{
    
    
    public class TowerWeapon : MonoBehaviour
    {
        public delegate void OnShootDelegate(EnemyController target, Side[] WeaponSide, bool EnemyInCenter, Weapon Wepaon);
        public event OnShootDelegate OnShoot;
        
        public delegate void UpdateWeaponDelegate(Weapon Weapon);
        public UpdateWeaponDelegate UpdateWeapon;


        public Weapon Weapon;

        [Space(12)]
        [Header("Stats")]
        public bool ReadyToShoot;
        
        public int TotalGivenDamage
        {
            get
            {
                return totalGivenDamage;
            }
            set
            {
                int givenDamage = value - totalGivenDamage;
                DamageReward(givenDamage);

                totalGivenDamage = value;
            }
        }
        int totalGivenDamage;
        
        [SerializeField] Side WeaponSide;
        

        public SoldierController SoldierController { private set; get; }


        void Awake()
        {
            WeaponSide = Side.Right;

            SoldierController = this.GetComponent<SoldierController>();
            
            ReadyToShoot = false;
            lastShootDate = DateTime.MinValue;

            RegisterHandlers();
            
        }

        void OnDestroy()
        {
            UnregisterHndlers();
            
        }
        
        void Start()
        {
            
        }

        DateTime lastShootDate;
        //float time;
        void Update()
        {
            //time += Time.deltaTime;
            //if (time >= Weapon.Firerate)
            //    ReadyToShoot = true;
            if ((DateTime.Now - lastShootDate).TotalSeconds >= Weapon.Firerate)
                ReadyToShoot = true;


            if (ReadyToShoot)
            {
                ReadyToShoot = false;
                
                ShootStatus status = Shoot();

                if (status == ShootStatus.Successfully)
                {
                    lastShootDate = DateTime.Now;
                    ReadyToShoot = false;
                }

                //this.Invoke( () => ReadyToShoot = true, Weapon.Firerate);
                else
                    ReadyToShoot = true;
            }
        }

        void FixedUpdate()
        {
            
        }
        
        
        
        
        
#region Register & Unregister Handlers

        void RegisterHandlers()
        {
            UpdateWeapon += OnUpdateWeapon;
            TowerSpawner.OnTowerPlaced += OnTowerPlaced;

        }

        void UnregisterHndlers()
        {
            TowerSpawner.OnTowerPlaced -= OnTowerPlaced;
            UpdateWeapon -= OnUpdateWeapon;

        }

#endregion


        void OnTowerPlaced(TowerController tower)
        {
            if ((TowerController)SoldierController == tower)
                ReadyToShoot = true;

        }
        
        
        
        ShootStatus Shoot()
        {
                    
            ShootResult Result = new ShootResult();

            if (Weapon.ShootingType == ShootingType.Shootable)
            {
                if (Weapon.DamageType == DamageType.Single)
                    Result = SingleShootInSingle();
                else if (Weapon.DamageType == DamageType.Spraed)
                    Result = SingleShootInSpread();
                else if (Weapon.DamageType == DamageType.Splash)
                    Result = SingleShootInSplash();
                else if (Weapon.DamageType == DamageType.Fire)
                    Result = SingleShootFire();
            }
            else if (Weapon.ShootingType == ShootingType.Throwable)
            {
                Result = ThrowableShoot();
            }
            
            // if (Weapon.DamageType == DamageType.Single)
            //     Result = ShootInSingle();
            // else if (Weapon.DamageType == DamageType.Spraed)
            //     Result = ShootInSpread();
            // else if (Weapon.ShootingType == ShootingType.Throwable)
            //     Result = ThrowableShoot();
            
            TotalGivenDamage += Result.GivenDamage;

            if (Result.Status == ShootStatus.Canceled)
                return Result.Status;
            
            if (Weapon.WeaponType == WeaponType.DualWield)
                WeaponSide = WeaponSide == Side.Right ? Side.Left : Side.Right;
            
            return Result.Status;
        }

        
        ShootResult SingleShootInSingle()
        {
            EnemyController enemy = SoldierController.ViewRangeComponent.GetEnemyByMode(SoldierController.TargetMode);
            if(enemy == null)
                return new ShootResult()
                {
                    Status = ShootStatus.Canceled,
                    GivenDamage = 0
                };
            
            int healthBeforeShoot = enemy.HealthComponent.GetHealth();

            OnShoot?.Invoke(enemy, new[] {WeaponSide}, true, Weapon);
            enemy.HealthComponent.ChangeHealth(-Weapon.Damage);

            int healthAfterShoot = enemy.HealthComponent.GetHealth();

            int givenDamage = healthBeforeShoot - healthAfterShoot;
            
            return new ShootResult()
            {
                Status = ShootStatus.Successfully,
                GivenDamage = givenDamage
            };
        }

        ShootResult SingleShootInSpread()
        {
            List<EnemyController> enemies = SoldierController.ViewRangeComponent.GetEnemiesInSpreadByMode(SoldierController.TargetMode, Weapon.SplashDamageSpread);
            if(enemies.Count <= 0)
                return new ShootResult()
                {
                    Status = ShootStatus.Canceled,
                    GivenDamage = 0
                };
            
            // int step = Weapon.MaxEnemiesInSpread;
            //
            // int givenDamage = 0;
            //
            // foreach (var enemy in enemies)
            // {
            //     int damage = Weapon.Damage * (step);
            //
            //     int healthBeforeShoot = enemy.HealthComponent.GetHealth();
            //
            //     OnShoot?.Invoke(enemy, new[] {WeaponSide}, step == Weapon.MaxEnemiesInSpread, Weapon);
            //     enemy.HealthComponent.ChangeHealth(-damage);
            //
            //     int healthAfterShoot = enemy.HealthComponent.GetHealth();
            //
            //     givenDamage += (healthBeforeShoot - healthAfterShoot);
            //     step -= 1;
            // }
            
            int givenDamage = 0;
            int damageValue = Weapon.Damage;
                
            for (int i = 0 ; i < enemies.Count; i++)
            {
                if(i >= Weapon.MaxEnemiesInSpread)
                    break;

                EnemyController enemy = enemies[i];
                    
                int healthBeforeShoot = enemy.HealthComponent.GetHealth();
                    
                OnShoot?.Invoke(enemy, new[] {WeaponSide}, i == 0, Weapon);
                enemy.HealthComponent.ChangeHealth(-damageValue);

                int healthAfterShoot = enemy.HealthComponent.GetHealth();

                givenDamage += (healthBeforeShoot - healthAfterShoot);
                    
                if(damageValue > 1f)
                    damageValue -= 1;
            }
                

            return new ShootResult()
            {
                Status = ShootStatus.Successfully,
                GivenDamage = givenDamage
            };
        }

        ShootResult SingleShootInSplash()
        {
            List<EnemyController> enemies = SoldierController.ViewRangeComponent.GetEnemiesInSpreadByMode(SoldierController.TargetMode, Weapon.SplashDamageSpread);
            if(enemies.Count <= 0)
                return new ShootResult()
                {
                    Status = ShootStatus.Canceled,
                    GivenDamage = 0
                };
            
            // int step = Weapon.MaxEnemiesInSpread;
            //
            // int givenDamage = 0;
            
            OnShoot?.Invoke(enemies[0], new[] {WeaponSide}, true, Weapon);
            
            // foreach (var enemy in enemies)
            // {
            //     int damage = Weapon.Damage * (step);
            //
            //     int healthBeforeShoot = enemy.HealthComponent.GetHealth();
            //     
            //     enemy.HealthComponent.ChangeHealth(-damage);
            //
            //     int healthAfterShoot = enemy.HealthComponent.GetHealth();
            //
            //     givenDamage += (healthBeforeShoot - healthAfterShoot);
            //     step -= 1;
            // }
            int givenDamage = 0;
            int damageValue = Weapon.Damage;
                
            for (int i = 0 ; i < enemies.Count; i++)
            {
                if(i >= Weapon.MaxEnemiesInSpread)
                    break;

                EnemyController enemy = enemies[i];
                    
                int healthBeforeShoot = enemy.HealthComponent.GetHealth();
                    
                enemy.HealthComponent.ChangeHealth(-damageValue);

                int healthAfterShoot = enemy.HealthComponent.GetHealth();

                givenDamage += (healthBeforeShoot - healthAfterShoot);
                    
                if(damageValue > 1f)
                    damageValue -= 1;
            }

            return new ShootResult()
            {
                Status = ShootStatus.Successfully,
                GivenDamage = givenDamage
            };
        }
        
        ShootResult SingleShootFire()
        {
            EnemyController enemy = SoldierController.ViewRangeComponent.GetEnemyByMode(SoldierController.TargetMode, false);
            if(enemy == null)
                return new ShootResult()
                {
                    Status = ShootStatus.Canceled,
                    GivenDamage = 0
                };
            
            Side[] sides = Weapon.WeaponType == WeaponType.DualWield ? new [] { Side.Right, Side.Left } : new [] { Side.Right };
   
            OnShoot?.Invoke(enemy, sides, true, Weapon);

            enemy.StartCoroutine(FireDamage(enemy, Weapon.Damage, Weapon.BurningTime));

            return new ShootResult()
            {
                Status = ShootStatus.Successfully,
                GivenDamage = 0
            };
        }

        IEnumerator FireDamage(EnemyController enemy, int damage, float fireTime)
        {
            enemy.SetBurningActive(true, SoldierController.GetLevel());

            float time = fireTime;
            while (time >= 0)
            {
                int healthBeforeShoot = enemy.HealthComponent.GetHealth();
                
                enemy.HealthComponent.ChangeHealth(-damage);
                
                int healthAfterShoot = enemy.HealthComponent.GetHealth();
                
                int givenDamage = healthBeforeShoot - healthAfterShoot;
                TotalGivenDamage += givenDamage;

                yield return new WaitForSeconds(Weapon.BurningInterval);
                time -= Weapon.BurningInterval;
            }
            
            enemy.SetBurningActive(false, SoldierController.GetLevel());
        }


        ShootResult ThrowableShoot()
        {
            float objectFlyTime = 0.75f;


            List<EnemyController> enemies = SoldierController.ViewRangeComponent.GetEnemiesInSpreadByMode(SoldierController.TargetMode, Weapon.SplashDamageSpread);
            if(enemies.Count <= 0)
                return new ShootResult()
                {
                    Status = ShootStatus.Canceled,
                    GivenDamage = 0
                };
            
            OnShoot?.Invoke(enemies[0], new[] {WeaponSide}, true, Weapon);
            
            
            this.Invoke(() =>
            {
                int givenDamage = 0;
                int damageValue = Weapon.Damage;
                
                for (int i = 0 ; i < enemies.Count; i++)
                {
                    if(i >= Weapon.MaxEnemiesInSpread)
                        break;

                    EnemyController enemy = enemies[i];
                    
                    int healthBeforeShoot = enemy.HealthComponent.GetHealth();
                    
                    enemy.HealthComponent.ChangeHealth(-damageValue);

                    int healthAfterShoot = enemy.HealthComponent.GetHealth();

                    givenDamage += (healthBeforeShoot - healthAfterShoot);
                    
                    if(damageValue > 1f)
                        damageValue -= 1;
                }
                
                TotalGivenDamage += givenDamage;

            }, objectFlyTime);

            return new ShootResult()
            {
                Status = ShootStatus.Successfully,
                GivenDamage = 0
            };
        }



        [SerializeField] int totalGivenReward;
        void DamageReward(int givenDamage)
        {
            totalGivenReward += givenDamage;
            
            GamePlayerInformation.ChangeBalance(givenDamage);
        }
        
        

        void OnUpdateWeapon(Weapon weapon)
        {
            Weapon = weapon;
        }
        
        
        
        

    }
}
