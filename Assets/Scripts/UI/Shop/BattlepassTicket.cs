using System;
using UnityEngine;

namespace UI.Shop
{
    
    [CreateAssetMenu(menuName = "Shop/BattlepassTicket", fileName = "BattlepassTicket")]
    public class BattlepassTicket : ScriptableObject
    {
        public uint GemsPrice;
        
        [Space(8)]
        public uint TiersCount; // 1, 3, 10
        
    }
}
