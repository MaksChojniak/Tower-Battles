using System;
using System.Collections;
using System.Threading.Tasks;
using System.Xml.Schema;
using DefaultNamespace.ScriptableObjects;
using UnityEngine;

namespace DefaultNamespace
{
    public abstract class TowerController : MonoBehaviour
    {
        public static event Action<object, TypeOfBuildng, bool, TowerController> OnShowTowerInformation;
        public static Action<GameObject, bool> ShowTowerSpawnRange;
        public static event Action OnDestroyTower;

        public Action DestroyTower;
        public Action<bool> ShowTowerInformation;
        public Action PlaceTower;
        public Action<bool> ShowTowerViewRange;

        [Range(0,4)]
        public int UpgradeLevel;
        public bool IsPlaced;

        [SerializeField] protected GameObject CurrentTowerObject;
        public TowerViewRange ViewRange;
        public TowerSpawnRange SpawnRange;
        [SerializeField] GameObject SelectedRingImage;


        public virtual void Awake()
        {
            ShowTowerInformation += ShowTowerInfo;
            ShowTowerSpawnRange += SetActiveSpawnRange;
            ShowTowerViewRange += SetActiveViewRange;
            PlaceTower += OnPlaceTower;
            DestroyTower += Destroy;

            GameTowerInformations.OnUpgradeTower += OnUpgradeTower;

            UpgradeLevel = 0;
        }
        
        public virtual void OnDestroy()
        {
            ShowTowerInformation -= ShowTowerInfo;
            ShowTowerSpawnRange -= SetActiveSpawnRange;
            ShowTowerViewRange -= SetActiveViewRange;
            PlaceTower -= OnPlaceTower;
            DestroyTower -= Destroy;


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

        protected virtual void Destroy()
        {
            Debug.Log("xd xd");
            OnDestroyTower?.Invoke();
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
        

        public bool ViewRangeIsActive => ViewRange.IsActive();

        void ShowTowerInfo(bool state)
        {
            (object, TypeOfBuildng) data = GetTowerData();
            OnShowTowerInformation?.Invoke(data.Item1, data.Item2, state, this);

            SelectedRingImage.SetActive(state);
        }


        protected virtual (object, TypeOfBuildng) GetTowerData()
        {
            return (null, TypeOfBuildng.Soldier);
        }
        

        void OnPlaceTower()
        {
            this.gameObject.layer = LayerMask.NameToLayer("Tower");
            IsPlaced = true;
            SpawnRange.Place();

            for (int i = 0; i < this.gameObject.transform.childCount; i++)
            {
                if(this.gameObject.transform.GetChild(i).TryGetComponent(typeof(TowerHitbox), out var hitbox))
                    hitbox.gameObject.layer = LayerMask.NameToLayer("Hitbox");
            }
        }

        protected void UpdateViewRange(float range)
        {
            ViewRange.ViewRange = range;
        }

        void SetActiveSpawnRange(GameObject currentTower, bool state)
        {
            SpawnRange.SetActive(state);

            if (!state)
                return;

            SpawnRange.SetState(this.gameObject == currentTower);
            ViewRange.SetState(this.gameObject == currentTower);
        }

        void SetActiveViewRange(bool state)
        {
            ViewRange.SetState(state);
            ViewRange.SetActive(state);
        }

        
    }



}
