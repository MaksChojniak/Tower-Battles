using System;
using System.Collections;
using System.Collections.Generic;
using DefaultNamespace.ScriptableObjects;
using UnityEngine;

namespace DefaultNamespace
{
    public class SoldierController : TowerController
    {
        public event Action<int> OnShoot; 
        
        public Soldier soldierData;

        bool IsShooting;


        protected override (object, TypeOfBuildng) GetTowerData()
        {
            return (soldierData, soldierData.Type);
            
            // return base.GetTowerData();
        }

        public override void Awake()
        {
            base.Awake();
        }

        public override void Update()
        {
            base.Update();

            UpdateViewRange((float)soldierData.GetViewRange(UpgradeLevel));
            
            TowerShootProcess();
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
            
            enemy.TakeDamage(soldierData.GetWeapon(UpgradeLevel).Damage);
            Debug.Log("OnShoot");

            yield return new WaitForSeconds(soldierData.GetWeapon(UpgradeLevel).Firerate);

            IsShooting = false;
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
