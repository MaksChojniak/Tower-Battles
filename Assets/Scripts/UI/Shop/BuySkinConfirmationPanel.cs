using System.Linq;
using DefaultNamespace;
using MMK;
using MMK.ScriptableObjects;
using Player;
using TMPro;
using UI.Animations;
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
        
        // [SerializeField] Color CommonColor;
        // [SerializeField] Color RareColor;
        // [SerializeField] Color EpicColor;
        // [SerializeField] Color ExclusiveColor;
        // [SerializeField] Color PriceTextColor;

        [SerializeField] UIAnimation openConfirmationPanel;
        [SerializeField] UIAnimation closeConfirmationPanel;

        
        Tower tower;
        TowerSkin skin; 

        public void Cancel()
        {
            // this.gameObject.SetActive(false);
            
            closeConfirmationPanel.PlayAnimation();
            
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
            tower = _tower;
            skin = _skin;

            
            openConfirmationPanel.PlayAnimation();

            
            TittleText.text = $"Buy {StringFormatter.GetColoredText(skin.SkinName, GlobalSettingsManager.GetGlobalSettings.Invoke().GetRarityColorBySkin(skin))} {StringFormatter.GetColoredText(tower.TowerName,  GlobalSettingsManager.GetGlobalSettings.Invoke().GetRarityColorByTower(tower))}";

            SkinSprite.sprite = skin.TowerSprite;
            SkinRarityImage.color = GlobalSettingsManager.GetGlobalSettings.Invoke().GetRarityColorBySkin(skin);
            
            PriceText.text = $"Price:  " + $"<b>" + $"{StringFormatter.PriceFormat(skin.UnlockPrice)}" + $"{StringFormatter.GetSpriteText(new SpriteTextData() {SpriteName = "coins", SpacesCount = 1, WithSpaces = true})}";
            
            
            TowerIsUnlockedText.gameObject.SetActive(!tower.IsUnlocked());
            TowerIsUnlockedText.text  = tower.IsUnlocked() ? "" : $"{tower.TowerName} Required!";

            BuyButton.interactable = tower.IsUnlocked();

            RotatetableTower.SpawnTowerProcess(tower, skin);

        }

        
        

        string GetHexColor(Color color)
        {
            return $"#{ColorUtility.ToHtmlStringRGB(color)}";
        }

    }
}
