using System;

namespace MMK.ScriptableObjects
{
    
    [Serializable]
    public class TowerSkinSerializable
    {
        public string ID = "";
        
        public bool IsUnlocked;
        public ulong UnlockPrice;
        
        public SkinRarity Rarity;
        
        public TowerSkinSerializable()
        {
            
        }

        public TowerSkinSerializable(TowerSkin towerSkin)
        {
            ID = towerSkin.ID;
            
            IsUnlocked = towerSkin.IsUnlocked;
            UnlockPrice = towerSkin.UnlockPrice;
            
            Rarity = towerSkin.Rarity;
            
        }
        
    }
    
    
}
