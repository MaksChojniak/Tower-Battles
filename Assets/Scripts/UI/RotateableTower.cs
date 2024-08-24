using System;
using System.Collections;
using MMK.ScriptableObjects;
using MMK.Towers;
using Towers;
using UnityEngine;
using UnityEngine.EventSystems;

namespace DefaultNamespace
{
    public class RotateableTower : MonoBehaviour, IPointerDownHandler, IPointerUpHandler
    {
        public delegate void SpawnTowerProcessDelegate(Tower tower, TowerSkin skin);
        public SpawnTowerProcessDelegate SpawnTowerProcess;
        
        
        [SerializeField] Transform Tower;

        [Space(18)]
        [Header("Properties")]
        [SerializeField] Transform TowerContainer;
        [SerializeField] Transform RotatablePlatform;
        [SerializeField] TowerInventory TowerInventory;
        [SerializeField] Vector3 BaseRotation;

        public float rotateSensitivity = 0.003f;
        
        Vector3 _startMousePosition;

        void OnEnable()
        {
            TowerInventory.OnSelectTile += OnSelectTile;
            SpawnTowerProcess += OnSpawnTowerProcess;
            
            
            if(Tower == null)
                return;
            
            Tower.Rotate(BaseRotation);
        }

        void OnDisable()
        {
            SpawnTowerProcess -= OnSpawnTowerProcess;
            TowerInventory.OnSelectTile -= OnSelectTile;
        }

        
        void OnSelectTile(int index, GameObject tileUI, bool isUnlocked, Tower tower)
        {
            if(tower == null)
                return;

            // Tower tower = TowerInventory.TowerData.GetAllTowerInventoryData()[index].towerSO;
            // GameObject towerPrefab = tower.CurrentSkin.TowerPrefab;
            // Vector3 towerOffset = tower.OriginPointOffset;
            // SpawnTower(towerPrefab, towerOffset);
            SpawnTower(tower.CurrentSkin.TowerPrefab, tower.OriginPointOffset);
            
        }

        void OnSpawnTowerProcess(Tower tower, TowerSkin skin)
        {
            SpawnTower(skin.TowerPrefab, tower.OriginPointOffset);
            
        }
        

        void SpawnTower(GameObject towerPrefab, Vector3 offset)
        {
            if(Tower != null)
                Destroy(Tower.gameObject);
            
            var towerObject = Instantiate(towerPrefab, TowerContainer);

            Destroy(towerObject.GetComponent<TowerController>());

            Transform towerModel = towerObject.transform.GetChild(0).GetChild(0);
            towerModel.gameObject.layer = LayerMask.NameToLayer("Tower");
            foreach(Transform towerModelChild in towerModel.transform)
            {
                towerModelChild.gameObject.layer = LayerMask.NameToLayer("Tower");
            }

            if (towerObject.transform.TryGetComponent<SoldierAnimation>(out var soldierAnimation))
            {
                soldierAnimation.UpdateController(0);
                soldierAnimation.ShootAnimation(Side.Right);
            }
            


            Tower = towerObject.transform;

            RotatablePlatform.localPosition = -Vector3.up + offset;
            Tower.localPosition = Vector3.zero + offset;
            Tower.localRotation = Quaternion.Euler(BaseRotation);
        }
        




        Coroutine coroutine;
        public void OnPointerDown(PointerEventData eventData)
        {
            
            if(Tower == null)
                return;
            
            _startMousePosition = Input.mousePosition;

            if(coroutine != null)
                StopCoroutine(coroutine);
            coroutine = StartCoroutine(OnDrag());
        }

        IEnumerator OnDrag()
        {
            while (true)
            {

                if(Tower == null)
                    yield break;
            
                var delta = _startMousePosition - Input.mousePosition;
                Tower.Rotate(new Vector3(0, delta.x * rotateSensitivity, 0));

                yield return new WaitForSeconds(Time.fixedDeltaTime);
            }
            
        }

        public void OnPointerUp(PointerEventData eventData)
        {
            if(coroutine != null)
                StopCoroutine(coroutine);

            coroutine = null;
        }
    }
}
