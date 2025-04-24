using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using DefaultNamespace;
using MMK;
using MMK.ScriptableObjects;
using Player;
using TMPro;
using UI.Animations;
using UnityEngine;
using UnityEngine.UI;

namespace UI
{
    public class SkinChanger : MonoBehaviour
    {
        public delegate void InitDelegate(RotateableTower rotateableTower, TowerInventory towerInventory);
        public InitDelegate Init;
        
        public delegate void OpenDelegate(Tower tower);
        public OpenDelegate Open;
        

        [Header("Proprties UI")]
        [SerializeField] TMP_Text TittleText;
        [SerializeField] TMP_Text OwnedTowersCountText;

        [Space(8)]
        [SerializeField] bool UpdateTiles;
        [SerializeField] Transform TilesContainer;
        [SerializeField] GameObject[] SkinTiles;
        
        [Space(8)]
        [Header("Prefabs")]
        [SerializeField] GameObject TilePrefab;

        [Space(12)]
        [Header("Animations UI")]
        [SerializeField] UIAnimation ClosePanelAnimation;
        

        Tower tower;
        TowerSkin[] skins;


        RotateableTower _rotateableTower;
        TowerInventory _towerInventory;
        
        
        void OnValidate()
        {
            if(!UpdateTiles)
                return;

            UpdateTiles = false;
            
            List<GameObject> skinTiles = new List<GameObject>();

            for (int i = 0; i < TilesContainer.childCount; i++)
            {
                Transform row = TilesContainer.GetChild(i);

                for (int j = 0; j < row.childCount; j++)
                {
                    Transform tile = row.GetChild(j);
                    skinTiles.Add(tile.gameObject);
                }
                
            }

            SkinTiles = skinTiles.ToArray();
        }





        void Awake()
        {
            RegisterHandlers();
            
        }

        void OnDestroy()
        {
            UnregisterHandlers();
            
        }



#region Register & Unregister Handlers

        void RegisterHandlers()
        {
            Init += OnInit;
            Open += UpdateUI;
            
        }
        
        void UnregisterHandlers()
        {
            Open -= UpdateUI;
            Init -= OnInit;
        }

#endregion



        void OnInit(RotateableTower rotateableTower, TowerInventory towerInventory)
        {
            _rotateableTower = rotateableTower;
            _towerInventory = towerInventory;
        }
        
        

        void UpdateUI(Tower _tower)
        {
            tower = _tower;

            skins = new TowerSkin[tower.TowerSkins.Length];
            Array.Copy(tower.TowerSkins, skins, tower.TowerSkins.Length);
            skins = skins.OrderBy(_skin => (int)_skin.Rarity).ToArray();
            

            TittleText.text = $"Skins For {StringFormatter.GetColoredText($"{tower.TowerName}", GlobalSettingsManager.GetGlobalSettings.Invoke().GetRarityColorByTower(tower) )}";
            OwnedTowersCountText.text = $"{skins.Where(_skin => _skin.IsUnlocked).ToList().Count}/{skins.Length}";


            for (int i = 0; i < skins.Length; i++)
            {
                Transform tile = SkinTiles[i].transform;
                Transform row = tile.parent;
                
                
                TowerSkin skin = skins[i];
                
                GameObject skinTile = Instantiate(TilePrefab, row);
                
                skinTile.transform.SetSiblingIndex(tile.GetSiblingIndex());
                Destroy(tile.gameObject);
                
                
                Button button = skinTile.GetComponent<Button>();

                int index = i;
                button.onClick.AddListener(() => SelectSkin(index));

                button.interactable = skin.IsUnlocked;

                
                UpdateSkinTileUI(skin, skinTile);
            }

        }


        void UpdateSkinTileUI(TowerSkin skin, GameObject skinTile)
        {
            // Sprite
            Image sprite = skinTile.transform.GetChild(0).GetComponent<Image>();
            sprite.sprite = skin.TowerSprite;
            sprite.color = skin.IsUnlocked ? new Color(1, 1, 1, 1) : new Color(0.35f, 0.35f, 0.35f, 1);

            // Border
            Image borderImage = skinTile.transform.GetChild(1).GetComponent<Image>();
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
            Image rarityImage = skinTile.transform.GetChild(3).GetComponent<Image>();
            rarityImage.color = GlobalSettingsManager.GetGlobalSettings.Invoke().GetRarityColorBySkin(skin);

            // // Checkbox
            // Image Checkbox = skinTile.transform.GetChild(4).GetComponent<Image>();
        }
        
        

        // public void ChangeSkinsPanelActieState()
        // {
        //     for (int i = 0; i < ContainerUI.childCount; i++)
        //     {
        //         Destroy(ContainerUI.GetChild(i).gameObject);
        //     }
        //     
        //     
        //     if(tower == null)
        //         return;
        //
        //     TittleText.text = $"{tower.TowerName} Skins";
        //     OwnedTowersCountText.text = $"Owned: {tower.TowerSkins.Where(_skin => _skin.IsUnlocked).ToList().Count}/{tower.TowerSkins.Length}";
        //     
        //     
        //     for (int i = 0; i < tower.TowerSkins.Length; i++)
        //     {
        //         TowerSkin skin = tower.TowerSkins[i];
        //         GameObject panelUI = Instantiate(SkinPrefabUI, ContainerUI);
        //
        //         Button button = panelUI.GetComponent<Button>();
        //
        //         int index = i;
        //         button.onClick.AddListener( () => SelectSkin(index) );
        //
        //         button.interactable = skin.IsUnlocked;
        //         
        //         
        //         // Sprite
        //         Image sprite = panelUI.transform.GetChild(0).GetComponent<Image>();
        //         sprite.sprite = skin.TowerSprite;
        //         sprite.color = skin.IsUnlocked ? new Color(1, 1, 1, 1) : new Color(0.35f, 0.35f, 0.35f, 1);
        //         
        //         // Border
        //         Image borderImage = panelUI.transform.GetChild(1).GetComponent<Image>();
        //         Color borderColor;
        //         if (skin.IsUnlocked)
        //         {
        //             borderColor = GlobalSettingsManager.GetGlobalSettings.Invoke().SelectedColor;
        //             
        //             if (tower.CurrentSkin != skin)
        //                 borderColor = GlobalSettingsManager.GetGlobalSettings.Invoke().UnselectedColor;
        //         }
        //         else
        //             borderColor = GlobalSettingsManager.GetGlobalSettings.Invoke().LockedColor;
        //         borderImage.color = borderColor;
        //         
        //         // Rarity
        //         Image rarityImage = panelUI.transform.GetChild(3).GetComponent<Image>();
        //         rarityImage.color = GlobalSettingsManager.GetGlobalSettings.Invoke().GetRarityColorBySkin(skin);
        //         
        //         // Checkbox
        //         Image Checkbox = panelUI.transform.GetChild(4).GetComponent<Image>();
        //         
        //         
        //         
        //         // Init PanelUI Data example:
        //         //          SkinUI skinUI = panelUI.GetComponent<SkinUI>();
        //         //          skinUI.UpdateUI(tower.TowerSkins[i]);
        //     }
        // }


        public void SelectSkin(int index)
        {
            Debug.LogException(new Exception($"Select Skin with index:  {index}"));
            TowerSkin skin = skins[index];

            if (!skin.IsUnlocked)
            {
                WarningSystem.ShowWarning(WarningSystem.WarningType.SkinIsLocked);
                return;
            }

            int skinIndex = Array.IndexOf(tower.TowerSkins, skin);
            tower.SetSkinIndex(skinIndex);


            _towerInventory.UpdateTiles();
            
            List<Tower> deck = PlayerController.GetLocalPlayerData?.Invoke().Deck.Select(value => value.Value).ToList();
            for (int i = 0; i < TowerDeck.Instance.deckTiles.Length; i++)
            {
                if (deck[i] != null)
                    TowerDeck.Instance.deckTiles[i].UpdateSprite(deck[i].CurrentSkin.TowerSprite);
            }

            _rotateableTower.SpawnTowerProcess(tower, tower.CurrentSkin);
            // _towerInventory.SelectTower(_towerInventory.selectedTower);
         
            
            
            ClosePanel();
        }



        public async void ClosePanel()
        {
            ClosePanelAnimation.PlayAnimation();
            await ClosePanelAnimation.WaitAsync();
            //await Task.Delay(Mathf.RoundToInt(ClosePanelAnimation.animationLenght * 1000));
            
            Destroy(this.gameObject);
        }






    }
}
