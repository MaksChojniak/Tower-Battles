using System;
using System.Collections.Generic;
using System.Globalization;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using MMK.ScriptableObjects;
using Unity.VisualScripting.Antlr3.Runtime.Tree;
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

            if (!string.IsNullOrEmpty(spriteTextData.Size))
                text += $"<size={spriteTextData.Size}>";
            
            if (spriteTextData.WithSpaces)
                text += string.Concat(Enumerable.Repeat(" ", spriteTextData.SpacesCount));

            string colorText = "";
            if (spriteTextData.WithColor)
                colorText = $"color=#{spriteTextData.ColorHEX}";
            
            text += $"<sprite name=\"{spriteTextData.SpriteName}\" " + colorText + ">";
            
            if (spriteTextData.WithSpaces)
                text += string.Concat(Enumerable.Repeat(" ", spriteTextData.SpacesCount));

            if (!string.IsNullOrEmpty(spriteTextData.Size))
                text += $"</size>";
            
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



#region Build In Examples

        
        public static string GetCoinsText(long Value, bool WithIcon = true, string IconSize = "")
        {
            string text = GetColoredText($"{Value}", GlobalSettingsManager.GetGlobalSettings.Invoke().CoinsColor);

            if (WithIcon)
                text += GetSpriteText(new SpriteTextData(){SpriteName = GlobalSettingsManager.GetGlobalSettings.Invoke().CoinsIconName, Size = IconSize});

            return text;
        } 
        
        
        public static string GetGemsText(long Value, bool WithIcon = true, string IconSize = "")
        {
            string text = GetColoredText($"{Value}", GlobalSettingsManager.GetGlobalSettings.Invoke().GemsColor);

            if (WithIcon)
                text += GetSpriteText(new SpriteTextData(){SpriteName = GlobalSettingsManager.GetGlobalSettings.Invoke().GemsIconName, Size = IconSize});

            return text;
        } 
        
        
       
        
        
        public static string GetSkinText(TowerSkin Skin)
        {
            string text = GetColoredText(Skin.SkinName, GlobalSettingsManager.GetGlobalSettings.Invoke().GetRarityColorBySkin(Skin) );
            
            return text;
        } 
        
        public static string GetTowerText(Tower Tower)
        {
            string text = GetColoredText(Tower.TowerName, GlobalSettingsManager.GetGlobalSettings.Invoke().GetRarityColorByTower(Tower) );
            
            return text;
        } 
        
        
#endregion
        
        
        
    }
}
