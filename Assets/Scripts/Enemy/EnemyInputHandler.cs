

using System;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using static UnityEngine.EventSystems.EventTrigger;

namespace MMK.Enemy
{
    public class EnemyInputHandler : MonoBehaviour
    {

        [SerializeField] GameObject[] Hitboxes;
        
        
        const int maxDistance = 1000;        
        
        public EnemyController EnemyController { private set; get; }


        [ContextMenu(nameof(UpdateHitboxes))]
        public void UpdateHitboxes()
        {
            Hitboxes = this.GetComponentsInChildren<MeshCollider>().Select(meshCollider => meshCollider.gameObject).ToArray();
        }
        
        

        void Awake()
        {
            EnemyController = this.GetComponent<EnemyController>();

            GameSceneInputHandler.OnInputClicked += CheckClickedObject;
        }

        void OnDestroy()
        {
            GameSceneInputHandler.OnInputClicked -= CheckClickedObject;
        }

        void Start()
        {
            
        }

        void Update()
        {

        }

        



        void CheckClickedObject(TouchData data)
        {
            if (data.HittedObjectUI)
                return;

            bool enemyIsClicked = false;

            if (data.IsObjectHitted(out var hit))
            {
                float maxEnemyDistance = 1.75f;
                GameObject[] enemies = GameObject.FindGameObjectsWithTag("Enemy").
                    Where(enemy => enemy.TryGetComponent<EnemyController>(out var enemyController) &&
                                   enemyController.HealthComponent.GetHealth() > 0 &&
                                   Vector2.Distance(new Vector2(enemy.transform.position.x, enemy.transform.position.z), new Vector2(hit.point.x, hit.point.z)) < maxEnemyDistance).
                    OrderBy(enemy => Vector2.Distance(new Vector2(enemy.transform.position.x, enemy.transform.position.z), new Vector2(hit.point.x, hit.point.z))).
                    ToArray();

                enemyIsClicked = (Hitboxes.Contains(hit.transform.gameObject) && hit.transform.gameObject.layer != GameSceneInputHandler.RagdollLayer) || (enemies.Length > 0 && enemies[0] == this.gameObject);
            }

            EnemyController.AnimationComponent.SetSelectedAnimation(enemyIsClicked);



            //Ray ray = new Ray();

            //if (!data.IsObjectHitted(out ray))
            //    return;

            //RaycastHit hit;

            //bool enemyIsClicked = false;

            //if (Physics.Raycast(ray, out hit, maxDistance)) //, HitboxLayer))
            //{
            //    float maxEnemyDistance = 1.75f;
            //    GameObject[] enemies = GameObject.FindGameObjectsWithTag("Enemy").
            //        Where(enemy => enemy.TryGetComponent<EnemyController>(out var enemyController) &&
            //                       enemyController.HealthComponent.GetHealth() > 0 &&
            //                       Vector2.Distance(new Vector2(enemy.transform.position.x, enemy.transform.position.z), new Vector2(hit.point.x, hit.point.z)) < maxEnemyDistance).
            //        OrderBy(enemy => Vector2.Distance(new Vector2(enemy.transform.position.x, enemy.transform.position.z), new Vector2(hit.point.x, hit.point.z))).
            //        ToArray();

            //    enemyIsClicked = (Hitboxes.Contains(hit.transform.gameObject) && hit.transform.gameObject.layer != GameSceneInputHandler.RagdollLayer) || (enemies.Length > 0 && enemies[0] == this.gameObject);
            //}


            //EnemyController.AnimationComponent.SetSelectedAnimation(enemyIsClicked);
        }



    }
}
