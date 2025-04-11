using System;
using System.Collections;
using System.Linq;
using System.Threading.Tasks;
using System.Xml.Schema;
using MMK.ScriptableObjects;
using MMK.Towers;
using Towers;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.EventSystems;

namespace DefaultNamespace
{
    public class RotateableTower : MonoBehaviour, IPointerDownHandler, IPointerUpHandler
    {
        public delegate void SpawnTowerProcessDelegate(Tower tower, TowerSkin skin = null);
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


        void Awake()
        {
            //TowerInventory.OnSelectTile += SpawnTowerOnPlatform;
            SpawnTowerProcess += SpawnTowerOnPlatform;
        }

        void OnDestroy()
        {
            SpawnTowerProcess -= SpawnTowerOnPlatform;
            //TowerInventory.OnSelectTile -= SpawnTowerOnPlatform;
        }

        void OnEnable()
        {
            TowerInventory.OnSelectTile += SpawnTowerOnPlatform;
            //SpawnTowerProcess += SpawnTowerOnPlatform;
        }

        void OnDisable()
        {
            //SpawnTowerProcess -= SpawnTowerOnPlatform;
            TowerInventory.OnSelectTile -= SpawnTowerOnPlatform;

            RemoveTowerFromPlatform();
        }


        void SpawnTowerOnPlatform(int index, GameObject tileUI, bool isUnlocked, Tower tower) => SpawnTowerOnPlatform(tower);


        void SpawnTowerOnPlatform(Tower tower, TowerSkin skin = null)
        {
            RemoveTowerFromPlatform();

            if (tower == null)
            {
                //Debug.LogException(new Exception("tower to spawn on platform is null"));
                return;
            }

            if (skin == null)
                skin = tower.CurrentSkin;

            SpawnTower(skin.TowerPrefab, tower.OriginPointOffset);
        }


        async void SpawnTower(GameObject towerToSpawn, Vector3 originOffset)
        {
            while(!this.gameObject.activeInHierarchy)
                await Task.Yield();

            Debug.Log("Spawn Tower");

            Tower = Instantiate(towerToSpawn, TowerContainer).transform;
            Debug.Log(Tower.name);

            Transform towerModel = Tower.transform.GetChild(0).GetChild(0);
            towerModel.gameObject.layer = LayerMask.NameToLayer("Tower");
            foreach (Transform towerModelChild in towerModel.transform)
                towerModelChild.gameObject.layer = LayerMask.NameToLayer("Tower");

            Animation();

            foreach (var component in Tower.GetComponents<MonoBehaviour>())
                Destroy(component);

            ResetPositionAndRotation(originOffset);
        }


        void ResetPositionAndRotation(Vector3 offset)
        {

            RotatablePlatform.localPosition = -Vector3.up + offset;
            Tower.localPosition = Vector3.zero + offset;
            Tower.localRotation = Quaternion.Euler(BaseRotation);
        }

        void RemoveTowerFromPlatform()
        {
            if (Tower == null)
                return;

            Destroy(Tower.gameObject);
            Tower = null;
        }


        async void Animation()
        {
            if (Tower.TryGetComponent<SoldierAnimation>(out var soldierAnimation))
            {
                //soldierAnimation.UpdateController.Invoke(0);
                soldierAnimation.ShootAnimation(Side.Right);
            }
        }

        //private void Awake()
        //{
        //    SpawnTowerProcess += OnSpawnTowerProcess;
        //}

        //private void OnDestroy()
        //{
        //    SpawnTowerProcess -= OnSpawnTowerProcess;
        //}

        //void OnEnable()
        //{
        //    //Debug.Log($"OnEnable");
        //    TowerInventory.OnSelectTile += OnSelectTile;           

        //    if(Tower == null)
        //        return;

        //    Tower.Rotate(BaseRotation);
        //}

        //void OnDisable()
        //{
        //    //Debug.Log($"OnEnable");
        //    TowerInventory.OnSelectTile -= OnSelectTile;
        //}


        //void OnSelectTile(int index, GameObject tileUI, bool isUnlocked, Tower tower)
        //{
        //    Debug.Log($"OnSelectTile");

        //    if(tower == null)
        //        return;

        //    SpawnTower(tower.CurrentSkin.TowerPrefab, tower.OriginPointOffset);

        //}

        //void OnSpawnTowerProcess(Tower tower, TowerSkin skin = null)
        //{
        //    Debug.Log($"OnSpawnTowerProcess");

        //    if (skin == null)
        //        skin = tower.CurrentSkin;

        //    SpawnTower(skin.TowerPrefab, tower.OriginPointOffset);

        //}


        //void SpawnTower(GameObject towerPrefab, Vector3 offset)
        //{
        //    if (Tower != null)
        //    {
        //        Destroy(Tower.gameObject);
        //    }

        //    var towerObject = Instantiate(towerPrefab, TowerContainer);

        //    Destroy(towerObject.GetComponent<TowerController>());

        //    Transform towerModel = towerObject.transform.GetChild(0).GetChild(0);
        //    towerModel.gameObject.layer = LayerMask.NameToLayer("Tower");
        //    foreach(Transform towerModelChild in towerModel.transform)
        //    {
        //        towerModelChild.gameObject.layer = LayerMask.NameToLayer("Tower");
        //    }

        //    if (towerObject.transform.TryGetComponent<SoldierAnimation>(out var soldierAnimation))
        //    {
        //        soldierAnimation.UpdateController.Invoke(0);
        //        soldierAnimation.ShootAnimation(Side.Right);
        //    }



        //    Tower = towerObject.transform;

        //    RotatablePlatform.localPosition = -Vector3.up + offset;
        //    Tower.localPosition = Vector3.zero + offset;
        //    Tower.localRotation = Quaternion.Euler(BaseRotation);
        //}





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
