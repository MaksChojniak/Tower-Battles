using System;
using DefaultNamespace;
using MMK.ScriptableObjects;
using MMK.Towers;
using UnityEngine;

namespace Towers
{
    
    [Serializable]
    public struct BaseInformations
    {
        public int Level;
        public bool isMaxLevel => Level >= 4;
        
        public string Name;
        public Sprite Sprite;

        public long SellPrice;
        public long UpgradePrice;

        public bool HasTargettingMode;

        
        
        public BaseInformations(Soldier data, SoldierController controller)
        {
            Level = controller.GetLevel();
            Name = data.TowerName;
            Sprite = data.GetUpgradeSprite(controller.GetLevel());
            SellPrice = data.GetTowerSellValue(controller.GetLevel());
            UpgradePrice = data.GetUpgradePrice(controller.GetLevel());

            HasTargettingMode = true;
        }
        
        public BaseInformations(Farm data, FarmController controller)
        {
            Level = controller.GetLevel();
            Name = data.TowerName;
            Sprite = data.GetUpgradeSprite(controller.GetLevel());
            SellPrice = data.GetTowerSellValue(controller.GetLevel());
            UpgradePrice = data.GetUpgradePrice(controller.GetLevel());
            
            HasTargettingMode = false;
        }
        
        public BaseInformations(Booster data, BoosterController controller)
        {
            Level = controller.GetLevel();
            Name = data.TowerName;
            Sprite = data.GetUpgradeSprite(controller.GetLevel());
            SellPrice = data.GetTowerSellValue(controller.GetLevel());
            UpgradePrice = data.GetUpgradePrice(controller.GetLevel());
            
            HasTargettingMode = false;
        }
        
        // public BaseInformations(Spawner data, SpawnerController controller)
        // {
        //     Level = controller.GetLevel();
        //     Name = data.TowerName;
        //     Sprite = data.GetUpgradeSprite(controller.GetLevel());
        //     SellPrice = data.GetTowerSellValue(controller.GetLevel());
        //     UpgradePrice = data.GetUpgradePrice(controller.GetLevel());
        //  
        //     HasTargettingMode = true;
        // }

    }
    
    
}
