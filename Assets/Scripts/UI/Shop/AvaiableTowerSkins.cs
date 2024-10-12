using System.Collections.Generic;
using MMK.ScriptableObjects;
using UI.Shop.Daily_Rewards.Scriptable_Objects;
using UnityEngine;

namespace UI.Shop
{
    
    [CreateAssetMenu(menuName = "Shop/Avaiable Tower Skins", fileName = "Avaiable Tower Skins")]
    public class AvaiableTowerSkins : ScriptableObject
    {
        public List<TowerSkin> rewards = new List<TowerSkin>();
    }
    
}
