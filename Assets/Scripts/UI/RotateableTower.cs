using System;
using System.Collections;
using UnityEngine;
using UnityEngine.EventSystems;

namespace DefaultNamespace
{
    public class RotateableTower : MonoBehaviour, IPointerDownHandler, IPointerUpHandler
    {
        [SerializeField] Transform Tower;

        [Space(18)]
        [Header("Properties")]
        [SerializeField] Transform TowerContainer;
        [SerializeField] TowerInventory TowerInventory;
        [SerializeField] Vector3 BaseRotation;

        public float rotateSensitivity = 0.003f;
        
        Vector3 _startMousePosition;

        void Awake()
        {
            TowerInventory.OnSelectTile += OnSelectTile;
        }

        void OnDestroy()
        {
            TowerInventory.OnSelectTile -= OnSelectTile;
        }

        
        void OnSelectTile(int index, GameObject tileUI, bool isUnlocked)
        {
            GameObject towerPrefab = TowerInventory.TowerData.GetAllTowerInventoryData()[index].towerSO.TowerPrefab;
            SpawnTower(towerPrefab);
        }
        

        void SpawnTower(GameObject towerPrefab)
        {
            if(Tower != null)
                Destroy(Tower.gameObject);
            
            var towerObject = Instantiate(towerPrefab, TowerContainer);
            towerObject.transform.GetChild(0).GetChild(0).gameObject.layer = LayerMask.NameToLayer("Tower");

            Tower = towerObject.transform;

            Tower.localPosition = Vector3.zero;
            Tower.localRotation = Quaternion.Euler(BaseRotation);
        }
        

        void OnEnable()
        {
            if(Tower == null)
                return;
            
            Tower.Rotate(BaseRotation);
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
