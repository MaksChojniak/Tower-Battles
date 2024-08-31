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

    }
}
