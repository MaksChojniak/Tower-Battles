using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using DefaultNamespace.ScriptableObjects;
using UnityEngine;

namespace DefaultNamespace
{
    public class SoldierController : TowerController
    {
        public event Action<int> OnShoot; 
        
        public Soldier soldierData;

        public int TotalDamage;

        bool IsShooting;


        protected override (object, TypeOfBuildng) GetTowerData()
        {
            return (soldierData, soldierData.Type);
            
            // return base.GetTowerData();
        }

        public override void Awake()
        {
            base.Awake();

            TotalDamage = 0;
        }

        public override void Update()
        {
            base.Update();

            UpdateViewRange((float)soldierData.GetViewRange(UpgradeLevel));
            

            TowerShootProcess();
        }


        protected override void Destroy()
        {
            
            long totalTowerValue = soldierData.GetPrice();
            for (int i = 1; i <= UpgradeLevel; i++)
            {
                totalTowerValue += soldierData.GetUpgradePrice(i);
            }
            totalTowerValue /= 2;
            GamePlayerInformation.ChangeBalance(totalTowerValue);

            this.ShowTowerInformation(false);
            Destroy(this.gameObject);

            base.Destroy();
        }


        protected override void OnUpgradeTower(TowerController towerController)
        {
            if (towerController != this || UpgradeLevel >= 4)
                return;

            base.OnUpgradeTower(towerController);

            if (GamePlayerInformation.Instance != null)
                GamePlayerInformation.ChangeBalance(-soldierData.GetUpgradePrice(UpgradeLevel));
        }

        void TowerShootProcess()
        {
            if(!IsPlaced || IsShooting)
                return;


            EnemyController farthestEnemy = GetFarthestEnemy();
            
            if(farthestEnemy != null)
                TowerShoot(farthestEnemy);
        }

        EnemyController GetFarthestEnemy()
        {
            List<Transform> enemiesInRange = new List<Transform>();
            foreach (var enemy in GameObject.FindGameObjectsWithTag("Enemy"))
            {
                if (Vector3.Distance(this.transform.position, enemy.transform.position) <= soldierData.GetViewRange(UpgradeLevel))
                {
                    enemiesInRange.Add(enemy.transform);
                }
            }

            if(enemiesInRange.Count <= 0)
                return null;
            
            EnemyController farthestEnemy = enemiesInRange[0].GetComponent<EnemyController>();
            foreach (var enemy in enemiesInRange)
            {
                if (enemy.GetComponent<EnemyController>().GetDistanceTravelled() > farthestEnemy.GetComponent<EnemyController>().GetDistanceTravelled())
                {
                    farthestEnemy = enemy.GetComponent<EnemyController>();
                }
            }

            return farthestEnemy;
        }

        int lastRifleIndex;
        void TowerShoot(EnemyController enemy)
        {
            
            if(soldierData.GetWeapon(UpgradeLevel).WeaponType == WeaponType.SingleWeapon)
                StartCoroutine(OnTowerShoot(enemy));
            else
            {
                lastRifleIndex = lastRifleIndex == 1 ? 0 : 1;
                StartCoroutine(OnTowerShoot(enemy, lastRifleIndex));
            }
        }

        IEnumerator OnTowerShoot( EnemyController enemy, int RifleIndex = 0 )
        {
            IsShooting = true;
            OnShoot?.Invoke(RifleIndex);

            if(lastFollowCourtine != null)
                StopCoroutine(lastFollowCourtine);
            
            lastFollowCourtine = StartCoroutine(LookAtEnemy(enemy.transform));
            
            
            int givenDamage = soldierData.GetWeapon(UpgradeLevel).DamageType == DamageType.Single ? GiveDamge(enemy, soldierData.GetWeapon(UpgradeLevel).Damage) : GiveSplashDamage(enemy);
            
            GamePlayerInformation.ChangeBalance(givenDamage);
            Debug.Log("OnShoot");

            yield return new WaitForSeconds(soldierData.GetWeapon(UpgradeLevel).Firerate);

            IsShooting = false;
        }

        int GiveDamge(EnemyController enemy, int damage)
        {
            int enemyHealth = enemy.GetHealth();
            enemy.TakeDamage(damage);

            int giveDamage = enemyHealth - enemy.GetHealth();
            TotalDamage += giveDamage;

            return giveDamage;
        }

        int GiveSplashDamage(EnemyController firstEnemy)
        {
            int givenDamage = 0;
            
            List<Transform> enemiesInSpreadRangeTransform = FindEnemiesInSplashRange(firstEnemy, soldierData.GetWeapon(UpgradeLevel).SplashDamageSpread);

            int step = soldierData.GetWeapon(UpgradeLevel).MaxEnemiesInSpread;
            for(int i = 0; i< enemiesInSpreadRangeTransform.Count; i++)
            {
                EnemyController enemy = enemiesInSpreadRangeTransform[i].GetComponent<EnemyController>();

                int damage = soldierData.GetWeapon(UpgradeLevel).Damage * (step);

                givenDamage += GiveDamge(enemy, damage);
                step -= 1;
            }

            return givenDamage;
        }

        List<Transform> FindEnemiesInSplashRange(EnemyController firstEnemy, float spreadRadius)
        {
            List<Transform> enemiesInRange = new List<Transform>();
            foreach (var enemy in GameObject.FindGameObjectsWithTag("Enemy"))
            {
                if (Vector3.Distance(firstEnemy.transform.position, enemy.transform.position) <= spreadRadius)
                {
                    enemiesInRange.Add(enemy.transform);
                }
            }

            if(enemiesInRange.Count <= 0)
                return new List<Transform>();

            Transform[] sortedEnemies = new Transform[soldierData.GetWeapon(UpgradeLevel).MaxEnemiesInSpread];
            for (int i = 0; i < enemiesInRange.Count; i++)
            {
                for(int j = 0; j < sortedEnemies.Length; j++)
                {
                    if (sortedEnemies[j] == null)
                    {
                        sortedEnemies[j] = enemiesInRange[i];
                        break;
                    }

                    if (Vector3.Distance(firstEnemy.transform.position, enemiesInRange[i].position) < Vector3.Distance(firstEnemy.transform.position, sortedEnemies[j].position))
                    {
                        for (int k = sortedEnemies.Length - 1; k > j ; k--)
                        {
                            sortedEnemies[k] = sortedEnemies[k - 1];
                        }
                        
                        sortedEnemies[j] = enemiesInRange[i];
                        break;
                    }
                }
            }

            List<Transform> fixedSortedEnemies = new List<Transform>();
            for (int i = 0; i < sortedEnemies.Length; i++)
            {
                if(sortedEnemies[i] != null)
                    fixedSortedEnemies.Add(sortedEnemies[i]);
            }

            return fixedSortedEnemies;
        }
        
        
        const float followTime = 0.2f;
        Coroutine lastFollowCourtine;
        IEnumerator LookAtEnemy(Transform enemy)
        {
            // float time = 0;
            // while (time <= followTime)
            while (enemy != null && Vector3.Distance(this.transform.position, enemy.position) <= soldierData.GetViewRange(UpgradeLevel))
            {
                // if(enemy == null)
                //     yield break;
                
                float delay = Time.fixedDeltaTime;
                // time += delay;
                
                CurrentTowerObject.transform.LookAt(enemy.position);
                
                yield return new WaitForSeconds(delay);
            }

            EnemyController enemyController = GetFarthestEnemy();
            if(enemyController != null)
                lastFollowCourtine = StartCoroutine(LookAtEnemy(enemyController.transform));
        }
    }
}
