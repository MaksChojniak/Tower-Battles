using System;
using System.Collections.Generic;
using UnityEngine;

namespace UI.Battlepass
{
    
    [Serializable]
    public class BattlepassProgress
    {
        public long ExperienceCollected;
        
        public uint LastTierUnlocked = 0;
        public List<Reward> Rewards = new List<Reward>();

        public bool HasPremiumBattlepass;



        public void UpdateUnlockedTiers()
        {
            LastTierUnlocked = (uint)Mathf.FloorToInt(ExperienceCollected / 100f);
        }

    }
    
}
