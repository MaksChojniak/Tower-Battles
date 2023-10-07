using System;
using DefaultNamespace.ScriptableObjects;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace DefaultNamespace
{
    public class GameTowerInformations : MonoBehaviour
    {
        public static event Action<TowerController> OnUpgradeTower;

        [SerializeField] GameObject InforamtionPanel;

        [Space(18)]
        [SerializeField] TMP_Text TowerNameText;
        [SerializeField] Image TowerImage;
        [SerializeField] TMP_Text TowerDamageText;

        [SerializeField] TowerController LastCheckedTower;

        [SerializeField] Color normalColor;
        [SerializeField] Color nextValueColor;

        void Awake()
        {
            TowerController.OnShowTowerInformation += OnShowTowerInformation;
        }
        
        void OnDestroy()
        {
            TowerController.OnShowTowerInformation -= OnShowTowerInformation;
        }

        void Start()
        {
            InforamtionPanel.SetActive(false);
        }


        void OnShowTowerInformation(object data, TypeOfBuildng towerType, bool state, TowerController towerController)
        {
            if (!state && LastCheckedTower != towerController)
                return;
            
            InforamtionPanel.SetActive(state);
            
            if(!InforamtionPanel.activeSelf)
                return;

            LastCheckedTower = towerController;

            switch (towerType)
            {
                case TypeOfBuildng.Soldier:
                    ShowSoldierInfo((Soldier)data, towerController.UpgradeLevel);
                    break;
                case TypeOfBuildng.Farm:
                    ShowFarmInfo();
                    break;
                case TypeOfBuildng.Booster:
                    ShowBoosterInfo();
                    break;
                case TypeOfBuildng.Spawner:
                    ShowSpawnerInfo();
                    break;
            }
            
            Debug.Log(nameof(OnShowTowerInformation));
        }



        void ShowSoldierInfo(Soldier soldierSO, int upgradeLevel)
        {
            bool isMaxLevel = upgradeLevel >= 4;
            int nextUpgradeLevel = !isMaxLevel ? upgradeLevel + 1 : upgradeLevel;

            string normalColorHEX = $"#{ColorUtility.ToHtmlStringRGB(normalColor)}";
            string nextValueColorHEX = $"#{ColorUtility.ToHtmlStringRGB(nextValueColor)}";

            TowerNameText.text = soldierSO.TowerName;
            TowerImage.sprite = soldierSO.GetUpgradeIcon(upgradeLevel);

            TowerDamageText.text = isMaxLevel ? $"<color={normalColorHEX}>{soldierSO.GetViewRange(upgradeLevel)}</color>" : 
                $"<color={normalColorHEX}>{soldierSO.GetViewRange(upgradeLevel)}</color> <color={nextValueColorHEX}>=> {soldierSO.GetViewRange(nextUpgradeLevel)}</color>";

        }

        void ShowFarmInfo()
        {
            
        }

        void ShowBoosterInfo()
        {
            
        }

        void ShowSpawnerInfo()
        {
            
        }

        public void UpgradeTower()
        {
            if(LastCheckedTower == null)
                return;
                
            OnUpgradeTower?.Invoke(LastCheckedTower);
        }
    }
}
