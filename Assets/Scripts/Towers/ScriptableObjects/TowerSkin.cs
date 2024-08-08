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
        
        public Sprite TowerSprite;
        
        public GameObject TowerPrefab;
        
        public Sprite[] UpgradeIcon = new Sprite[5];

        public bool IsUnlocked;
        public int UnlockPrice;

        public SkinRarity Rarity;

    }

    
    
    
    
}
