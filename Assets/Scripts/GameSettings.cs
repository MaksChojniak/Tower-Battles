using System;
using UnityEngine;

namespace MMK
{
    public static class GameSettings
    {
        
#region GLobal Settings

        public const int MAX_TOWERS_COUNT = 10;

        public const int MAX_UPGRADE_LEVEL = 5;
        public const int MAX_UPGRADE_LEVEL_INDEX = MAX_UPGRADE_LEVEL - 1;

        
#endregion



        
        
#region Icons Settings

        public const string CASH_ICON_NAME = "cash";
        public const string COINS_ICON_NAME = "coins";
        public const string HEART_ICON_NAME = "heart";
        public const string FIRERATE_ICON_NAME = "firerate";
        public const string RADAR_ICON_NAME = "radar";
        public const string HIDDEN_ICON_NAME = "hidden";
        public const string DAMAGE_ICON_NAME = "damage";
        public const string EXCLAMATION_ICON_NAME = "exclamation";
        public const string ARROW_RIGHT_ICON_NAME = "arrow_r";
        public const string CHECKED_ICON_NAME = "checked";
        public const string UNCHECKED_ICON_NAME = "unchecked";
        public const string DISCORD_ICON_NAME = "discord";

#endregion




#region Colors Settings

        public const string NORMAL_COLOR_HEX = "#FFFFFF";
        
        public const string NEXT_VALUE_COLOR_HEX = "#2A9300";
        
        public const string CASH_COLOR_HEX = "#1FEF00";
        public const string COINS_COLOR_HEX = "#FFB700";
        
        public const string TROPHY_COLOR_HEX = "#FFD700";
        public const string LOSES_COLOR_HEX = "#A20708";
        
        public const string TARGETTING_BUTTON_BASE_COLOR_HEX = "#989898";
        public const string TARGETTING_BUTTON_SELECTED_COLOR_HEX = "#26761D";
        
        public const string MAXED_OUT_COLOR_HEX = "#822525";
        
        
        
        
        
        
        
        public static bool TryGetColorFromHEX(this string colorHEX, out Color color)
        {
            color = Color.white;

            if (ColorUtility.TryParseHtmlString(colorHEX, out color))
                return true;

            return false;
        }
        
        public static Color GetColorFromHEX(this string colorHEX)
        {
            if (ColorUtility.TryParseHtmlString(colorHEX, out Color color))
                return color;

            throw new NullReferenceException($"HEX is not correct [HEX - {colorHEX}]");
        }

#endregion




    }
}
