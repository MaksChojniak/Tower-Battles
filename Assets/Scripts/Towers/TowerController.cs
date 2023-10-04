using System;
using System.Collections;
using DefaultNamespace.ScriptableObjects;
using UnityEditor.Media;
using UnityEngine;
using UnityEngine.AI;

namespace DefaultNamespace
{
    public abstract class TowerController : MonoBehaviour
    {
        public static event Action<object, TypeOfBuildng, bool, TowerController> OnShowTowerInformation;
        public static Action<GameObject, bool> ShowTowerSpawnRange;
        
        public Action<bool> ShowTowerInformation;
        public Action PlaceTower;
        public Action<bool> ShowTowerViewRange;

        [Range(0,4)]
        public int UpgradeLevel;
        public bool IsPlaced;

        [SerializeField] GameObject SpawnRange;
        [SerializeField] GameObject ViewRange;
        

        public virtual void Awake()
        {
            ShowTowerInformation += ShowTowerInfo;
            ShowTowerSpawnRange += SetActiveSpawnRange;
            ShowTowerViewRange += SetActiveViewRange;
            PlaceTower += OnPlaceTower;

            UpgradeLevel = 0;
        }
        
        public virtual void OnDestroy()
        {
            ShowTowerInformation -= ShowTowerInfo;
            ShowTowerSpawnRange -= SetActiveSpawnRange;
            ShowTowerViewRange -= SetActiveViewRange;
            PlaceTower -= OnPlaceTower;
        }
        
        public virtual void Start()
        {
            
        }

        public virtual void Update()
        {
            
        }

        public virtual void FixedUpdate()
        {
            
        }


        public bool ViewRangeIsActive => ViewRange.activeSelf;

        void ShowTowerInfo(bool state)
        {
            (object, TypeOfBuildng) data = GetTowerData();
            OnShowTowerInformation?.Invoke(data.Item1, data.Item2, state, this);
        }

        protected virtual (object, TypeOfBuildng) GetTowerData()
        {
            return (null, TypeOfBuildng.Soldier);
        }
        

        void OnPlaceTower()
        {
            this.gameObject.layer = LayerMask.NameToLayer("Tower");
            IsPlaced = true;

            for (int i = 0; i < this.gameObject.transform.childCount; i++)
            {
                if(this.gameObject.transform.GetChild(i).TryGetComponent(typeof(TowerHitbox), out var hitbox))
                    hitbox.gameObject.layer = LayerMask.NameToLayer("Tower");
            }
        }

        protected void UpdateViewRange(float range)
        {
            ViewRange.GetComponent<RectTransform>().sizeDelta = new Vector2(range * 2, range * 2);
        }

        void SetActiveSpawnRange(GameObject currentTower, bool state)
        {
            if(this.gameObject != currentTower)
                SpawnRange.SetActive(state);
        }

        void SetActiveViewRange(bool state)
        {
            ViewRange.SetActive(state);
        }

        
    }
}
