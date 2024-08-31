using System;
using System.Collections.Generic;

namespace UI.Battlepass
{
    
    [Serializable]
    public class BattlepassProgress
    {
        public int LastTierUnlocked = -1;
        public List<Reward> Rewards = new List<Reward>();

    }
    
}
