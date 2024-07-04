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
        public bool isMaxLevel;
        
        public string Name;
        public Sprite Sprite;

        public long SellPrice;
        public long UpgradePrice;

        public bool HasTargettingMode;

        
        
        public BaseInformations(Soldier data, SoldierController controller)
        {
            Level = controller.GetLevel();
            isMaxLevel = Level >= 4;
            int nextLevelIndex = isMaxLevel ? Level : Level + 1;
            
            Name = data.TowerName;
            Sprite = data.GetUpgradeSprite(nextLevelIndex);
            
            SellPrice = data.GetTowerSellValue(nextLevelIndex);
            UpgradePrice = data.GetUpgradePrice(nextLevelIndex);

            HasTargettingMode = true;
        }
        
        public BaseInformations(Farm data, FarmController controller)
        {
            Level = controller.GetLevel();
            isMaxLevel = Level >= 4;
            int nextLevelIndex = isMaxLevel ? Level : Level + 1;
            
            Name = data.TowerName;
            Sprite = data.GetUpgradeSprite(nextLevelIndex);
            
            SellPrice = data.GetTowerSellValue(nextLevelIndex);
            UpgradePrice = data.GetUpgradePrice(nextLevelIndex);
            
            HasTargettingMode = false;
        }
        
        public BaseInformations(Booster data, BoosterController controller)
        {
            Level = controller.GetLevel();
            isMaxLevel = Level >= 4;
            int nextLevelIndex = isMaxLevel ? Level : Level + 1;
            
            Name = data.TowerName;
            Sprite = data.GetUpgradeSprite(nextLevelIndex);
            
            SellPrice = data.GetTowerSellValue(nextLevelIndex);
            UpgradePrice = data.GetUpgradePrice(nextLevelIndex);
            
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
