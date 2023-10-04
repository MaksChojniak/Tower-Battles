using System;
using UnityEngine;

namespace DefaultNamespace.ScriptableObjects
{
    // [CreateAssetMenu(fileName = "Weapons", menuName = "")]
    public class Tower : ScriptableObject
    {
        public string TowerName;
        public Sprite TowerSprite;
        public GameObject TowerPrefab;
        public TypeOfBuildng Type;

        [Space(18)]
        public PlacementType PlacementType;

        [Space(18)]
        public BaseProperties BaseProperties;
        
        [Space(18)]
        public GameProperties GameProperties;

        
        
#region Base Properties
        
        public int GetUnlockedPrice() => BaseProperties.UnlockePrice;
        public bool IsUnlocked() => BaseProperties.IsUnlocked;
        public void UnlockTower() =>  BaseProperties.IsUnlocked = true;

#endregion
        
#region Game Properties

        public long GetPrice() => GameProperties.Price;

#endregion
    }


    [Serializable]
    public class BaseProperties
    {
        public int UnlockePrice;
        public bool IsUnlocked;
    }
    
    [Serializable]
    public class GameProperties
    {
        public long Price;
    }

    [Serializable]
    public class UpgradeDataBase
    {
        public string UpgradeTitle;
        public string UpgradeDescription;
        public Sprite UpgradeIcon;

        public long UpgradePrice;
        public long SellPrice;
        
        public Weapon Weapon;
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
