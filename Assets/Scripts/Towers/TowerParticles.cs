using DefaultNamespace;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using MMK.Towers;
using UnityEngine;
using static UnityEngine.EventSystems.EventTrigger;

namespace Assets.Scripts.Towers
{
    public class TowerParticles : MonoBehaviour    
    {
        
        // [SerializeField] Transform[] startPositions;
        // [SerializeField] LineRenderer[] lineRenderers;
        //
        // Vector3 startPosition;
        // LineRenderer lineRenderer;
        //
        // float bulletSpeed = 1;
        // float maxBulletTrailLenght = 6.5f;
        //
        // [SerializeField] ParticleSystem explosionParticle;
        //
        // [SerializeField] ParticleSystem bloodParticle;
        //
        //
        // private void OnEnable()
        // {
        //     bool isSoldier = this.transform.parent.TryGetComponent<SoldierController>(out var soldierController);
        //
        //     if(isSoldier)
        //         soldierController.OnShoot += OnShoot;
        //
        //     if (isSoldier)
        //         soldierController.OnHitEnemy += OnHitEnemy;
        // }
        //
        // private void OnDisable()
        // {
        //     bool isSoldier = this.transform.parent.TryGetComponent<SoldierController>(out var soldierController);
        //
        //     if (isSoldier)
        //         soldierController.OnShoot -= OnShoot;
        //
        //     if (isSoldier)
        //         soldierController.OnHitEnemy -= OnHitEnemy;
        //
        //     StopAllCoroutines();
        //
        //     Transform root = lineRenderers[0].transform.parent;
        //     for (int i = 0; i < root.childCount; i++)
        //     {
        //         GameObject childObject = root.GetChild(i).gameObject;
        //
        //         bool hasLineRenderer = childObject.TryGetComponent<LineRenderer>(out var lineRendererChild);
        //
        //         if ( (childObject.gameObject != bloodParticle.transform.parent.gameObject) && 
        //             !startPositions.Contains(childObject.transform) && ( (hasLineRenderer && !lineRenderers.Contains(lineRendererChild)) || (!hasLineRenderer) ) )
        //         {
        //             Destroy(childObject);
        //         }
        //
        //     }
        // }
        //
        //
        // //Coroutine BulletAnimationCoroutine;
        // void OnShoot(int RifleIndex, Transform enemy, Vector3 targetPos, bool isTraced)
        // {
        //     if (!SettingsManager.Instance.SettingsData.ParticlesActive)
        //         return;
        //
        //     if (isTraced && this.transform.parent.TryGetComponent<SoldierController>(out var soldierController) && soldierController.soldierData.GetWeapon(soldierController.UpgradeLevel).ShootingType == DefaultNamespace.ScriptableObjects.ShootingType.Throwable)
        //     {
        //         Debug.Log($"<color=red> Is Throwable </color>");
        //         if (this.TryGetComponent<ThrowPath>(out var throwPathController))
        //         {
        //             Debug.Log($"<color=red> Has Bezier Path </color>");
        //             throwPathController.ThrowObject(enemy);
        //         }
        //
        //         return;
        //     }
        //
        //     bulletSpeed = Vector3.Distance(this.transform.position, targetPos) / maxBulletTrailLenght;
        //
        //     StartCoroutine(BulletAnimation(targetPos, RifleIndex));
        // }
        //
        // IEnumerator BulletAnimation(Vector3 targetPos, int RifleIndex)
        // {
        //     var _lineRenderer = Instantiate(lineRenderers[RifleIndex], lineRenderers[RifleIndex].transform.parent);
        //     var _startPosition = startPositions[RifleIndex].position;
        //
        //     _lineRenderer.positionCount = 2;
        //
        //     Vector3 startPos = _startPosition;
        //     Vector3 endPos = _startPosition;
        //
        //     targetPos += (targetPos- _startPosition).normalized;
        //
        //     _lineRenderer.SetPosition(0, startPos);
        //     _lineRenderer.SetPosition(1, endPos);
        //
        //     while (Vector3.Distance(endPos, targetPos) > 0.1f)
        //     {
        //         endPos = Vector3.Lerp(endPos, targetPos, 0.5f);
        //         _lineRenderer.SetPosition(1, endPos);
        //
        //         yield return new WaitForSeconds(Time.deltaTime * 2f / bulletSpeed);
        //     }
        //
        //     yield return new WaitForSeconds(0.01f / bulletSpeed);
        //
        //     while (Vector3.Distance(startPos, targetPos) > 0.1f)
        //     {
        //         startPos = Vector3.Lerp(startPos, targetPos, 0.5f);
        //         _lineRenderer.SetPosition(0, startPos);
        //
        //         yield return new WaitForSeconds(Time.deltaTime / bulletSpeed / 4f / 4f);
        //     }
        //
        //     _lineRenderer.positionCount = 0;
        //
        //     Destroy(_lineRenderer.gameObject);
        //
        //     //BulletAnimationCoroutine = null;
        // }
        //
        //
        // void OnHitEnemy(Transform enemy, bool isAlive, bool isTraced)
        // {
        //     if (!SettingsManager.Instance.SettingsData.ParticlesActive)
        //         return;
        //
        //     if (!isAlive)
        //     {
        //         Debug.Log($"{nameof(PlayBloodSpray)} is alive");
        //         PlayBloodSpray(enemy);
        //     }
        //
        //     if(isTraced)
        //         PlayExplosionParticle(enemy);
        // }
        //
        // void PlayExplosionParticle(Transform enemy)
        // {
        //     if (explosionParticle == null)
        //         return;
        //
        //     StartCoroutine(SpawnExplosionParticle(enemy));
        // }
        //
        // IEnumerator SpawnExplosionParticle(Transform enemy)
        // {
        //     Debug.Log($"{nameof(SpawnExplosionParticle)}");
        //
        //     Vector3 enemyPosition = enemy.position;
        //
        //     var _explosionParticle = Instantiate(explosionParticle.gameObject, enemyPosition, Quaternion.identity).GetComponent<ParticleSystem>();
        //     _explosionParticle.transform.position = enemyPosition;
        //
        //     _explosionParticle.Play();
        //
        //     Destroy(_explosionParticle.gameObject, 5f);
        //
        //     yield break;
        // }
        //
        // void PlayBloodSpray(Transform enemy)
        // {
        //     if (bloodParticle == null)
        //         return;
        //
        //     StartCoroutine(SpawnBloodSpray(enemy));
        // }
        //
        // IEnumerator SpawnBloodSpray(Transform enemy)
        // {
        //     Debug.Log($"{nameof(SpawnBloodSpray)}");
        //
        //     Vector3 enemyPosition = enemy.position;
        //
        //     var _bloodParticle = Instantiate(bloodParticle, enemyPosition, Quaternion.identity);//, bloodParticle.transform.parent.parent.transform);
        //     _bloodParticle.transform.position = enemyPosition;
        //
        //     _bloodParticle.Play();
        //
        //     Destroy(_bloodParticle.gameObject, 5f);
        //
        //     yield break;
        //     //yield return new WaitUntil( new Func<bool>( () => !_bloodParticle.isPlaying) );
        //
        //     //Destroy(_bloodParticle.gameObject);
        // }

    }
}
