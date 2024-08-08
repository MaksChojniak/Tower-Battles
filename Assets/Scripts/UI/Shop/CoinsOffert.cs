using System;

namespace UI.Shop
{
    
    [Serializable]
    public class CoinsOffert
    {
        public string Name;
    
        public ulong Value;

        public uint Price; // Price in the smallest monetary denomination (in USD)
    
    }    

}
