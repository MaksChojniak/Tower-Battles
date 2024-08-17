using System;
using System.Linq;
using MMK;
using MMK.ScriptableObjects;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace UI.Shop
{
    public class SkinForSaleUI : MonoBehaviour
    {
        [SerializeField] Image ownedBackground;
        
        [SerializeField] Image rarityColor;
        [SerializeField] TMP_Text towerNameText;
        [SerializeField] TMP_Text skinNameText;
        [SerializeField] Image skinSprite;
        [SerializeField] TMP_Text rarityText;
        [SerializeField] TMP_Text priceText;



        public void UpdateUI(SkinOffert skinOffert, SkinsForSaleUIProperties UIProperties)
        {
            if(skinOffert == null || string.IsNullOrEmpty(skinOffert.TowerSkinID))
                return;
            
            Tower tower = GlobalSettingsManager.GetGlobalSettings?.Invoke().Towers.FirstOrDefault(_tower => _tower.TowerSkins.Any(_skin => _skin.ID == skinOffert.TowerSkinID) );//.FirstOrDefault(_skin => _skin.ID == skinOffert.TowerSkin.ID);
            if(tower == null)
                return;
            
            TowerSkin skin = tower.TowerSkins.FirstOrDefault(_skin => _skin.ID == skinOffert.TowerSkinID);
            if(skin == null)
                return;
            
            // Set Rarity Color & Text
            Color colorOfRarity = Color.black;
            switch (skin.Rarity)
            {
                case SkinRarity.Common:
                    colorOfRarity = UIProperties.CommonColor;
                    break;
                case SkinRarity.Rare:
                    colorOfRarity = UIProperties.RareColor;
                    break;
                case SkinRarity.Epic:
                    colorOfRarity = UIProperties.EpicColor;
                    break;
                case SkinRarity.Exclusive:
                    colorOfRarity = UIProperties.ExclusiveColor;
                    break;
            }
            rarityColor.color = colorOfRarity;
            rarityText.text = $"{skin.Rarity.ToString()}";

            // Set Tower Name
            towerNameText.text = $"{tower.TowerName}";

            // Set Skin Name
            skinNameText.text = $"{skin.SkinName.Replace(tower.TowerName, "")}";
            
            // Set Skin Sprite
            skinSprite.sprite = skin.TowerSprite;
            
            // Set Skin Price
            priceText.text = skin.IsUnlocked ? "Owned" : $"{skin.UnlockPrice}{StringFormatter.GetSpriteText(new SpriteTextData() {SpriteName = "coins", SpacesCount = 1, WithSpaces = true})}";

            ownedBackground.color = skin.IsUnlocked ? new Color(0f, 0f, 0f, 0.65f) : new Color(1, 1, 1, 0);
        }
    }
}
