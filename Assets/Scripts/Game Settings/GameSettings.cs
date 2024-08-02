using System;
using System.Security.Cryptography.X509Certificates;
using UnityEngine;

namespace MMK
{

    [CreateAssetMenu(fileName = "Game Settings", menuName = "Game Settings")]
    public class GameSettings : ScriptableObject
    {
        
#region Global Settings

        public int MaxTowersCount = 10;
        
        public int MaxUpgradeLevel = 5;
        // public readonly int MaxUpgradeLevelIndex = MAX_UPGRADE_LEVEL - 1;

#endregion

        
        
        
#region Icons Settings

        public string CashIconName = "cash";
        public string CoinsIconName = "coins";
        public string HeartIconName = "heart";
        public string FirerateIconName = "firerate";
        public string RadarIconName = "radar";
        public string HiddenIconName = "hidden";
        public string DamageIconName = "damage";
        public string ExclamationIconName = "exclamation";
        public string ArrowRightIconName = "arrow_r";
        public string CheckedIconName = "checked";
        public string UncheckedIconName = "unchecked";
        public string DiscordIconName = "discord";
        public string StarIconName = "star";
        public string TrophyIconName = "trophy";

#endregion
        
        
        
#region Colors Settings

        public Color NormalColor = Color($"#FFFFFF");                    //  NORMAL_COLOR_HEX = "#FFFFFF";

        public Color NextValueColor = Color($"#2A9300");                 //  NEXT_VALUE_COLOR_HEX = "#2A9300";

        public Color CashColor = Color($"#1FEF00");                      //  CASH_COLOR_HEX = "#1FEF00";
        public Color CoinsColor = Color($"#FFB700");                     //  COINS_COLOR_HEX = "#FFB700";

        public Color TrophyColor = Color($"#FFD700");                    //  TROPHY_COLOR_HEX = "#FFD700";
        public Color LosesColor = Color($"#A20708");                     //  LOSES_COLOR_HEX = "#A20708";

        public Color TargettingButtonBaseColor = Color($"#989898");      //  TARGETTING_BUTTON_BASE_COLOR_HEX = "#989898";
        public Color TargettingButtonSelectedColor = Color($"#26761D");  //  TARGETTING_BUTTON_SELECTED_COLOR_HEX = "#26761D";

        public Color MaxedOutColor = Color($"#822525");                  //  MAXED_OUT_COLOR_HEX = "#822525";


        
        static Color Color(int r, int g, int b, int a = 255)
        {
            float R, G, B, A;
            float maxColorSize = 255f;

            R = r / maxColorSize;
            G = g / maxColorSize;
            B = b / maxColorSize;
            A = a / maxColorSize;

            return new Color(R, G, B, A);
        }

        static Color Color(string colorHEX, int a = 255)
        {
            float maxColorSize = 255f;
            float A;
       
            if (!HexadecimalToDecimal(colorHEX, out var color))
                return UnityEngine.Color.black;
            
            A = a / maxColorSize;
            color.a = A;
            
            return color;
        }

        public static bool HexadecimalToDecimal(string hexadecimal, out UnityEngine.Color color)
        {
            color = UnityEngine.Color.white;
            
            if (hexadecimal.StartsWith("#"))
                hexadecimal = hexadecimal.Substring(1);

            if (hexadecimal.Length != 6)
            {
                Console.WriteLine($"Wrong HEX lenght [expected: 6,  your: {hexadecimal.Length}].");
                return false;
            }

            // Konwersja wartości HEX na wartości RGB
            int r = Convert.ToInt32(hexadecimal.Substring(0, 2), 16);
            int g = Convert.ToInt32(hexadecimal.Substring(2, 2), 16);
            int b = Convert.ToInt32(hexadecimal.Substring(4, 2), 16);

            color = Color(r, g, b);

            return true;
        }

#endregion



#region Audio

    #region UI Audio
    
        public AudioClip ButtonAudioClip;
        
    #endregion
        
        

#endregion

    }
    
    
//     public static class GameSettings
//     {
//         
// #region GLobal Settings
//
//         public const int MAX_TOWERS_COUNT = 10;
//
//         public const int MAX_UPGRADE_LEVEL = 5;
//         public const int MAX_UPGRADE_LEVEL_INDEX = MAX_UPGRADE_LEVEL - 1;
//
//         
// #endregion
//
//
//
//         
//         
// #region Icons Settings
//
//         public const string CASH_ICON_NAME = "cash";
//         public const string COINS_ICON_NAME = "coins";
//         public const string HEART_ICON_NAME = "heart";
//         public const string FIRERATE_ICON_NAME = "firerate";
//         public const string RADAR_ICON_NAME = "radar";
//         public const string HIDDEN_ICON_NAME = "hidden";
//         public const string DAMAGE_ICON_NAME = "damage";
//         public const string EXCLAMATION_ICON_NAME = "exclamation";
//         public const string ARROW_RIGHT_ICON_NAME = "arrow_r";
//         public const string CHECKED_ICON_NAME = "checked";
//         public const string UNCHECKED_ICON_NAME = "unchecked";
//         public const string DISCORD_ICON_NAME = "discord";
//
// #endregion
//
//
//
//
// #region Colors Settings
//
//         public const string NORMAL_COLOR_HEX = "#FFFFFF";
//         
//         public const string NEXT_VALUE_COLOR_HEX = "#2A9300";
//         
//         public const string CASH_COLOR_HEX = "#1FEF00";
//         public const string COINS_COLOR_HEX = "#FFB700";
//         
//         public const string TROPHY_COLOR_HEX = "#FFD700";
//         public const string LOSES_COLOR_HEX = "#A20708";
//         
//         public const string TARGETTING_BUTTON_BASE_COLOR_HEX = "#989898";
//         public const string TARGETTING_BUTTON_SELECTED_COLOR_HEX = "#26761D";
//         
//         public const string MAXED_OUT_COLOR_HEX = "#822525";
//         
//         
//         
//         
//         
//         
//         
//         public static bool TryGetColorFromHEX(this string colorHEX, out Color color)
//         {
//             color = Color.white;
//
//             if (ColorUtility.TryParseHtmlString(colorHEX, out color))
//                 return true;
//
//             return false;
//         }
//         
//         public static Color GetColorFromHEX(this string colorHEX)
//         {
//             if (ColorUtility.TryParseHtmlString(colorHEX, out Color color))
//                 return color;
//
//             throw new NullReferenceException($"HEX is not correct [HEX - {colorHEX}]");
//         }
//
// #endregion
//
//
//
//
//     }
}
