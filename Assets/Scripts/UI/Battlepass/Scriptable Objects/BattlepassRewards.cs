using System;
using System.Globalization;
using UnityEngine;

namespace UI.Battlepass
{
    
    [CreateAssetMenu(fileName = "Reward", menuName = "Battlepass/Reward", order = 1)]
    public class BattlepassRewards : ScriptableObject
    {
        public const uint RewardsCount = 30;


        [SerializeField] int Year;
        [SerializeField] int Month;
        [SerializeField] int Day;
        [SerializeField] int Hour;
        public DateTime CreatedDateUTC => new DateTime(Year, Month, Day, Hour, 0, 0, DateTimeKind.Utc);


        public int DaysDuration;
   

        public Rewards[] rewards = new Rewards[RewardsCount];



        private void OnValidate()
        {
            int coins = 0;
            int gems = 0;

            int premium_coins = 0;
            int premium_gems = 0;


            foreach (Rewards reward in rewards) 
            {
                switch (reward.Battlepass.Type)
                {
                    case RewardType.Coins:
                        coins += (int)reward.Battlepass.Coins;
                        break;
                    case RewardType.Coins_Gems:
                        coins += (int)reward.Battlepass.Coins;
                        gems += (int)reward.Battlepass.Gems;
                        break;
                    case RewardType.Coins_Skin:
                        coins += (int)reward.Battlepass.Coins;
                        break;
                    case RewardType.Gems:
                        gems += (int)reward.Battlepass.Gems;
                        break;
                    case RewardType.Gems_Skin:
                        gems += (int)reward.Battlepass.Gems;
                        break;
                    case RewardType.Coins_Gems_Skin:
                        coins += (int)reward.Battlepass.Coins;
                        gems += (int)reward.Battlepass.Gems;
                        break;
                }
            }

            Debug.Log($"free battlepass: [coins: {coins},  gems: {gems}]");




            foreach (Rewards reward in rewards)
            {
                switch (reward.PremiumBattlepass.Type)
                {
                    case RewardType.Coins:
                        premium_coins += (int)reward.PremiumBattlepass.Coins;
                        break;
                    case RewardType.Coins_Gems:
                        premium_coins += (int)reward.PremiumBattlepass.Coins;
                        premium_gems += (int)reward.PremiumBattlepass.Gems;
                        break;
                    case RewardType.Coins_Skin:
                        premium_coins += (int)reward.PremiumBattlepass.Coins;
                        break;
                    case RewardType.Gems:
                        premium_gems += (int)reward.PremiumBattlepass.Gems;
                        break;
                    case RewardType.Gems_Skin:
                        premium_gems += (int)reward.PremiumBattlepass.Gems;
                        break;
                    case RewardType.Coins_Gems_Skin:
                        premium_coins += (int)reward.PremiumBattlepass.Coins;
                        premium_gems += (int)reward.PremiumBattlepass.Gems;
                        break;
                }
            }

            Debug.Log($"premium battlepass: [coins: {premium_coins},  gems: {premium_gems}]");

        }

    }
}
