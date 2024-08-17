using System;

namespace UI.Shop.Daily_Rewards
{
    
    [Serializable]
    public class SkinsForSale
    {
    
        public SkinOffert[] skinsForSale = new SkinOffert[ShopManager.SKINS_FOR_SALE_COUNT];
        
        public long CreateDateUTCTicks = DateTime.Now.Ticks;
        
    }
}
