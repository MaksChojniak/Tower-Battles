using System;
using System.Collections.Generic;
using System.Linq;
using MMK.ScriptableObjects;

namespace MMK
{
    
    
    public struct PriceData
    {
        public long price;
        public long[] upgradePrices;

        public PriceData(Tower Data, int Level)
        {
            price = Data.GetPrice();
            upgradePrices = Data.UpgradePrice.GetUpgradePrices(Level);
                
        }
        
        
        
    }
    
    
    public static class PriceDataExtension
    {


        public static long[] GetUpgradePrices(this long[] array, int Level)
        {
            return array.Where(price =>
            {
                int index = Array.IndexOf(array, price);
                return index > 0 && index <= Level;
            }).ToArray();

        }
  
        
        
        
        
        
    } 
    
    
}
