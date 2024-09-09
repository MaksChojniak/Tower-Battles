using System;
using UnityEngine;

namespace UI.Shop
{
    
    [CreateAssetMenu(menuName = "Shop/GemsExchange", fileName = "GemsExchange")]
    public class GemsExchange : ScriptableObject
    {
        public uint GemsPrice;
        
        [Space(8)]
        public uint CoinsReward;
    }
}
