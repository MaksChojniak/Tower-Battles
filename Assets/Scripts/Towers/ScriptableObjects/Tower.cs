using System;
using UnityEngine;

namespace MMK.ScriptableObjects
{
    // [CreateAssetMenu(fileName = "Weapons", menuName = "")]
    public class Tower : ScriptableObject
    {
        public string TowerName;
        public Sprite TowerSprite;
        public GameObject TowerPrefab;
        public Vector3 OriginPointOffset;
        
        public PlacementType PlacementType;

        
        public TypeOfBuildng Type; // idk if we need it
        
        
        public BaseProperties BaseProperties;
        

        public Sprite[] UpgradeIcon;

        public long[] UpgradePrice;
        
        
#region Base Properties
        
        public int GetUnlockedPrice() => BaseProperties.UnlockPrice;
        public bool IsUnlocked() => BaseProperties.IsUnlocked;
        public int GetRequiredWinsCount() => BaseProperties.RequiredWinsCount;
        public bool IsRequiredWinsCount(int currentWinsCount) => currentWinsCount >= BaseProperties.RequiredWinsCount;
        public void UnlockTower() =>  BaseProperties.IsUnlocked = true;

#endregion
        


        public long GetPrice() => UpgradePrice[0];
        public long GetUpgradePrice(int Level) => Level + 1 < GameSettingsManager.GetGameSettings().MaxUpgradeLevel ? UpgradePrice[Level + 1] : UpgradePrice[Level];
        
        public Sprite GetUpgradeSprite(int Level)  => Level + 1 < GameSettingsManager.GetGameSettings().MaxUpgradeLevel ? UpgradeIcon[Level + 1] : UpgradeIcon[Level];
        
        
        

    }


    [Serializable]
    public class BaseProperties
    {
        public int UnlockPrice;
        public int RequiredWinsCount;
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
