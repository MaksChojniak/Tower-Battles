using System;
using UI.Shop.Daily_Rewards.Scriptable_Objects;

namespace UI.Shop.Daily_Rewards
{
    
    [Serializable]
    public struct Reward
    {
        public RewardType Type;
        
        public ulong CoinsBalance;
        public ulong XP;
    }
}
