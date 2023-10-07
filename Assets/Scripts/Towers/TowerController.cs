using System;
using DefaultNamespace.ScriptableObjects;
using UnityEngine;

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

        [SerializeField] protected GameObject CurrentTowerObject;
        [SerializeField] GameObject SpawnRange;
        [SerializeField] GameObject ViewRange;
        

        public virtual void Awake()
        {
            ShowTowerInformation += ShowTowerInfo;
            ShowTowerSpawnRange += SetActiveSpawnRange;
            ShowTowerViewRange += SetActiveViewRange;
            PlaceTower += OnPlaceTower;

            GameTowerInformations.OnUpgradeTower += OnUpgradeTower;

            UpgradeLevel = 0;
        }
        
        public virtual void OnDestroy()
        {
            ShowTowerInformation -= ShowTowerInfo;
            ShowTowerSpawnRange -= SetActiveSpawnRange;
            ShowTowerViewRange -= SetActiveViewRange;
            PlaceTower -= OnPlaceTower;
            
            GameTowerInformations.OnUpgradeTower -= OnUpgradeTower;
        }
        
        public virtual void Start()
        {
            UpdateTower();
        }

        public virtual void Update()
        {
            
        }

        public virtual void FixedUpdate()
        {
            
        }



        protected virtual void OnUpgradeTower(TowerController towerController)
        {
            if(towerController != this || UpgradeLevel >= 4)
                return;
            
            UpgradeLevel += 1;
            
            UpdateTower();
            ShowTowerInformation(true);
        }

        protected virtual void UpdateTower()
        {
            CurrentTowerObject = this.transform.GetChild(UpgradeLevel).gameObject;

            for (int i = 0; i < 5; i++)
            {
                this.transform.GetChild(i).gameObject.SetActive(false);
            }

            CurrentTowerObject.SetActive(true);
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
