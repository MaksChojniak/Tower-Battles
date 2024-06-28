using UnityEngine;

namespace MMK
{
    public struct SpriteTextData
    {
        public string SpriteName;
        
        public bool WithSpaces;
        public int SpacesCount;
        
        public bool WithColor;
        public Color Color;
        public string ColorHEX => ColorUtility.ToHtmlStringRGB(Color);
        


    }
}
