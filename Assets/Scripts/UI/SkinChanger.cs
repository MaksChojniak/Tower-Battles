using System;
using System.Security.Cryptography;
using DefaultNamespace;
using MMK.ScriptableObjects;
using UnityEngine;
using UnityEngine.UI;

namespace UI
{
    public class SkinChanger : MonoBehaviour
    {


        [SerializeField] GameObject SkinsPanel;
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
            
            
            SkinsPanel.SetActive(!SkinsPanel.activeSelf);

            if(tower == null)
                return;

            for (int i = 0; i < tower.TowerSkins.Length; i++)
            {
                TowerSkin skin = tower.TowerSkins[i];
                GameObject panelUI = Instantiate(SkinPrefabUI, ContainerUI);

                Button button = panelUI.GetComponent<Button>();

                int index = i;
                button.onClick.AddListener( () => SelectSkin(index) );

                button.interactable = skin.IsUnlocked;
                
                Image sprite = panelUI.transform.GetChild(0).GetComponent<Image>();
                sprite.sprite = skin.TowerSprite;
                sprite.color = skin.IsUnlocked ? new Color(1, 1, 1, 1) : new Color(0.65f, 0.65f, 0.65f, 1);
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

            RotateableTower.SpawnTowerProcess(tower, tower.CurrentSkin);

            ChangeSkinsPanelActieState();
        }
        
        
        
        
        
        
        
        
    }
}
