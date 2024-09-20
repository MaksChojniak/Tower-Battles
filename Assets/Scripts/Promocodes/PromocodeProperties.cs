using System;
using System.Collections.Generic;

namespace Promocodes
{
    
    [Serializable]
    public class PromocodeProperties
    {

        public int UsesLeft = 1;
        public List<string> PlayersRedeemedCode = new List<string>();

        public bool TimeLimitedCode = false;
        public long CreateCodeDateUTC; 
        public ulong HoursDuration;


        public bool CodeIsValid(DateTime DateUTC)
        {
            if (!TimeLimitedCode)
                return true;

            TimeSpan dateOffset = DateUTC - new DateTime(CreateCodeDateUTC);

            return dateOffset.TotalHours < HoursDuration;
        }


        public bool IsPlayersRedeemedCode(string ID) => PlayersRedeemedCode.Contains(ID);

    }
}
