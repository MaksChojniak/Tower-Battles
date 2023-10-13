using System;
using System.Collections;
using System.Collections.Generic;
using DefaultNamespace.ScriptableObjects;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace DefaultNamespace
{
    public enum PropertyType
    {
        Damage,
        Firerate,
        ViewRange
    }
    [Serializable]
    public struct TowerPropertyUI
    {
        public PropertyType type;
        public GameObject propertyPanel;
        public TMP_Text propertyValueText;
    }

    public class GameTowerInformations : MonoBehaviour
    {
        public static event Action<TowerController> OnUpgradeTower;

        [SerializeField] GameObject InforamtionPanel;

        [Space(18)]
        [SerializeField] TMP_Text TowerNameText;
        [SerializeField] Image TowerImage;
        [SerializeField] TMP_Text TowerTotalDamageText;
        [SerializeField] TMP_Text SellPriceText;

        [SerializeField] TowerPropertyUI[] towerPropertiesUI;

        [SerializeField] TMP_Text UpgradeCostText;
        [SerializeField] Image UpgradeLevelImage;

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

            TurnOffPropertiesPanelsUI();
        }


        Coroutine activCoroutine;
        void OnShowTowerInformation(object data, TypeOfBuildng towerType, bool state, TowerController towerController)
        {

            if (!state && LastCheckedTower != towerController)
                return;
            
            InforamtionPanel.SetActive(state);

            if(activCoroutine != null)
                StopCoroutine(activCoroutine);

            if (!InforamtionPanel.activeSelf)
                return;

            LastCheckedTower = towerController;

            switch (towerType)
            {
                case TypeOfBuildng.Soldier:
                    ShowSoldierInfo((Soldier)data, towerController.UpgradeLevel, (SoldierController)towerController);
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


        void TurnOffPropertiesPanelsUI()
        {
            foreach (var propertyUI in towerPropertiesUI)
            {
                propertyUI.propertyPanel.SetActive(false);
            }
        }

        void ShowSoldierInfo(Soldier soldierSO, int upgradeLevel, SoldierController soldierController)
        {
            TurnOffPropertiesPanelsUI();

           
            bool isMaxLevel = upgradeLevel >= 4;
            int nextUpgradeLevel = !isMaxLevel ? upgradeLevel + 1 : upgradeLevel;

            string normalColorHEX = $"#{ColorUtility.ToHtmlStringRGB(normalColor)}";
            string nextValueColorHEX = $"#{ColorUtility.ToHtmlStringRGB(nextValueColor)}";

            TowerNameText.text = soldierSO.TowerName;
            TowerImage.sprite = soldierSO.GetUpgradeIcon(nextUpgradeLevel);
            activCoroutine = StartCoroutine(UpdateTotalDamage(soldierController));

            long totalTowerValue = soldierSO.GetPrice();
            for (int i = 1; i <= upgradeLevel; i++)
            {
                totalTowerValue += soldierSO.GetUpgradePrice(i);
            }
            totalTowerValue /= 2;
            SellPriceText.text = $"Sell ${totalTowerValue}";

            List<PropertyType> propertyTypes = new List<PropertyType>() {PropertyType.Damage, PropertyType.Firerate, PropertyType.ViewRange };
            foreach(var propertyUI in towerPropertiesUI)
            {
                if (propertyTypes.Contains(propertyUI.type))
                {
                    propertyUI.propertyPanel.SetActive(true);
                   
                    switch (propertyUI.type)
                    {
                        case PropertyType.Damage:
                            propertyUI.propertyValueText.text = "Damage: " + (isMaxLevel ? $"<color={normalColorHEX}>{soldierSO.GetWeapon(upgradeLevel).Damage}</color>" : 
                                $"<color={normalColorHEX}>{soldierSO.GetWeapon(upgradeLevel).Damage}</color> <color={nextValueColorHEX}><sprite=0, color={nextValueColorHEX}> {soldierSO.GetWeapon(nextUpgradeLevel).Damage}</color>");
                            break; 
                        case PropertyType.Firerate:
                            propertyUI.propertyValueText.text = "Firearate: " + (isMaxLevel ? $"<color={normalColorHEX}>{soldierSO.GetWeapon(upgradeLevel).Firerate}</color>" : 
                                $"<color={normalColorHEX}>{soldierSO.GetWeapon(upgradeLevel).Firerate}</color> <color={nextValueColorHEX}><sprite=0, color={nextValueColorHEX}> {soldierSO.GetWeapon(nextUpgradeLevel).Firerate}</color>");
                            break;
                        case PropertyType.ViewRange:
                            propertyUI.propertyValueText.text = "Range: " + (isMaxLevel ? $"<color={normalColorHEX}>{soldierSO.GetViewRange(upgradeLevel)}</color>" : 
                                $"<color={normalColorHEX}>{soldierSO.GetViewRange(upgradeLevel)}</color> <color={nextValueColorHEX}><sprite=0, color={nextValueColorHEX}> {soldierSO.GetViewRange(nextUpgradeLevel)}</color>");
                            break;
                    }
                }
            }

            UpgradeCostText.text = $"${soldierSO.GetUpgradePrice(nextUpgradeLevel)}";
            UpgradeLevelImage.fillAmount = (float)(upgradeLevel + 1) / 5f;  
            //TowerDamageText.text = isMaxLevel ? $"<color={normalColorHEX}>{soldierSO.GetViewRange(upgradeLevel)}</color>" : 
            //    $"<color={normalColorHEX}>{soldierSO.GetViewRange(upgradeLevel)}</color> <color={nextValueColorHEX}>=> {soldierSO.GetViewRange(nextUpgradeLevel)}</color>";

        }

        IEnumerator UpdateTotalDamage(SoldierController soldierController)
        {
            while (true)
            {
                TowerTotalDamageText.text = $"Total Damage: {soldierController.TotalDamage}";

                yield return new WaitForSeconds(Time.deltaTime);
            }
        }

        void ShowFarmInfo()
        {
            TurnOffPropertiesPanelsUI();

        }

        void ShowBoosterInfo()
        {
            TurnOffPropertiesPanelsUI();

        }

        void ShowSpawnerInfo()
        {
            TurnOffPropertiesPanelsUI();

        }

        public void UpgradeTower()
        {
            if(LastCheckedTower == null)
                return;
                
            OnUpgradeTower?.Invoke(LastCheckedTower);
        }
    }
}
