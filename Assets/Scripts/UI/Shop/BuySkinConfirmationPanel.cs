using System.Linq;
using DefaultNamespace;
using MMK;
using MMK.ScriptableObjects;
using Player;
using TMPro;
using UI.Shop;
using UnityEngine;
using UnityEngine.UI;

namespace MMK
{
    public class BuySkinConfirmationPanel : MonoBehaviour
    {
        public enum TowerType
        {
            Common,
            Rare,
            Exclusive,
            Trophy
        }

        [SerializeField] TMP_Text TittleText;
        
        [SerializeField] Image SkinSprite;
        [SerializeField] Image SkinRarityImage;
        
        [SerializeField] TMP_Text TowerIsUnlockedText;
        [SerializeField] TMP_Text PriceText;

        [SerializeField] Button BuyButton;

        [SerializeField] RotateableTower RotatetableTower;
        
        [SerializeField] Color CommonColor;
        [SerializeField] Color RareColor;
        [SerializeField] Color EpicColor;
        [SerializeField] Color ExclusiveColor;
        // [SerializeField] Color PriceTextColor;


        
        Tower tower;
        TowerSkin skin; 

        public void Cancel()
        {
            this.gameObject.SetActive(false);
        }

        public void Buy()
        {
            if (!tower.IsUnlocked())
            {
                WarningSystem.ShowWarning(WarningSystem.WarningType.LockedTower);
                return;
            }
            
            skin.UnlockSkin();
            
            Cancel();
        }

        public void Open(Tower _tower, TowerSkin _skin)
        {
            this.gameObject.SetActive(true);

            tower = _tower;
            skin = _skin;


            TittleText.text = $"Buy {StringFormatter.GetColoredText(skin.SkinName, GetRarityColorBySkin(skin))} {StringFormatter.GetColoredText(tower.TowerName, RareColor)}";

            SkinSprite.sprite = skin.TowerSprite;
            SkinRarityImage.color = GetRarityColorBySkin(skin);
            
            PriceText.text = $"Price:  " + $"<b>" + $"{StringFormatter.PriceFormat(skin.UnlockPrice)}" + $"{StringFormatter.GetSpriteText(new SpriteTextData() {SpriteName = "coins", SpacesCount = 1, WithSpaces = true})}";
            
            
            TowerIsUnlockedText.gameObject.SetActive(!tower.IsUnlocked());
            TowerIsUnlockedText.text  = tower.IsUnlocked() ? "" : $"{tower.TowerName} Required!";

            BuyButton.interactable = tower.IsUnlocked();

            RotatetableTower.SpawnTowerProcess(tower, skin);

            // TowerType towerType = GetTowerType(towerInventoryData);
            //
            // TitleText.text = $"Unlock " + $"<color={GetHexColor(GetColor(towerType))}>" + $"{towerInventoryData.towerSO.TowerName}" + "</color>";
            // TowerSprite.sprite = towerInventoryData.towerSO.CurrentSkin.TowerSprite;
            // PriceText.text = "<smallcaps>" + $"Price:  " + "<b>" + $"<color={GetHexColor(PriceTextColor)}>" + $"{StringFormatter.PriceFormat(towerInventoryData.towerSO.BaseProperties.UnlockPrice)}" + "</color>";
        }

        
        
        
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
                    return Color.white;
                    break;
            
            }
        }
        

        // TowerType GetTowerType(TowerInventoryData towerInventoryData)
        // {
        //     if (TowerInventory.TowerData.commonTowers.Contains(towerInventoryData))
        //         return TowerType.Common;
        //     else if (TowerInventory.TowerData.rareTowers.Contains(towerInventoryData))
        //         return TowerType.Rare;
        //     else if (TowerInventory.TowerData.exclusiveTowers.Contains(towerInventoryData))
        //         return TowerType.Exclusive;
        //     else if (TowerInventory.TowerData.trophyTowers.Contains(towerInventoryData))
        //         return TowerType.Trophy;
        //
        //     return TowerType.Common;
        // }

        string GetHexColor(Color color)
        {
            return $"#{ColorUtility.ToHtmlStringRGB(color)}";
        }

        // Color GetColor(TowerType towerType)
        // {
        //     switch (towerType)
        //     {
        //         case TowerType.Common:
        //             return CommonColor;
        //             break;
        //         case TowerType.Rare:
        //             return RareColor;
        //             break;
        //         case TowerType.Exclusive:
        //             return ExclusiveColor;
        //             break;
        //         case TowerType.Trophy:
        //             return TrophyColor;
        //             break;
        //         default:
        //             return Color.white;
        //             break;
        //
        //     }
        // }
    }
}
