using System;
using System.Collections;
using System.Threading.Tasks;
using System.Xml.Schema;
using DefaultNamespace;
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
        public Action<TargetMode> UpdateTargetMode;

        [Range(0,4)]
        public int UpgradeLevel;
        public bool IsPlaced;
        public TargetMode targetMode;

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
            UpdateTargetMode += OnUpdateTargetMode;

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
            UpdateTargetMode -= OnUpdateTargetMode;


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


        protected virtual void OnUpdateTargetMode(TargetMode mode)
        {
            targetMode = mode;
        }


    }



}

public static class TowerControllerUtility
{
    public static long GetTowerSellValue(this TowerController controler, TypeOfBuildng type)
    {
        switch (type)
        {
            case TypeOfBuildng.Soldier:
                SoldierController soldierController = ((SoldierController)controler);
                return soldierController.soldierData.GetTowerRealValue(controler.UpgradeLevel);
                break;
            case TypeOfBuildng.Farm:
                FarmController farmController = ((FarmController)controler);
                return farmController.farmData.GetTowerRealValue(controler.UpgradeLevel);
                break;
            case TypeOfBuildng.Booster:
                BoosterController boosterController = ((BoosterController)controler);
                return boosterController.boosterData.GetTowerRealValue(controler.UpgradeLevel);
                break;
            case TypeOfBuildng.Spawner:
                // return GetTowerRealValue();
                break;
            case TypeOfBuildng.Vehicle:
                // return GetTowerRealValue();
                break;
            default:
                // return GetTowerRealValue();
                break;
        }

        return 0;
    }

    static long GetTowerRealValue(this Farm data, int UpgradeLevel)
    {
        long totalTowerValue = data.GetPrice();
        for (int i = 1; i <= UpgradeLevel; i++)
        {
            totalTowerValue += data.GetUpgradePrice(i);
        }
        totalTowerValue /= 2;

        return totalTowerValue;
    }

    static long GetTowerRealValue(this Soldier data, int UpgradeLevel)
    {
        long totalTowerValue = data.GetPrice();
        for (int i = 1; i <= UpgradeLevel; i++)
        {
            totalTowerValue += data.GetUpgradePrice(i);
        }
        totalTowerValue /= 2;

        return totalTowerValue;
    }
    
    static long GetTowerRealValue(this Booster data, int UpgradeLevel)
    {
        long totalTowerValue = data.GetPrice();
        for (int i = 1; i <= UpgradeLevel; i++)
        {
            totalTowerValue += data.GetUpgradePrice(i);
        }
        totalTowerValue /= 2;

        return totalTowerValue;
    }


    public static BoosterData GetBoosterData()
    {
        BoosterController boosterController = GameObject.FindObjectOfType<BoosterController>();
        if (boosterController != null)
            return boosterController.GetBoosterData();

        return new BoosterData()
        {
            UpgradeDiscount = 1f,
            FirerateBoost = 1f,
            SpwnIntervalBoost = 1f,
            IncomeBoost = 1f
        };
    }
    
    
    
}
