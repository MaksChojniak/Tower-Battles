using System;
using System.Collections.Generic;
using System.Linq;
using DefaultNamespace;
using MMK;
using MMK.ScriptableObjects;
using Player;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace UI
{
    public class SkinChanger : MonoBehaviour
    {

        [SerializeField] TMP_Text TittleText;
        [SerializeField] TMP_Text OwnedTowersCountText;

        [SerializeField] GameObject SkinsPanel;
        [SerializeField] TowerInventory TowerInventory;
        [SerializeField] RotateableTower RotateableTower;

        [SerializeField] Transform ContainerUI;
        [SerializeField] GameObject SkinPrefabUI;
        

        Tower tower;

     
        
        void OnEnable()
        {
            TowerInventory.OnSelectTile += OnSelectTower;
        }

        void OnDisable()
        {
            TowerInventory.OnSelectTile -= OnSelectTower;
        }


        void OnSelectTower(int index, GameObject tile, bool isUnlocked, Tower _tower)
        {
            tower = _tower;
        }



        public void ChangeSkinsPanelActieState()
        {
            for (int i = 0; i < ContainerUI.childCount; i++)
            {
                Destroy(ContainerUI.GetChild(i).gameObject);
            }
            
            
            if(tower == null)
                return;

            TittleText.text = $"{tower.TowerName} Skins";
            OwnedTowersCountText.text = $"Owned: {tower.TowerSkins.Where(_skin => _skin.IsUnlocked).ToList().Count}/{tower.TowerSkins.Length}";
            
            
            for (int i = 0; i < tower.TowerSkins.Length; i++)
            {
                TowerSkin skin = tower.TowerSkins[i];
                GameObject panelUI = Instantiate(SkinPrefabUI, ContainerUI);

                Button button = panelUI.GetComponent<Button>();

                int index = i;
                button.onClick.AddListener( () => SelectSkin(index) );

                button.interactable = skin.IsUnlocked;
                
                
                // Sprite
                Image sprite = panelUI.transform.GetChild(0).GetComponent<Image>();
                sprite.sprite = skin.TowerSprite;
                sprite.color = skin.IsUnlocked ? new Color(1, 1, 1, 1) : new Color(0.35f, 0.35f, 0.35f, 1);
                
                // Border
                Image borderImage = panelUI.transform.GetChild(1).GetComponent<Image>();
                Color borderColor;
                if (skin.IsUnlocked)
                {
                    borderColor = GlobalSettingsManager.GetGlobalSettings.Invoke().SelectedColor;
                    
                    if (tower.CurrentSkin != skin)
                        borderColor = GlobalSettingsManager.GetGlobalSettings.Invoke().UnselectedColor;
                }
                else
                    borderColor = GlobalSettingsManager.GetGlobalSettings.Invoke().LockedColor;
                borderImage.color = borderColor;
                
                // Rarity
                Image rarityImage = panelUI.transform.GetChild(3).GetComponent<Image>();
                rarityImage.color = GlobalSettingsManager.GetGlobalSettings.Invoke().GetRarityColorBySkin(skin);
                
                // Checkbox
                Image Checkbox = panelUI.transform.GetChild(4).GetComponent<Image>();
                
                
                
                // Init PanelUI Data example:
                //          SkinUI skinUI = panelUI.GetComponent<SkinUI>();
                //          skinUI.UpdateUI(tower.TowerSkins[i]);
            }
        }


        public void SelectSkin(int index)
        {
            Debug.LogException(new Exception($"Select Skin with index:  {index}"));
            TowerSkin skin = tower.TowerSkins[index];

            if (!skin.IsUnlocked)
            {
                WarningSystem.ShowWarning(WarningSystem.WarningType.SkinIsLocked);
                return;
            }

            tower.SetSkinIndex(index);
            // tower.SkinIndex = index;

            // TowerInventory.SelectTower(TowerInventory.selectedTower);
            TowerInventory.UpdateTiles();
            List<Tower> deck = PlayerController.GetLocalPlayerData?.Invoke().Deck.Select(value => value.Value).ToList();
            for (int i = 0; i < TowerDeck.Instance.deckTiles.Length; i++)
            {
                if(deck[i] != null)
                    TowerDeck.Instance.deckTiles[i].UpdateSprite(deck[i].CurrentSkin.TowerSprite);
            }
            
            RotateableTower.SpawnTowerProcess(tower, tower.CurrentSkin);

            // TowerInventory.gameObject.SetActive(false);
            // TowerInventory.gameObject.SetActive(true);
            

            ChangeSkinsPanelActieState();
        }
        
        
        
        
        
        
        
        
    }
}
