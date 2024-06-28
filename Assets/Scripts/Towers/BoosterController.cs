using MMK.ScriptableObjects;
using MMK.Towers;

namespace DefaultNamespace
{
    public struct BoosterData
    {
        public float UpgradeDiscount;
        public float FirerateBoost;
        public float SpwnIntervalBoost;
        public float IncomeBoost;
    }

    public class BoosterController : TowerController
    {
         
    //     public Booster boosterData;
    //     
    //     public int TotalEarnedMoney;
    //     
    //
    //     protected override (object, TypeOfBuildng) GetTowerData()
    //     {
    //         return (boosterData, boosterData.Type);
    //         
    //         // return base.GetTowerData();
    //     }
    //
    //
    //     public override void Awake()
    //     {
    //         base.Awake();
    //         
    //         UpdateViewRange(0f);
    //     }
    //
    //     protected override void Destroy()
    //     {
    //         GamePlayerInformation.ChangeBalance(this.GetTowerSellValue(boosterData.Type));
    //
    //         this.ShowTowerInformation(false);
    //
    //         Destroy(this.gameObject);
    //         
    //         base.Destroy();
    //     }
    //
    //     public override void Update()
    //     {
    //         base.Update();
    //     }
    //
    //     protected override void OnUpgradeTower(TowerController towerController)
    //     {
    //         if (towerController != this || UpgradeLevel >= 4)
    //             return;
    //
    //         if (GamePlayerInformation.Instance == null || GamePlayerInformation.Instance.GetBalance() < boosterData.GetUpgradePrice(UpgradeLevel))
    //         {
    //             WarningSystem.ShowWarning(WarningSystem.WarningType.NotEnoughtMoney);
    //             return;
    //         }
    //
    //         GamePlayerInformation.ChangeBalance(-boosterData.GetUpgradePrice(UpgradeLevel));
    //         
    //         base.OnUpgradeTower(towerController);
    //     }
    //
    //
    //     public BoosterData GetBoosterData()
    //     {
    //         return new BoosterData()
    //         {
    //             UpgradeDiscount = boosterData.GetUpgradeDiscount(UpgradeLevel),
    //             FirerateBoost = boosterData.GetFirerateBoost(UpgradeLevel),
    //             SpwnIntervalBoost = boosterData.GetSpwnIntervalBoost(UpgradeLevel),
    //             IncomeBoost = boosterData.GetIncomeBoost(UpgradeLevel)
    //         };
    //     }
         
    }
    
    
    
    
    //Boost stats of nearby towers
    //     void BoostTower()
    //     {
    //         if (component.type != TypeOfBuildng.booster) return;
    //
    //         Booster boosterComponent = (component as Booster);
    //
    //
    //         List<BuildingController> buildingsInViewRange = new List<BuildingController>();
    //         foreach (var building in GameObject.FindObjectsOfType<BuildingController>())
    //         {
    //             building.firerateBoostMultiplier = 1;
    //             building.upgradeDiscountMultiplier = 1;
    //
    //             if (Vector3.Distance(this.transform.position, building.transform.position) <= boosterComponent.GetViewRange(currentUpgradeLevel))
    //                 buildingsInViewRange.Add(building);
    //         }
    //
    //         foreach(var building in buildingsInViewRange)
    //         {
    //             if (building.component.type != TypeOfBuildng.booster)
    //             {
    //                 building.firerateBoostMultiplier = boosterComponent.GetFirerateBoost(currentUpgradeLevel);
    //                 building.upgradeDiscountMultiplier = boosterComponent.GetUpgradeDiscount(currentUpgradeLevel);
    //                 building.IntervalBoostMultiplier = boosterComponent.GetIntervalBoost(currentUpgradeLevel);
    //                 building.IncomeBoostMultiplier = boosterComponent.GetIncomeBoost(currentUpgradeLevel);
    //             }
    //         }
    //     }
    //

}
