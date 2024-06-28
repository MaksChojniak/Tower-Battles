using UnityEngine;
using UnityEngine.UI;
using System;


namespace MMK
{
    public class PropertyData<T>
    {
        public string PropertyName;
        public SpriteTextData SpriteData;
        public T Value;
        public T NextValue;

        
        public PropertyData(string propertyName, SpriteTextData spriteData, T value, T nextValue)
        {
            PropertyName = propertyName;
            SpriteData = spriteData;
            Value = value;
            NextValue = nextValue;

        }


    }
    
    
}
