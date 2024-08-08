using System;

namespace UI.Shop.Daily_Rewards
{
    public class SkinsForSale
    {
    
        public SkinOffert[] skinsForSale = new SkinOffert[ShopManager.SKINS_FOR_SALE_COUNT];
        
        public long LastClaimDateTicks = DateTime.Now.Ticks;
        
    }
}
