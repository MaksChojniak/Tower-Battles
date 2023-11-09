using System;
using System.Collections;
using System.Collections.Generic;
using System.Globalization;
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

    public enum TargetMode
    {
        First,
        Last,
        Closest,
        Weakest,
        Strongest
    }

    public class GameTowerInformations : MonoBehaviour
    {
        public static event Action<TowerController> OnUpgradeTower;

        [SerializeField] GameObject InforamtionPanel;
        [SerializeField] Image MaxedOutUI;
        [SerializeField] GameObject TargettingModePanel;
        [SerializeField] Image[] TargetModeButtonsImage;

        [Space(18)]
        [SerializeField] TMP_Text TowerNameText;
        [SerializeField] Image TowerImage;
        [SerializeField] TMP_Text TowerTotalDamageText;
        [SerializeField] TMP_Text SellPriceText;
        [SerializeField] TMP_Text TargettingModeText;

        [Space(18)]
        [SerializeField] TowerPropertyUI[] towerPropertiesUI;

        [Space(18)]
        [SerializeField] TMP_Text UpgradeCostText;
        [SerializeField] Image UpgradeLevelImage;
        [SerializeField] Image CashSprite;

        [Space(18)]
        [SerializeField] TowerController LastCheckedTower;

        [Space(18)]
        [SerializeField] Color normalColor;
        [SerializeField] Color nextValueColor;
        [SerializeField] Color MaxedOutColor;
        [SerializeField] Color cashColor;
        [SerializeField] Color targetModeButtonNormalColor;
        [SerializeField] Color targetModeButtonHighlightedColor;



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
            //InforamtionPanel.SetActive(false);
            OnShowTowerInformation(null, TypeOfBuildng.Soldier, false, null);

            TurnOffPropertiesPanelsUI();
        }


        Coroutine activCoroutine;
        void OnShowTowerInformation(object data, TypeOfBuildng towerType, bool state, TowerController towerController)
        {

            if (!state && LastCheckedTower != towerController)
                return;
            
            InforamtionPanel.SetActive(state);
            TargettingModePanel.SetActive(false);

            if (activCoroutine != null)
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
            string cashColorHEX = $"#{ColorUtility.ToHtmlStringRGB(cashColor)}";

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
            SellPriceText.text = $"<b>Sell: " + $"<color={cashColorHEX}>{totalTowerValue}</color>";

            OnUpdateMode(GetIndexByMode(soldierController.targetMode));

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
                            int damage = soldierSO.GetWeapon(upgradeLevel).Damage;
                            int newDamage = soldierSO.GetWeapon(nextUpgradeLevel).Damage;

                            valueIsChanged = !isMaxLevel && newDamage != damage;
                            TMP_Text damageValueText = propertyUI.propertyValueObject.GetComponent<TMP_Text>();

                            damageValueText.text = "Damage: " + (!valueIsChanged ? $"<color={normalColorHEX}>{damage}</color>" : 
                                $"<color={normalColorHEX}>{damage}</color> <color={nextValueColorHEX}><sprite=0, color={nextValueColorHEX}> {damage}</color>");
                            break; 
                        
                        
                        case PropertyType.Firerate:
                            double firerate = 60 / soldierSO.GetWeapon(upgradeLevel).Firerate;
                            double newFirerate = 60 / soldierSO.GetWeapon(nextUpgradeLevel).Firerate;

                            valueIsChanged = !isMaxLevel && Math.Abs(firerate - newFirerate) > 0.01f;
                            TMP_Text firerateValueText = propertyUI.propertyValueObject.GetComponent<TMP_Text>();

                            firerateValueText.text = "Firerate: " + (!valueIsChanged ? $"<color={normalColorHEX}>{FormattedString(firerate)}</color>" : 
                                $"<color={normalColorHEX}>{FormattedString(firerate)}</color> <color={nextValueColorHEX}><sprite=0, color={nextValueColorHEX}> {FormattedString(newFirerate)}</color>");
                            break;
                        
                        
                        case PropertyType.ViewRange:
                            double viewRange = soldierSO.GetViewRange(upgradeLevel);
                            double newViewRange = soldierSO.GetViewRange(nextUpgradeLevel);

                            valueIsChanged = !isMaxLevel && Math.Abs(viewRange - newViewRange) > 0.01f;
                            TMP_Text viewRangeValueText = propertyUI.propertyValueObject.GetComponent<TMP_Text>();
                            
                            viewRangeValueText.text = "Range: " + (!valueIsChanged ? $"<color={normalColorHEX}>{FormattedString(viewRange)}</color>" : 
                                $"<color={normalColorHEX}>{FormattedString(viewRange)}</color> <color={nextValueColorHEX}><sprite=0, color={nextValueColorHEX}> {FormattedString(newViewRange)}</color>");
                            break;
                        
                        
                        case PropertyType.Detection:
                            bool hasBinoculars = soldierSO.GetHasBinoculars(upgradeLevel);
                            bool newHasBinoculars = soldierSO.GetHasBinoculars(nextUpgradeLevel);

                            valueIsChanged = !isMaxLevel && hasBinoculars != newHasBinoculars;
                            CustomToggle checkbox = propertyUI.propertyValueObject.GetComponent<CustomToggle>();

                            TMP_Text iconText = checkbox.transform.GetChild(checkbox.transform.childCount-1).GetComponent<TMP_Text>();
                            CustomToggle nextCheckboxValue = iconText.transform.GetChild(iconText.transform.childCount-1).GetComponent<CustomToggle>();

                            checkbox.IsOn = hasBinoculars;
                            nextCheckboxValue.IsOn = newHasBinoculars;

                            iconText.enabled = valueIsChanged;
                            iconText.text = $"<sprite=0, color={nextValueColorHEX}>";
                            nextCheckboxValue.gameObject.SetActive(valueIsChanged);
                            
                            break;
                    }
                }
            } 

            UpgradeCostText.text = isMaxLevel ? $"<color={MaxedOutColorHEX}>" + "<b>Maxed Out" + "</color>" : "<b>Upgrade: " + $"<b><color={cashColorHEX}>{soldierSO.GetUpgradePrice(nextUpgradeLevel)}</color>";
            UpgradeCostText.alignment = isMaxLevel ? TextAlignmentOptions.Center : TextAlignmentOptions.Right;
            if (isMaxLevel)
                UpgradeCostText.margin = Vector4.zero;
            else
                UpgradeCostText.margin = new Vector4(10, 0, 77, 0);
            CashSprite.enabled = !isMaxLevel;
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

            bool isMaxLevel = LastCheckedTower.UpgradeLevel >= 4;

            if (isMaxLevel)
                WarningSystem.ShowWarning(WarningSystem.WarningType.MaxedOut);

            OnUpgradeTower?.Invoke(LastCheckedTower);
        }

        public void SellTower()
        {
            if (LastCheckedTower == null)
                return;

            LastCheckedTower.DestroyTower();
        }

        static string FormattedString(double value)
        {
            CultureInfo cultureInfo = CultureInfo.CreateSpecificCulture("uk-UA");

            return value.ToString("0.0", cultureInfo);
        }


        public void ChangeTargetModePanelActive()
        {
            TargettingModePanel.SetActive(!TargettingModePanel.activeSelf);
        }

        public void SetTargetMode(int index)
        {
            TargetMode mode = GetModeByIndex(index);

            if (LastCheckedTower == null)
                return;

            LastCheckedTower.targetMode = mode;

            OnUpdateMode(index);
            ChangeTargetModePanelActive();
        }

        void OnUpdateMode(int index)
        {
            foreach (var button in TargetModeButtonsImage)
                button.color = targetModeButtonNormalColor;

            TargettingModeText.text = $"Targets:\n[{LastCheckedTower.targetMode.ToString()}]";
            TargetModeButtonsImage[index].color = targetModeButtonHighlightedColor;
        }

        TargetMode GetModeByIndex(int index)
        {
            switch (index)
            {
                case 0:
                    return TargetMode.First;
                case 1:
                    return TargetMode.Last;
                case 2:
                    return TargetMode.Closest;
                case 3:
                    return TargetMode.Weakest;
                case 4:
                    return TargetMode.Strongest;
                default:
                    return TargetMode.First;
            }
        }

        int GetIndexByMode(TargetMode mode)
        {
            switch (mode)
            {
                case TargetMode.First:
                    return 0;
                case TargetMode.Last:
                    return 1;
                case TargetMode.Closest:
                    return 2;
                case TargetMode.Weakest:
                    return 3;
                case TargetMode.Strongest:
                    return 4;
                default:
                    return 0;
            }
        }
    }
}
