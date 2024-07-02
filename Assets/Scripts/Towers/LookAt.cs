using System;
using System.Collections;
using MMK.ScriptableObjects;
using UnityEngine;

namespace MMK.Towers
{
    
    
    public class LookAt : MonoBehaviour
    {
        public delegate void SetViewRangeDelegate(float ViewRangeValue);
        public SetViewRangeDelegate SetViewRange;


        float ViewRange;
        
        
        public SoldierController SoldierController { get; set; }

        
        void Awake()
        {
            SoldierController = this.GetComponent<SoldierController>();
            
            RegisterHandlers();
            
        }

        void OnDestroy()
        {
            UnregisterHandlers();
            
        }

        void Start()
        {
            
        }

        void Update()
        {
            
        }


#region Register & Unregister Handlers

        void RegisterHandlers()
        {
            SoldierController.TowerWeaponComponent.OnShoot += FollowEnemy;
            SetViewRange += OnSetViewRange;

        }
        
        void UnregisterHandlers()
        {
            SetViewRange -= OnSetViewRange;
            SoldierController.TowerWeaponComponent.OnShoot -= FollowEnemy;
            
        }
        
#endregion



        void OnSetViewRange(float viewRange)
        {
            ViewRange = viewRange;
        }
        

        void FollowEnemy(EnemyController target, Side[] WeaponSide, bool EnemyInCenter, Weapon Weapon)
        {
            if(!EnemyInCenter)
                return;
            
            if(lastFollowCourtine != null)
                StopCoroutine(lastFollowCourtine);

            lastFollowCourtine = StartCoroutine(LookAtEnemy(target));
        }
        
        
        
        
        const float followTime = 0.2f;
        Coroutine lastFollowCourtine;
        IEnumerator LookAtEnemy(EnemyController enemy)
        {
            Vector3 enemyPos = enemy.transform.position;
            
            GameObject towerObject = this.transform.GetChild(SoldierController.GetLevel()).gameObject;
            Transform towerTransform = towerObject.transform;
            
            while (Vector2.Distance(this.transform.position, enemyPos) <= ViewRange)
            {
        
                float delay = Time.fixedDeltaTime;
        
                float speed = 0.4f;
                
                Vector3 directionToEnemy = (enemyPos - towerTransform.position);
        
                towerTransform.rotation = Quaternion.Slerp(
                    towerTransform.rotation,
                    Quaternion.LookRotation(directionToEnemy, Vector3.up),
                    speed
            );
        
        
                yield return new WaitForSeconds(delay);
            }
        
            EnemyController enemyController = SoldierController.ViewRangeComponent.GetEnemyByMode(SoldierController.TargetMode);
            if(enemyController != null)
                lastFollowCourtine = StartCoroutine(LookAtEnemy(enemyController));
        }
        
        

    }
    
    
}
