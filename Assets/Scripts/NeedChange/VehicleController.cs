// using System.Collections;
// using System.Collections.Generic;
// using UnityEngine;
// using PathCreation;
// using UnityEngine.UI;
//
// public class VehicleController : MonoBehaviour
// {
//     public Vehicle component;
//
//     public int currentUpgradeLevel;
//     public int health;
//
//     [SerializeField] PathCreator pathCreator;
//     [SerializeField] Transform endPosition;
//
//     [SerializeField] float distanceTravelled;
//
//     RectTransform canvasHP;
//
//     void Awake()
//     {
//         pathCreator = GameObject.FindGameObjectWithTag("Path").GetComponent<PathCreator>();
//         endPosition = GameObject.FindGameObjectWithTag("VehicleEndLoopPosition").transform;
//
//         canvasHP = transform.GetChild(transform.childCount - 1).GetChild(0).GetComponent<RectTransform>();
//     }
//     void Start()
//     {
//         distanceTravelled = pathCreator.path.length;
//
//         health = component.GetHealth(currentUpgradeLevel);
//     }
//
//     void Update()
//     {
//         Move();
//
//         canvasHP.transform.GetChild(0).GetComponent<Image>().fillAmount = ((float)health / (float)component.GetHealth(currentUpgradeLevel));
//
//         if(Vector3.Distance(this.transform.position, endPosition.position) < 1)
//         {
//             Destroy(this.gameObject);
//         }
//     }
//
//     void Move()
//     {
//         distanceTravelled -= component.speed * 2.5f * Time.deltaTime;
//         transform.position = pathCreator.path.GetPointAtDistance(distanceTravelled);
//         transform.rotation = pathCreator.path.GetRotationAtDistance(distanceTravelled) * Quaternion.Euler(0, 180, 0);
//     }
//
//
//     private void OnCollisionEnter(Collision collision)
//     {
//         if (collision.transform.GetComponent<EnemyController>() != null)
//         {
//             int enemyHP = collision.transform.GetComponent<EnemyController>().health - health;
//             int vehicleHP = health - collision.transform.GetComponent<EnemyController>().health;
//
//             if (enemyHP <= 0)
//             {
//                 WaveManager.destroyEnemy(collision.transform.gameObject);
//             }
//             else
//             {
//                 collision.transform.GetComponent<IDamageable>().Damage(health);
//             }
//
//             if (vehicleHP <= 0)
//             {
//                 Destroy(this.gameObject);
//             }
//             else
//             {
//                 health -= collision.transform.GetComponent<EnemyController>().health;
//             }
//         }
//     }
// }
