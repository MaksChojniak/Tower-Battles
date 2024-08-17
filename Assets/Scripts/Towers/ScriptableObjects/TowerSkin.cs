using System;
using System.Linq;
using UnityEngine;

namespace MMK.ScriptableObjects
{
    public enum SkinRarity
    {
        Common,
        Rare,
        Epic,
        Exclusive
    }
    
    [CreateAssetMenu(fileName = "Skin", menuName = "Towers/Skin")]
    public class TowerSkin : ScriptableObject
    {
        public string ID;

        public string SkinName;
        
        public Sprite TowerSprite;
        
        public GameObject TowerPrefab;
        
        public Sprite[] UpgradeIcon = new Sprite[5];

        public bool IsUnlocked;
        public ulong UnlockPrice;

        public SkinRarity Rarity;



        void OnValidate()
        {
            SkinName = this.name;
        }





        

        public static TowerSkin GetTowerSkinByID(string TowerSkinID)
        {
            if(string.IsNullOrEmpty(TowerSkinID))
                return null;

            Tower tower = Tower.GetTowerBySkinID(TowerSkinID);
            if(tower == null)
                return null;
            
            TowerSkin skin = tower.TowerSkins.FirstOrDefault(_skin => _skin.ID == TowerSkinID);
            if(skin == null)
                return null;

            return skin;
        }
        
        
        
    }

    
    
    
    
}
