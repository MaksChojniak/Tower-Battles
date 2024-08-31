using System;
using MMK.ScriptableObjects;

namespace UI.Battlepass
{

    public enum RewardType
    {
        None,
        Coins,
        Gems,
        Skin,
        Coins_Skin,
        Coins_Gems,
        Gems_Skin,
        Coins_Gems_Skin
        
    }
    
    [Serializable]
    public class Rewards
    {
        public Reward Battlepass = new Reward();
        public Reward PremiumBattlepass = new Reward();
    }



    [Serializable]
    public class Reward
    {
        public RewardType Type;
        
        public ulong Coins;
        public ulong Gems;
        public TowerSkin Skin;
    }
    
}
