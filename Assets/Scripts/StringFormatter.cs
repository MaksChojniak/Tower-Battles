using System;
using System.Collections.Generic;
using System.Globalization;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using UnityEngine;

namespace MMK
{
    public static class StringFormatter
    {

        
#region Customize Text

        public static string GetColoredText(string text, Color color)
        {
            string colorHEX = $"{ColorUtility.ToHtmlStringRGB(color)}";

            return $"<color=#{colorHEX}>" + $"{text}" + $"</color>";
        }
        
#endregion
        
        

#region Icons In Text


        public static string GetSpriteText(SpriteTextData spriteTextData)
        {
            string text = "";
            
            if (spriteTextData.WithSpaces)
                text += string.Concat(Enumerable.Repeat(" ", spriteTextData.SpacesCount));

            string colorText = "";
            if (spriteTextData.WithColor)
                colorText = $"color=#{spriteTextData.ColorHEX}";
            
            text += $"<sprite name=\"{spriteTextData.SpriteName}\" " + colorText + ">";
            
            if (spriteTextData.WithSpaces)
                text += string.Concat(Enumerable.Repeat(" ", spriteTextData.SpacesCount));

            return text;
        }

        
#endregion



#region Formatting Numbers

        
        public static string PriceFormat(int price)
        {
            return price.ToString("N0");
        }
        
        public static string PriceFormat(long price)
        {
            return price.ToString("N0");
        }
        
        public static string PriceFormat(ulong price)
        {
            return price.ToString("N0");
        }
        

        public static string GetFormattedDouble(double value)
        {
            CultureInfo cultureInfo = CultureInfo.CreateSpecificCulture("uk-UA");

            if (value % 1 == 0)
                return value.ToString("0", cultureInfo);

            return value.ToString("0.0", cultureInfo);
        }
        
        
        public static string GetFormattedDouble(string valueText)
        {
            if (double.TryParse(valueText, out var value))
                return GetFormattedDouble(value);

            return valueText;
            
            
        }
        
        
#endregion
        
        
    }
}
