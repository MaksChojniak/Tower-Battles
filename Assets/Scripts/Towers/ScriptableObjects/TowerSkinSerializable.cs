using System;

namespace MMK.ScriptableObjects
{
    
    [Serializable]
    public class TowerSkinSerializable
    {
        public uint ID;
        
        public bool IsUnlocked;
        public int UnlockPrice;
        
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
