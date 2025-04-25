using System;

namespace Promocodes
{
    
    [Serializable]
    public class Promocode
    {
        public const string PROMOCODES_PATH = "Promocodes/";

        public PromocodeReward Reward;
        public PromocodeProperties Properties;
    }
}
