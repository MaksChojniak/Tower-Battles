using System.Linq;
using MMK;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace MMK
{
    public class BuyTowerConfirmationPanel : MonoBehaviour
    {
        public enum TowerType
        {
            Common,
            Rare,
            Exclusive,
            Trophy
        }

        [SerializeField] TMP_Text TitleText;
        [SerializeField] Image TowerSprite;
        [SerializeField] TMP_Text PriceText;

        [SerializeField] Color CommonColor;
        [SerializeField] Color RareColor;
        [SerializeField] Color ExclusiveColor;
        [SerializeField] Color TrophyColor;
        [SerializeField] Color PriceTextColor;

        [SerializeField] TowerPreviewUI TowerPreviewUI;
        [SerializeField] TowerInventory TowerInventory;

        public void Cancel()
        {

        }

        public void Buy()
        {
            TowerPreviewUI.BuyTower();
        }

        public void UpdateConfirmationPanel()
        {
            TowerInventoryData towerInventoryData = TowerInventory.TowerData.GetAllTowerInventoryData()[TowerPreviewUI.lastSelectedTowerIndex];

            TowerType towerType = GetTowerType(towerInventoryData);

            TitleText.text = $"Unlock " + $"<color={GetHexColor(GetColor(towerType))}>" + $"{towerInventoryData.towerSO.TowerName}" + "</color>";
            TowerSprite.sprite = towerInventoryData.towerSO.CurrentSkin.TowerSprite;
            PriceText.text = "<smallcaps>" + $"Price:  " + "<b>" + $"<color={GetHexColor(PriceTextColor)}>" + $"{StringFormatter.PriceFormat(towerInventoryData.towerSO.BaseProperties.UnlockPrice)}" + "</color>";
        }

        TowerType GetTowerType(TowerInventoryData towerInventoryData)
        {
            if (TowerInventory.TowerData.commonTowers.Contains(towerInventoryData))
                return TowerType.Common;
            else if (TowerInventory.TowerData.rareTowers.Contains(towerInventoryData))
                return TowerType.Rare;
            else if (TowerInventory.TowerData.exclusiveTowers.Contains(towerInventoryData))
                return TowerType.Exclusive;
            else if (TowerInventory.TowerData.trophyTowers.Contains(towerInventoryData))
                return TowerType.Trophy;

            return TowerType.Common;
        }

        string GetHexColor(Color color)
        {
            return $"#{ColorUtility.ToHtmlStringRGB(color)}";
        }

        Color GetColor(TowerType towerType)
        {
            switch (towerType)
            {
                case TowerType.Common:
                    return CommonColor;
                    break;
                case TowerType.Rare:
                    return RareColor;
                    break;
                case TowerType.Exclusive:
                    return ExclusiveColor;
                    break;
                case TowerType.Trophy:
                    return TrophyColor;
                    break;
                default:
                    return Color.white;
                    break;

            }
        }
    }
}
