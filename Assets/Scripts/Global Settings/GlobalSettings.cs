using System;
using System.Collections.Generic;
using System.Security.Cryptography.X509Certificates;
using MMK.ScriptableObjects;
using MMK.Settings;
using TMPro;
using UnityEngine;

namespace MMK
{
    

    [CreateAssetMenu(fileName = "Global Settings", menuName = "Global Settings")]
    public class GlobalSettings : ScriptableObject
    {
        
#region Global

        public int MaxTowersCount = 10;
        
        public int MaxUpgradeLevel = 5;
        // public readonly int MaxUpgradeLevelIndex = MAX_UPGRADE_LEVEL - 1;

#endregion



#region Level/XP Stages

        
        
        

        public Color GetCurrentLevelColor(ulong Level)
        {
            if (Level <= 20)
                return Lvl_0_Color;
            else if (Level <= 40)
                return Lvl_1_Color;
            else if (Level <= 60)
                return Lvl_2_Color;
            else if (Level <= 80)
                return Lvl_3_Color;
            else if (Level <= 90)
                return Lvl_4_Color;
            else
                return Lvl_5_Color;
        }
        
        
#endregion
        
     
        
#region Icons

        public string CashIconName = "cash";
        public string CoinsIconName = "coins";
        public string GemsIconName = "gem";
        public string LevelIconName = "level";
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
        
        
        
#region Colors

        public Color NormalColor = Color($"#FFFFFF");                    //  NORMAL_COLOR_HEX = "#FFFFFF";

        public Color NextValueColor = Color($"#2A9300");                 //  NEXT_VALUE_COLOR_HEX = "#2A9300";

        public Color CashColor = Color($"#1FEF00");                      //  CASH_COLOR_HEX = "#1FEF00";
        public Color CoinsColor = Color($"#FFB700");                     //  COINS_COLOR_HEX = "#FFB700";

        public Color TrophyColor = Color($"#FFD700");                    //  TROPHY_COLOR_HEX = "#FFD700";
        public Color LosesColor = Color($"#A20708");                     //  LOSES_COLOR_HEX = "#A20708";

        public Color TargettingButtonBaseColor = Color($"#989898");      //  TARGETTING_BUTTON_BASE_COLOR_HEX = "#989898";
        public Color TargettingButtonSelectedColor = Color($"#26761D");  //  TARGETTING_BUTTON_SELECTED_COLOR_HEX = "#26761D";

        public Color MaxedOutColor = Color($"#822525");                  //  MAXED_OUT_COLOR_HEX = "#822525";\
        
        public Color LockedColor = Color($"#A20708");                    //  LOCKED_COLOR_HEX = "#A20708";
        public Color SelectedColor = Color($"#06C300");                  //  SELECTED_COLOR_HEX = "#06C300";
        public Color UnselectedColor = Color($"#37373A");                //  UNSELECTED_COLOR_HEX = "#37373A";

        public Color CommonColor = Color($"#59C032");                    //  COMMON_RARITY_COLOR_HEX = "#822525";
        public Color RareColor = Color($"#4B85BC");                      //  RARE_RARITY_COLOR_HEX = "#822525";
        public Color EpicColor = Color($"#9E00D6");                      //  EPIC_RARITY_COLOR_HEX = "#822525";
        public Color ExclusiveColor = Color($"#AD0000");                 //  EXCLUSIVE_RARITY_COLOR_HEX = "#822525";
        
        public Color Lvl_0_Color = Color($"#");                    //  Lvl_0_COLOR_HEX = "#";
        public Color Lvl_1_Color = Color($"#");                    //  Lvl_1_COLOR_HEX = "#";
        public Color Lvl_2_Color = Color($"#");                    //  Lvl_2_COLOR_HEX = "#";
        public Color Lvl_3_Color = Color($"#");                    //  Lvl_3_COLOR_HEX = "#";
        public Color Lvl_4_Color = Color($"#");                    //  Lvl_4_COLOR_HEX = "#";
        public Color Lvl_5_Color = Color($"#");                    //  Lvl_5_COLOR_HEX = "#";



        
        public Color GetRarityColorBySkin(TowerSkin _skin)
        {
            switch (_skin.Rarity)
            {
                case SkinRarity.Common:
                    return CommonColor;
                    break;
                case SkinRarity.Rare:
                    return RareColor;
                    break;
                case SkinRarity.Epic:
                    return EpicColor;
                    break;
                case SkinRarity.Exclusive:
                    return ExclusiveColor;
                    break;
                default:
                    return new Color(1,1,1,1);
                    break;
            
            }
        }
        
        
        public Color GetRarityColorByTower(Tower _tower)
        {
            switch (_tower.Rarity)
            {
                case TowerRarity.Common:
                    return CommonColor;
                    break;
                case TowerRarity.Rare:
                    return RareColor;
                    break;
                case TowerRarity.Exclusive:
                    return ExclusiveColor;
                    break;
                default:
                    return new Color(1,1,1,1);
                    break;

            }
        }
        
        
        
        
        
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

        

#region Scenes

        public int loadingScene = 0;
        
        public int mainMenuScene = 1;

        public int vetoScene = 2;

        public List<int> gameScenes = new List<int>() {3, 4, 5};
        
#endregion


        
#region Fonts

        public TMP_FontAsset[] FontAssets;

#endregion


        
#region Languages

        public Dictionary<LanguageType, string> Languages = new Dictionary<LanguageType, string>()
        {
            { LanguageType.English, "en" },
            { LanguageType.Polish, "pl" },
            { LanguageType.French, "fr" },
            { LanguageType.German, "de" },
            { LanguageType.Spanish, "es" }
        };

#endregion
        


#region Towers & Skins

        public Tower[] Towers;
        public TowerSkin[] TowersSkins;

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
