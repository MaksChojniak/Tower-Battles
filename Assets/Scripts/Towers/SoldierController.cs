using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using DefaultNamespace.ScriptableObjects;
using Unity.VisualScripting;
using UnityEngine;

namespace DefaultNamespace
{
    public class SoldierController : TowerController
    {
        public event Action<int, Vector3> OnShoot;
        public event Action<Transform, bool, bool> OnHitEnemy;
        
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
            GamePlayerInformation.ChangeBalance(this.GetTowerSellValue(soldierData.Type));

            this.ShowTowerInformation(false);
            
            Destroy(this.gameObject);

            base.Destroy();
        }


        protected override void OnUpgradeTower(TowerController towerController)
        {
            if (towerController != this || UpgradeLevel >= 4)
                return;

            if (GamePlayerInformation.Instance == null || GamePlayerInformation.Instance.GetBalance() < soldierData.GetUpgradePrice(UpgradeLevel))
            {
                WarningSystem.ShowWarning(WarningSystem.WarningType.NotEnoughtMoney);
                return;
            }

            GamePlayerInformation.ChangeBalance(-soldierData.GetUpgradePrice(UpgradeLevel));

            base.OnUpgradeTower(towerController);

        }

        void TowerShootProcess()
        {
            if(!IsPlaced || IsShooting)
                return;


            EnemyController farthestEnemy = GetEnemy(targetMode);// GetFarthestEnemy();
            
            if(farthestEnemy != null)
                TowerShoot(farthestEnemy);
        }


        EnemyController GetEnemy(TargetMode mode)
        {
            List<Transform> enemiesInRange = GetEnemiesInRange();

            switch (mode)
            {
                case TargetMode.First:
                    return GetFirstEnemy(enemiesInRange);
                case TargetMode.Last:
                    return GetLastEnemy(enemiesInRange);
                case TargetMode.Closest:
                    return GetClosestEnemy(enemiesInRange);
                case TargetMode.Weakest:
                    return GetWeakestEnemy(enemiesInRange);
                case TargetMode.Strongest:
                    return GetStrongestEnemy(enemiesInRange);
                default:
                    return null;
            }
        }

        List<Transform> GetEnemiesInRange()
        {
            List<Transform> enemiesInRange = new List<Transform>();
            foreach (var enemy in GameObject.FindGameObjectsWithTag("Enemy"))
            {
                if (Vector3.Distance(new Vector3(this.transform.position.x, 1f, this.transform.position.z), enemy.transform.position) <= soldierData.GetViewRange(UpgradeLevel))
                {
                    enemiesInRange.Add(enemy.transform);
                }
            }

            return enemiesInRange;
        }

        EnemyController GetFirstEnemy(List<Transform> enemiesInRange)
        {

            if(enemiesInRange.Count <= 0)
                return null;
            
            EnemyController firstEnemy = enemiesInRange[0].GetComponent<EnemyController>();
            foreach (var enemy in enemiesInRange)
            {
                if (enemy.GetComponent<EnemyController>().GetDistanceTravelled() > firstEnemy.GetComponent<EnemyController>().GetDistanceTravelled())
                {
                    firstEnemy = enemy.GetComponent<EnemyController>();
                }
            }

            return firstEnemy;
        }

        EnemyController GetLastEnemy(List<Transform> enemiesInRange)
        {

            if (enemiesInRange.Count <= 0)
                return null;

            EnemyController lastEnemy = enemiesInRange[0].GetComponent<EnemyController>();
            foreach (var enemy in enemiesInRange)
            {
                if (enemy.GetComponent<EnemyController>().GetDistanceTravelled() < lastEnemy.GetComponent<EnemyController>().GetDistanceTravelled())
                {
                    lastEnemy = enemy.GetComponent<EnemyController>();
                }
            }

            return lastEnemy;
        }

        EnemyController GetClosestEnemy(List<Transform> enemiesInRange)
        {

            if (enemiesInRange.Count <= 0)
                return null;

            EnemyController closestEnemy = enemiesInRange[0].GetComponent<EnemyController>();
            foreach (var enemy in enemiesInRange)
            {
                if (Vector3.Distance(enemy.position, this.transform.position) < Vector3.Distance(closestEnemy.transform.position, this.transform.position) )
                {
                    closestEnemy = enemy.GetComponent<EnemyController>();
                }
            }

            return closestEnemy;
        }

        EnemyController GetWeakestEnemy(List<Transform> enemiesInRange)
        {

            if (enemiesInRange.Count <= 0)
                return null;

            EnemyController weakestEnemy = enemiesInRange[0].GetComponent<EnemyController>();
            foreach (var enemy in enemiesInRange)
            {
                if (enemy.GetComponent<EnemyController>().GetHealth() < weakestEnemy.GetHealth())
                {
                    weakestEnemy = enemy.GetComponent<EnemyController>();
                }
                else if (enemy.GetComponent<EnemyController>().GetHealth() == weakestEnemy.GetHealth())
                {
                    if (enemy.GetComponent<EnemyController>().GetDistanceTravelled() > weakestEnemy.GetComponent<EnemyController>().GetDistanceTravelled())
                    {
                        weakestEnemy = enemy.GetComponent<EnemyController>();
                    }
                }
            }

            return weakestEnemy;
        }

        EnemyController GetStrongestEnemy(List<Transform> enemiesInRange)
        {

            if (enemiesInRange.Count <= 0)
                return null;

            EnemyController strongestEnemy = enemiesInRange[0].GetComponent<EnemyController>();
            foreach (var enemy in enemiesInRange)
            {
                if ( enemy.GetComponent<EnemyController>().GetHealth() > strongestEnemy.GetHealth() )
                {
                    strongestEnemy = enemy.GetComponent<EnemyController>();
                }
                else if ( enemy.GetComponent<EnemyController>().GetHealth() == strongestEnemy.GetHealth() )
                {
                    if (enemy.GetComponent<EnemyController>().GetDistanceTravelled() > strongestEnemy.GetComponent<EnemyController>().GetDistanceTravelled())
                    {
                        strongestEnemy = enemy.GetComponent<EnemyController>();
                    }
                }
            }

            return strongestEnemy;
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
            string currentBool = RifleIndex == 0 ? "Shoot_R" : "Shoot_L";
            Debug.Log(currentBool);

            bool hasAnimator = this.transform.GetChild(UpgradeLevel).TryGetComponent<Animator>(out var animator);

            if (lastFollowCourtine != null)
            {
                StopCoroutine(lastFollowCourtine);

                if (hasAnimator)
                {
                    if (currentBool == "Shoot_L")
                        animator.SetBool("Shoot_R", false);
                    else
                        animator.SetBool("Shoot_L", false);
                }
            }


            lastFollowCourtine = StartCoroutine(LookAtEnemy(enemy.transform));


            IsShooting = true;
            

            int givenDamage = 0;
            if (soldierData.GetWeapon(UpgradeLevel).DamageType == DamageType.Single)
            {
                givenDamage = GiveDamge(enemy, soldierData.GetWeapon(UpgradeLevel).Damage, true, RifleIndex);
                OnShoot?.Invoke(RifleIndex, enemy.transform.position);
            }
            else if (soldierData.GetWeapon(UpgradeLevel).DamageType == DamageType.Spraed)
            {
                givenDamage =GiveSpreadDamage(enemy);
            }
            else
            {
                givenDamage = GiveSplashDamage(enemy);
                OnShoot?.Invoke(RifleIndex, enemy.transform.position);
            }

            GamePlayerInformation.ChangeBalance(givenDamage);
            Debug.Log("OnShoot");

            if (hasAnimator)
                animator.SetBool(currentBool, true);

            yield return new WaitForSeconds(soldierData.GetWeapon(UpgradeLevel).Firerate);

            if (hasAnimator)
                animator.SetBool(currentBool, false);

            IsShooting = false;
        }

        int GiveDamge(EnemyController enemy, int damage, bool isTraced, int RifleIndex = 0)
        {
            int enemyHealthValue = enemy.GetHealth() - damage;
            OnHitEnemy?.Invoke(enemy.transform, enemyHealthValue >= 0, isTraced);
            
            int enemyHealth = enemy.GetHealth();
            enemy.TakeDamage(damage);

            int giveDamage = enemyHealth - enemy.GetHealth();
            TotalDamage += giveDamage;

            return giveDamage;
        }

        int GiveSpreadDamage(EnemyController firstEnemy)
        {
            int givenDamage = 0;

            List<Transform> enemiesInSpreadRangeTransform = FindEnemiesInSplashRange(firstEnemy, soldierData.GetWeapon(UpgradeLevel).SplashDamageSpread);

            int step = soldierData.GetWeapon(UpgradeLevel).MaxEnemiesInSpread;
            for (int i = 0; i < enemiesInSpreadRangeTransform.Count; i++)
            {
                EnemyController enemy = enemiesInSpreadRangeTransform[i].GetComponent<EnemyController>();

                int damage = soldierData.GetWeapon(UpgradeLevel).Damage * (step);

                givenDamage += GiveDamge(enemy, damage, enemy == firstEnemy);
                step -= 1;

                OnShoot?.Invoke(0, enemy.transform.position);
            }

            return givenDamage;
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

                givenDamage += GiveDamge(enemy, damage, enemy == firstEnemy);
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
            Vector3 enemyPos = enemy.position;

            //(float)Math.Sqrt(this.transform.position.x * enemyPos.x + this.transform.position.z * enemyPos.z)
            
            while (Vector2.Distance(this.transform.position, enemyPos) <= soldierData.GetViewRange(UpgradeLevel))
            {

                float delay = Time.fixedDeltaTime;

                float speed = 0.4f;

                //CurrentTowerObject.transform.LookAt(enemy.position);

                Transform currentTowerTransform = CurrentTowerObject.transform;

                Vector3 directionToEnemy = (enemyPos - currentTowerTransform.position);

                //currentTowerTransform.LookAt(enemyPos);

                currentTowerTransform.rotation = Quaternion.Slerp(
                    currentTowerTransform.rotation,
                    Quaternion.LookRotation(directionToEnemy, Vector3.up),
                    speed
            );


                yield return new WaitForSeconds(delay);
            }

            EnemyController enemyController = GetEnemy(targetMode);
            if(enemyController != null)
                lastFollowCourtine = StartCoroutine(LookAtEnemy(enemyController.transform));
        }
    }
}
