using System;
using System.Linq;

namespace MMK.ScriptableObjects
{
    
    [Serializable]
    public class TowerSerializable
    {
        public string ID = "";
        
        public TowerSkinSerializable[] TowerSkins;
        public int SkinIndex = -1;
        
        public bool IsUnlocked;


        public TowerSerializable()
        {
            
        }
        
        public TowerSerializable(Tower tower)
        {
            ID = tower.ID;
            TowerSkins = tower.TowerSkins.Select(skin => new TowerSkinSerializable(skin)).ToArray();
            SkinIndex = tower.SkinIndex;
            IsUnlocked = tower.BaseProperties.IsUnlocked;
        }
        
        
    }
    
}
