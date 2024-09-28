using System;
using System.Linq;
using UnityEngine;

namespace MMK.ScriptableObjects
{
    public enum SkinRarity : int
    {
        Default = 0,
        Common = 1,
        Rare = 2,
        Epic = 3,
        Exclusive = 4,
        Gold = 5,
    }
    
    [CreateAssetMenu(fileName = "Skin", menuName = "Towers/Skin")]
    public class TowerSkin : ScriptableObject
    {
        public delegate void OnUnlockSkinDelegate(TowerSkin skin);
        public static OnUnlockSkinDelegate OnUnlockSkin;
        
        
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

            switch (Rarity)
            {
                case SkinRarity.Default:
                    UnlockSkin();
                    UnlockPrice = 0;
                    break;
                case SkinRarity.Common:
                    UnlockPrice = 1000;
                    break;
                case SkinRarity.Rare:
                    UnlockPrice = 1750;
                    break;
                case SkinRarity.Epic:
                    UnlockPrice = 2500;
                    break;
                case SkinRarity.Exclusive:
                    UnlockPrice = 3250;
                    break;
                case SkinRarity.Gold:
                    UnlockPrice = 30000;
                    break;
            }
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


        public void UnlockSkin()
        {
            IsUnlocked = true;
            
            // Tower tower = Tower.GetTowerBySkinID(ID);
            // if(tower == null)
            //     return;
            // Tower.OnUnlockTower?.Invoke(tower);
            OnUnlockSkin?.Invoke(this);
        }
        
        
        
    }

    
    
    
    
}
