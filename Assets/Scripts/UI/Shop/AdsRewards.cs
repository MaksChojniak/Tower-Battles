using System;
using System.Collections.Generic;

namespace UI.Shop
{
    
    [Serializable]
    public class AdsRewards
    {
        public List<AdReward> rewards = new List<AdReward>();

        public long CreateDateUTCTicks;
        
    }
}
