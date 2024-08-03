using System;
using System.Linq;
using UnityEngine;

namespace MMK.ScriptableObjects
{
    
    
    [CreateAssetMenu(fileName = "Skin", menuName = "Towers/Skin")]
    public class TowerSkin : ScriptableObject
    {
        public Sprite TowerSprite;
        
        public GameObject TowerPrefab;
        
        public Sprite[] UpgradeIcon = new Sprite[5];

        public bool IsUnlocked;
        public int UnlockPrice;
        
        
    }

    
    
    
    
}
