using DefaultNamespace;
using MMK.Towers;
using MMK.ScriptableObjects;
using UnityEngine;

namespace MMK.Towers
{
    
    
    public static class TowerControllerUtility
    {

#region Try Get Value

        public static bool TryGetInfo<T1,T2>(this (Tower Data, TowerController Controller) baseData, out T1  data, out T2 controller) where T1 : Tower where T2 : TowerController
        {
            data = null;
            controller = null;
        
            return baseData.Data.TryGetData<T1>(out data) && baseData.Controller.TryGetController<T2>(out controller);
        }


#region Try Get  data (Tower Type)

        public static bool TryGetData<T>(this Tower Data, out T  data) where T : Tower
        {
            data = null;
            if (Data is not T)
                return false;
            
            data = (T) Data;
            return true;
        }
        
        public static bool TryGetData<T>(this Tower Data) where T : Tower
        {
            if (Data is not T)
                return false;
            
            return true;
        }
        
#endregion




#region Try Get Controller
        
        public static bool TryGetController<T>(this TowerController Controller, out T  controller) where T : TowerController
        {
            controller = null;
            if (Controller is not T)
                return false;
            
            controller = (T)Controller;
            return true;
        }
        
        public static bool TryGetController<T>(this TowerController Controller) where T : TowerController
        {
            if (Controller is not T)
                return false;
            
            return true;
        }
        
#endregion

        
#endregion
        
        
        
        
        public static long GetTowerSellValue(this Tower data, int Level)
        {
            PriceData priceData = new PriceData();

            if (data.TryGetData<Soldier>(out var soldierData))
                priceData = new PriceData(soldierData, Level);
            else if (data.TryGetData<Booster>(out var boosterData))
                priceData = new PriceData(boosterData, Level);
            else if (data.TryGetData<Farm>(out var farmData))
                priceData = new PriceData(farmData, Level);
            // else if (controler.TryGetController<Spawner>(out var spawnerData))
            //     priceData = new PriceData(spawnerData, Index);

            return GetSellValue(priceData);
        }

        static long GetTotalValue(PriceData priceData)
        {
            long totalValue = priceData.price;
            foreach (var upgradePrice in priceData.upgradePrices)
            {
                totalValue += upgradePrice;
            }

            return totalValue;
        }
        static long GetSellValue(PriceData priceData) => GetTotalValue(priceData) / 2;

   

        public static BoosterData GetBoosterData()
        {
            BoosterController boosterController = GameObject.FindObjectOfType<BoosterController>();
            // if (boosterController != null)
            //     return boosterController.GetBoosterData();
        
            return new BoosterData()
            {
                UpgradeDiscount = 1f,
                FirerateBoost = 1f,
                SpwnIntervalBoost = 1f,
                IncomeBoost = 1f
            };
        }
    }
    
    
    
    
}
