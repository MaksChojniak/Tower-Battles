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
        ViewRange,
        Detection,
        UpgradeDiscount,
        IncreasePower,
        Health
    }
    [Serializable]
    public struct TowerPropertyUI
    {
        public PropertyType type;
        public GameObject propertyPanel;
        public GameObject propertyValueObject;
    }

    public class GameTowerInformations : MonoBehaviour
    {
        public static event Action<TowerController> OnUpgradeTower;

        [SerializeField] GameObject InforamtionPanel;

        [SerializeField] Image MaxedOutUI;

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
        [SerializeField] Color MaxedOutColor;

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
            string MaxedOutColorHEX = $"#{ColorUtility.ToHtmlStringRGB(MaxedOutColor)}";

            //MaxedOut UI layer when 5 level
            MaxedOutUI.enabled = isMaxLevel;

            TowerNameText.text = soldierSO.TowerName;
            TowerImage.sprite = soldierSO.GetUpgradeIcon(upgradeLevel);
            activCoroutine = StartCoroutine(UpdateTotalDamage(soldierController));

            long totalTowerValue = soldierSO.GetPrice();
            for (int i = 1; i <= upgradeLevel; i++)
            {
                totalTowerValue += soldierSO.GetUpgradePrice(i);
            }
            totalTowerValue /= 2;
            SellPriceText.text = $"Sell ${totalTowerValue}";

            List<PropertyType> propertyTypes = new List<PropertyType>() {PropertyType.Damage, PropertyType.Firerate, PropertyType.ViewRange, PropertyType.Detection };
            foreach(var propertyUI in towerPropertiesUI)
            {
                if (propertyTypes.Contains(propertyUI.type))
                {
                    propertyUI.propertyPanel.SetActive(true);

                    bool valueIsChanged = false;
                    
                    switch (propertyUI.type)
                    {
                        case PropertyType.Damage:
                            valueIsChanged = !isMaxLevel && soldierSO.GetWeapon(upgradeLevel).Damage != soldierSO.GetWeapon(nextUpgradeLevel).Damage;
                            TMP_Text damageValueText = propertyUI.propertyValueObject.GetComponent<TMP_Text>();
                            
                            damageValueText.text = "Damage: " + (!valueIsChanged ? $"<color={normalColorHEX}>{soldierSO.GetWeapon(upgradeLevel).Damage}</color>" : 
                                $"<color={normalColorHEX}>{soldierSO.GetWeapon(upgradeLevel).Damage}</color> <color={nextValueColorHEX}><sprite=0, color={nextValueColorHEX}> {soldierSO.GetWeapon(nextUpgradeLevel).Damage}</color>");
                            break; 
                        
                        
                        case PropertyType.Firerate:
                            valueIsChanged = !isMaxLevel && Math.Abs(soldierSO.GetWeapon(upgradeLevel).Firerate - soldierSO.GetWeapon(nextUpgradeLevel).Firerate) > 0.01f;
                            TMP_Text firerateValueText = propertyUI.propertyValueObject.GetComponent<TMP_Text>();
                            
                            firerateValueText.text = "Firerate: " + (!valueIsChanged ? $"<color={normalColorHEX}>{soldierSO.GetWeapon(upgradeLevel).Firerate}</color>" : 
                                $"<color={normalColorHEX}>{soldierSO.GetWeapon(upgradeLevel).Firerate}</color> <color={nextValueColorHEX}><sprite=0, color={nextValueColorHEX}> {soldierSO.GetWeapon(nextUpgradeLevel).Firerate}</color>");
                            break;
                        
                        
                        case PropertyType.ViewRange:
                            valueIsChanged = !isMaxLevel && Math.Abs(soldierSO.GetViewRange(upgradeLevel) - soldierSO.GetViewRange(nextUpgradeLevel)) > 0.01f;
                            TMP_Text viewRangeValueText = propertyUI.propertyValueObject.GetComponent<TMP_Text>();
                            
                            viewRangeValueText.text = "Range: " + (!valueIsChanged ? $"<color={normalColorHEX}>{soldierSO.GetViewRange(upgradeLevel)}</color>" : 
                                $"<color={normalColorHEX}>{soldierSO.GetViewRange(upgradeLevel)}</color> <color={nextValueColorHEX}><sprite=0, color={nextValueColorHEX}> {soldierSO.GetViewRange(nextUpgradeLevel)}</color>");
                            break;
                        
                        
                        case PropertyType.Detection:
                            valueIsChanged = !isMaxLevel && soldierSO.GetHasBinoculars(upgradeLevel) != soldierSO.GetHasBinoculars(nextUpgradeLevel);
                            CustomToggle checkbox = propertyUI.propertyValueObject.GetComponent<CustomToggle>();

                            TMP_Text iconText = checkbox.transform.GetChild(checkbox.transform.childCount-1).GetComponent<TMP_Text>();
                            CustomToggle nextCheckboxValue = iconText.transform.GetChild(iconText.transform.childCount-1).GetComponent<CustomToggle>();

                            checkbox.IsOn = soldierSO.GetHasBinoculars(upgradeLevel);
                            nextCheckboxValue.IsOn = soldierSO.GetHasBinoculars(nextUpgradeLevel);

                            iconText.enabled = valueIsChanged;
                            iconText.text = $"<sprite=0, color={nextValueColorHEX}>";
                            nextCheckboxValue.gameObject.SetActive(valueIsChanged);
                            
                            break;
                    }
                }
            } 

            UpgradeCostText.text = isMaxLevel ? $"<color={MaxedOutColorHEX}>" + "Maxed Out" + "</color>" : $"${soldierSO.GetUpgradePrice(nextUpgradeLevel)}";
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

        public void SellTower()
        {
            if (LastCheckedTower == null)
                return;

            LastCheckedTower.DestroyTower();
        }
    }
}
