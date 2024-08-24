using System;
using System.Linq;
using UnityEngine;

namespace MMK.ScriptableObjects
{
    // [CreateAssetMenu(fileName = "Weapons", menuName = "")]
    
    public enum TowerRarity
    {
        Common,
        Rare,
        Exclusive,
    }
    
    
    [Serializable]
    public class Tower : ScriptableObject
    {
        public delegate void OnUnlockTowerDelegate(Tower tower);
        public static OnUnlockTowerDelegate OnUnlockTower;


        
        public string ID;
        public string TowerName;
        
        public TowerRarity Rarity;

        public TowerSkin CurrentSkin => TowerSkins[SkinIndex];
        public TowerSkin[] TowerSkins;
        public int SkinIndex = 0;
        
        public Vector3 OriginPointOffset;
        
        public PlacementType PlacementType;

        
        public TypeOfBuildng Type; // idk if we need it
        
        
        public BaseProperties BaseProperties;
        

        public long[] UpgradePrice;
        
        
        
        
#region Base Properties
        
        public ulong GetUnlockedPrice() => BaseProperties.UnlockPrice;
        public bool IsUnlocked() => BaseProperties.IsUnlocked;
        public ulong GetRequiredWinsCount() => BaseProperties.RequiredWinsCount;
        public bool IsRequiredWinsCount(ulong currentWinsCount) => currentWinsCount >= BaseProperties.RequiredWinsCount;
        // public void UnlockTower() =>  BaseProperties.IsUnlocked = true;


        public void SetSkinIndex(int index)
        {
            SkinIndex = index;
            
            OnUnlockTower?.Invoke(this);
        }
        
        
        public void UnlockTower()
        {
            BaseProperties.IsUnlocked = true;
            
            OnUnlockTower?.Invoke(this);
        }

#endregion
        


        public long GetPrice() => UpgradePrice[0];
        public long GetUpgradePrice(int Level) => Level + 1 < GlobalSettingsManager.GetGlobalSettings().MaxUpgradeLevel ? UpgradePrice[Level + 1] : UpgradePrice[Level];
        
        public Sprite GetUpgradeSprite(int Level)  => CurrentSkin.UpgradeIcon[Level];
        
        
        
        
        
        
        public static Tower GetTowerBySkinID(string TowerSkinID)
        {
            Tower tower = GlobalSettingsManager.GetGlobalSettings?.Invoke().Towers.FirstOrDefault(_tower => _tower.TowerSkins.Any(_skin => _skin.ID == TowerSkinID) );
            if(tower == null)
                return null;
            
            return tower;
        }

    }

    
    

    [Serializable]
    public class BaseProperties
    {
        public ulong UnlockPrice;
        public ulong RequiredWinsCount;
        public bool IsUnlocked;
    }
    


    public enum PlacementType
    {
        Ground,
        Cliff
    }
    
    public enum TypeOfBuildng
    {
        Soldier,
        Spawner,
        Farm,
        Vehicle,
        Booster
    }
}
