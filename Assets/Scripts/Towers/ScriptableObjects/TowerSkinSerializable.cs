using System;

namespace MMK.ScriptableObjects
{
    
    [Serializable]
    public class TowerSkinSerializable
    {
        public bool IsUnlocked;

        
        public TowerSkinSerializable()
        {
            
        }

        public TowerSkinSerializable(TowerSkin towerSkin)
        {
            IsUnlocked = towerSkin.IsUnlocked;
            
        }
        
    }
    
    
}
