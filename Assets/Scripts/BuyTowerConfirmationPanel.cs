using System.Linq;
using MMK;
using MMK.ScriptableObjects;
using TMPro;
using UI.Animations;
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

        // [SerializeField] Color CommonColor;
        // [SerializeField] Color RareColor;
        // [SerializeField] Color ExclusiveColor;
        // [SerializeField] Color TrophyColor;
        // [SerializeField] Color PriceTextColor;

        [SerializeField] TowerPreviewUI TowerPreviewUI;
        [SerializeField] TowerInventory TowerInventory;

        [SerializeField] UIAnimation ClosePanelAnimation;
        
        
        public void Cancel()
        {
            ClosePanelAnimation.PlayAnimation();
        }

        public void Buy()
        {
            // if(TowerPreviewUI.BuyTower())
            //     ClosePanelAnimation.PlayAnimation();
        }

        
        
        public void UpdateConfirmationPanel()
        {
            TowerInventoryData towerInventoryData = TowerInventory.TowerData.GetAllTowerInventoryData()[TowerPreviewUI.lastSelectedTowerIndex];

            Tower tower = towerInventoryData.towerSO;

            TitleText.text = $"Unlock " + $"<color={GetHexColor( GlobalSettingsManager.GetGlobalSettings.Invoke().GetRarityColorByTower(tower) )}>" + $"{tower.TowerName}" + "</color>";
            TowerSprite.sprite = tower.CurrentSkin.TowerSprite;
            PriceText.text = "<smallcaps>" + $"Price:  " + "<b>" + $"<color={GetHexColor(GlobalSettingsManager.GetGlobalSettings.Invoke().CoinsColor)}>" + $"{StringFormatter.PriceFormat(tower.BaseProperties.UnlockPrice)}" + "</color>";
        }


        string GetHexColor(Color color)
        {
            return $"#{ColorUtility.ToHtmlStringRGB(color)}";
        }

       
    }
}
