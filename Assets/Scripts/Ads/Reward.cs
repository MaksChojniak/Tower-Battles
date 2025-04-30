using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using RewardType = UI.Shop.Daily_Rewards.Scriptable_Objects.RewardType;

namespace Ads
{

    public class Reward
    {
        public RewardType Type;
        public long Amount;

        public Reward(RewardType type, long amount)
        {
            this.Type = type;
            this.Amount = amount;
        }
        public Reward(Reward reward)
        {
            this.Type = reward.Type;
            this.Amount = reward.Amount;
        }

    }
}
