using System;
using UI.Shop.Daily_Rewards;

namespace UI.Shop
{


    [Serializable]
    public class DailyRewards
    {
        public Reward[] Rewards = new Reward[ShopManager.DAILY_REWARDS_COUNT];

        public int LastCalimedRewardIndex = 0;
        public long LastClaimDateTicks = DateTime.Now.Ticks;

        
    }
}
