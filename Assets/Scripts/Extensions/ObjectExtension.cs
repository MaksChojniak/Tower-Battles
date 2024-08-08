using Mirror;
using UI.Shop.Daily_Rewards;
using UnityEngine;

namespace MMK.Extensions
{
    public static class ObjectExtension
    {

        public static bool TryGetValue<T>(this object value, out T result)// where T : IReward
        {
            result = default(T);
            
            if (value is not T)
                return false;
            
            result = (T)value;
            return true;
        }

        
        
    }
}
