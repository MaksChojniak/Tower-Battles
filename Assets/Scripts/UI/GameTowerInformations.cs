using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using DefaultNamespace;
using MMK;
using MMK.ScriptableObjects;
using MMK.Towers;
using TMPro;
using Towers;
using UI.Animations;
using UnityEngine;

namespace MMK
{


    public enum TargetMode : int
    {
        First = 0,
        Last = 1,
        Closest = 2,
        Weakest = 3,
        Strongest = 4
    }



    public class GameTowerInformations : MonoBehaviour
    {
        
        public delegate void SetActiveInformationsPanelDelegate(bool activeState, TowerInformations Info);
        public static SetActiveInformationsPanelDelegate SetActiveInformationsPanel;


        
        
        [SerializeField] GameObject InforamtionPanel;
        
        
        [Space(18)]
        public TowerInformationsUI TowerInformationsUI;

        
        [SerializeField] TowerInformations CurrentClickedTower
        {
            get
            {
                return currentClickedTower;
            }
            set
            {
                currentClickedTower = value;

                if (ActiveCoroutine != null)
                    StopCoroutine(ActiveCoroutine);

                if (currentClickedTower == null)
                    return;

                ActiveCoroutine = StartCoroutine(UpdateTotalValue(currentClickedTower.Controller));

            }
        }
        TowerInformations currentClickedTower;
        [SerializeField] bool IsSomeTowerClicked => CurrentClickedTower != null;


        [Space(18)]

        [SerializeField] UIAnimation OpenPanelAnimation;
        [SerializeField] UIAnimation ClosePanelAnimation;
        // [SerializeField] Color normalColor;
        // [SerializeField] Color nextValueColor;
        // [SerializeField] Color MaxedOutColor;
        // [SerializeField] Color cashColor;
        // [SerializeField] Color targetModeButtonNormalColor;
        // [SerializeField] Color targetModeButtonHighlightedColor;



        void Awake()
        {
            RegisterHandlers();

        }

        void OnDestroy()
        {
            UnregisterHandlers();

        }

        void Start()
        {

        }

        void Update()
        {
            
        }

        void FixedUpdate()
        {
            
        }


#region Register & Unregiser Handlers

        void RegisterHandlers()
        {
            // SetActiveInformationsPanel += OnSetActiveInformationsPanel;
            SetActiveInformationsPanel += WaitForAllTowers;
            TowerSpawner.OnStartPlacingTower += OnTowerPlaced;
            
        }

        void UnregisterHandlers()
        {
            TowerSpawner.OnStartPlacingTower -= OnTowerPlaced;
            // SetActiveInformationsPanel -= OnSetActiveInformationsPanel;
            SetActiveInformationsPanel -= WaitForAllTowers;

        }



#endregion



        void OnTowerPlaced(TowerController towerController)
        {
            if(IsSomeTowerClicked)
                OnSetActiveInformationsPanel(false, CurrentClickedTower);

        }

        
        

        class PanelActiveState
        {
            public bool ActiveState;
            public TowerInformations Info;
        }

        List<PanelActiveState> panelActiveStateQueue = new List<PanelActiveState>();
        async void WaitForAllTowers(bool activeState, TowerInformations Info)
        {
            panelActiveStateQueue.Add(new PanelActiveState() { ActiveState = activeState, Info = Info } );
            
            if(panelActiveStateQueue.Count > 1)
                return;

            while ( panelActiveStateQueue.Count < GameObject.FindObjectsOfType<TowerController>().Length )
            {
                await Task.Yield();
            }

            PanelActiveState panelState = panelActiveStateQueue.FirstOrDefault(element => element.ActiveState);

            bool state = panelState != null;
            TowerInformations info = panelState?.Info;

            OnSetActiveInformationsPanel(state, info);

            panelActiveStateQueue = new List<PanelActiveState>();
        }
        

        void OnSetActiveInformationsPanel(bool activeState, TowerInformations Info)
        {
            if (!activeState && CurrentClickedTower != null && Info != null && CurrentClickedTower.Controller != Info.Controller)
                return;
            
            // InforamtionPanel.SetActive(activeState);
            
            
            if (activeState)
                OpenPanelAnimation.PlayAnimation();
            else
                ClosePanelAnimation.PlayAnimation();

            
            if (!activeState)
            {
                CurrentClickedTower = null;
                return;
            }
            
            
            CurrentClickedTower = Info;


            if (Info.TryGetInfo<Soldier, SoldierController>(out var soldierData, out var soldierController))
                ShowSoldierInfo(soldierData, soldierController);
            else if (Info.TryGetInfo<Booster, BoosterController>(out var boosterData, out var boosterController))
                ShowBoosterInfo(boosterData, boosterController);
            else if (Info.TryGetInfo<Farm, FarmController>(out var farmData, out var farmController))
                ShowFarmInfo(farmData, farmController);
            // else if (Info.TryGetInfo<Spawner, SpawnerController>(out var spawnerData, out var spawnerController))
            //     ShowSpawnerInfo(spawnerData, spawnerController);
        }



        // Coroutine activCoroutine;
        // void OnShowTowerInformation(object data, TypeOfBuildng towerType, bool state, TowerController towerController)
        // {
        //
        //     if (!state && LastCheckedTower != towerController)
        //         return;
        //     
        //     InforamtionPanel.SetActive(state);
        //     TargettingModePanel.SetActive(false);
        //
        //     if (activCoroutine != null)
        //         StopCoroutine(activCoroutine);
        //
        //     if (!InforamtionPanel.activeSelf)
        //         return;
        //
        //     LastCheckedTower = towerController;
        //
        //     switch (towerType)
        //     {
        //         case TypeOfBuildng.Soldier:
        //             ShowSoldierInfo((Soldier)data, towerController.Level, (SoldierController)towerController);
        //             break;
        //         case TypeOfBuildng.Farm:
        //             ShowFarmInfo();
        //             break;
        //         case TypeOfBuildng.Booster:
        //             ShowBoosterInfo();
        //             break;
        //         case TypeOfBuildng.Spawner:
        //             ShowSpawnerInfo();
        //             break;
        //     }
        //     
        //     Debug.Log(nameof(OnShowTowerInformation));
        // }

        

        // void ShowSoldierInfo(Soldier data, SoldierController controller)
        // {
        //     int upgradeLevel = controller.GetLevel();
        //
        //     TurnOffPropertiesPanelsUI();
        //
        //     bool isMaxLevel = upgradeLevel >= 4;
        //     int nextUpgradeLevel = !isMaxLevel ? upgradeLevel + 1 : upgradeLevel;
        //     
        //
        //     //MaxedOut UI layer when 5 level
        //     MaxedOutUI.enabled = isMaxLevel;
        //
        //     TowerNameText.text = soldierSO.TowerName;
        //     TowerImage.sprite = soldierSO.GetUpgradeIcon(upgradeLevel);
        //     activCoroutine = StartCoroutine(UpdateTotalDamage(soldierController));
        //
        //     long totalTowerValue = soldierController.GetTowerSellValue(soldierSO.Type);
        //     SellPriceText.text = $"<b>Sell: " + $"<color={cashColorHEX}>{totalTowerValue}</color>";
        //
        //     OnUpdateMode(GetIndexByMode(soldierController.TargetMode));
        //
        //
        //     int damage = soldierSO.GetWeapon(upgradeLevel).Damage;
        //     int newDamage = soldierSO.GetWeapon(nextUpgradeLevel).Damage;
        //
        //     valueIsChanged = !isMaxLevel && newDamage != damage;
        //     TMP_Text damageValueText = propertyUI.propertyValueObject.GetComponent<TMP_Text>();
        //
        //     damageValueText.text = "Damage: " + (!valueIsChanged ? $"<color={normalColorHEX}>{damage}</color>" :
        //         $"<color={normalColorHEX}>{damage}</color> <color={nextValueColorHEX}><sprite=0, color={nextValueColorHEX}> {damage}</color>");
        //
        //
        //
        //
        //     double firerate = 60 / soldierSO.GetWeapon(upgradeLevel).Firerate;
        //     double newFirerate = 60 / soldierSO.GetWeapon(nextUpgradeLevel).Firerate;
        //
        //     valueIsChanged = !isMaxLevel && Math.Abs(firerate - newFirerate) > 0.01f;
        //     TMP_Text firerateValueText = propertyUI.propertyValueObject.GetComponent<TMP_Text>();
        //
        //     firerateValueText.text = "Firerate: " + (!valueIsChanged ? $"<color={normalColorHEX}>{FormattedString(firerate)}</color>" :
        //         $"<color={normalColorHEX}>{FormattedString(firerate)}</color> <color={nextValueColorHEX}><sprite=0, color={nextValueColorHEX}> {FormattedString(newFirerate)}</color>");
        //
        //
        //
        //
        //     double viewRange = soldierSO.GetViewRange(upgradeLevel);
        //     double newViewRange = soldierSO.GetViewRange(nextUpgradeLevel);
        //
        //     valueIsChanged = !isMaxLevel && Math.Abs(viewRange - newViewRange) > 0.01f;
        //     TMP_Text viewRangeValueText = propertyUI.propertyValueObject.GetComponent<TMP_Text>();
        //
        //     viewRangeValueText.text = "Range: " + (!valueIsChanged ? $"<color={normalColorHEX}>{FormattedString(viewRange)}</color>" :
        //         $"<color={normalColorHEX}>{FormattedString(viewRange)}</color> <color={nextValueColorHEX}><sprite=0, color={nextValueColorHEX}> {FormattedString(newViewRange)}</color>");
        //
        //
        //
        //     bool hasBinoculars = soldierSO.GetHasBinoculars(upgradeLevel);
        //     bool newHasBinoculars = soldierSO.GetHasBinoculars(nextUpgradeLevel);
        //
        //     valueIsChanged = !isMaxLevel && hasBinoculars != newHasBinoculars;
        //     CustomToggle checkbox = propertyUI.propertyValueObject.GetComponent<CustomToggle>();
        //
        //     TMP_Text iconText = checkbox.transform.GetChild(checkbox.transform.childCount - 1).GetComponent<TMP_Text>();
        //     CustomToggle nextCheckboxValue = iconText.transform.GetChild(iconText.transform.childCount - 1).GetComponent<CustomToggle>();
        //
        //     checkbox.IsOn = hasBinoculars;
        //     nextCheckboxValue.IsOn = newHasBinoculars;
        //
        //     iconText.enabled = valueIsChanged;
        //     iconText.text = $"<sprite=0, color={nextValueColorHEX}>";
        //     nextCheckboxValue.gameObject.SetActive(valueIsChanged);
        //
        //     
        //     
        //
        //     UpgradeCostText.text = isMaxLevel ? $"<color={MaxedOutColorHEX}>" + "<b>Maxed Out" + "</color>" : "<b>Upgrade: " + $"<b><color={cashColorHEX}>{soldierSO.GetUpgradePrice(nextUpgradeLevel)}</color>";
        //     UpgradeCostText.alignment = isMaxLevel ? TextAlignmentOptions.Center : TextAlignmentOptions.Right;
        //     if (isMaxLevel)
        //         UpgradeCostText.margin = Vector4.zero;
        //     else
        //         UpgradeCostText.margin = new Vector4(10, 0, 77, 0);
        //     CashSprite.enabled = !isMaxLevel;
        //     UpgradeLevelImage.fillAmount = (float)(upgradeLevel + 1) / 5f;
        //
        // }

 
#region Show Towers Informations

        
        void ShowSoldierInfo(Soldier data, SoldierController controller)
        {
            BaseInformations baseInformations = new BaseInformations(data, controller);
            ShowBaseInfo(baseInformations);
            
            OnUpdateMode(controller.TargetMode);

            
            
            // Damage Property
            int damageValue = data.GetWeapon(baseInformations.Level).Damage;
            int damageNextValue = baseInformations.isMaxLevel ? damageValue : data.GetWeapon(baseInformations.Level + 1).Damage;

            SpriteTextData damageSpriteData = new SpriteTextData() { SpriteName = GlobalSettingsManager.GetGlobalSettings().DamageIconName, WithSpaces = true };
            ShowProperty(TowerInformationsUI.Property_01_Text, new PropertyData<int>("Damage", damageSpriteData, damageValue, damageNextValue) );
            
            
            
            // Firerate Property
            float firerateValue = 60f / data.GetWeapon(baseInformations.Level).Firerate;
            float firerateNextValue = baseInformations.isMaxLevel ? firerateValue : 60f / data.GetWeapon(baseInformations.Level + 1).Firerate;

            SpriteTextData firerateSpriteData = new SpriteTextData() { SpriteName = GlobalSettingsManager.GetGlobalSettings().FirerateIconName, WithSpaces = true };
            ShowProperty(TowerInformationsUI.Property_02_Text, new PropertyData<float>("Firerate", firerateSpriteData, firerateValue, firerateNextValue) );
            
            
            
            // Range Property
            float rangeValue = data.GetViewRange(baseInformations.Level);
            float rangeNextValue = baseInformations.isMaxLevel ? rangeValue : data.GetViewRange(baseInformations.Level + 1);

            SpriteTextData rangeSpriteData = new SpriteTextData() { SpriteName = GlobalSettingsManager.GetGlobalSettings().RadarIconName, WithSpaces = true };
            ShowProperty(TowerInformationsUI.Property_03_Text, new PropertyData<float>("Range", rangeSpriteData, rangeValue, rangeNextValue) );
            
            
            
            // Detection Property
            bool detectionValue = data.GetHasBinoculars(baseInformations.Level);
            bool detectionNextValue = baseInformations.isMaxLevel ? detectionValue : data.GetHasBinoculars(baseInformations.Level + 1);

            SpriteTextData detectionSpriteData = new SpriteTextData() { SpriteName = GlobalSettingsManager.GetGlobalSettings().HiddenIconName, WithSpaces = true };
            ShowProperty(TowerInformationsUI.Property_04_Text, new PropertyData<bool>("Detection", detectionSpriteData, detectionValue, detectionNextValue) );
            
        }

        
        void ShowFarmInfo(Farm data, FarmController controller)
        {
            BaseInformations baseInformations = new BaseInformations(data, controller);
            ShowBaseInfo(baseInformations);

            
            // Range Property
            double rangeValue = data.GetWaveIncome(baseInformations.Level);
            double rangeNextValue = baseInformations.isMaxLevel ? rangeValue : data.GetWaveIncome(baseInformations.Level + 1);

            SpriteTextData rangeSpriteData = new SpriteTextData() { SpriteName = GlobalSettingsManager.GetGlobalSettings().CashIconName, WithSpaces = true };
            ShowProperty(TowerInformationsUI.Property_01_Text, new PropertyData<double>("Income", rangeSpriteData, rangeValue, rangeNextValue) );
            
            
            ShowProperty(TowerInformationsUI.Property_02_Text);
            
            ShowProperty(TowerInformationsUI.Property_03_Text);
            
            ShowProperty(TowerInformationsUI.Property_04_Text);

        }

        
        void ShowBoosterInfo(Booster data, BoosterController controller)
        {
            BaseInformations baseInformations = new BaseInformations(data, controller);
            ShowBaseInfo(baseInformations);
            
            
            ShowProperty(TowerInformationsUI.Property_01_Text);
            
            ShowProperty(TowerInformationsUI.Property_02_Text);
            
            ShowProperty(TowerInformationsUI.Property_03_Text);
            
            ShowProperty(TowerInformationsUI.Property_04_Text);

        }
        
        
        // void ShowSpawnerInfo(Spawner data, SpawnerController controller)
        // {
        //     BaseInformations baseInformations = new BaseInformations(data, controller);
        //     ShowBaseInfo(baseInformations);
        //     
        //     
        //     ShowProperty(TowerInformationsUI.Property_01_Text);
        //     
        //     ShowProperty(TowerInformationsUI.Property_02_Text);
        //     
        //     ShowProperty(TowerInformationsUI.Property_03_Text);
        //     
        //     ShowProperty(TowerInformationsUI.Property_04_Text);
        //
        // }
        
  
#endregion


        void ShowBaseInfo(BaseInformations baseInformations)
        { 
            TowerInformationsUI.TowerNameText.text = baseInformations.Name;
            TowerInformationsUI.TowerImage.sprite = baseInformations.Sprite;

            string upgradeText = baseInformations.isMaxLevel ? 
                StringFormatter.GetColoredText("Maxed Out", GlobalSettingsManager.GetGlobalSettings.Invoke().MaxedOutColor) :
                $"Upgrade: " + StringFormatter.GetColoredText(baseInformations.UpgradePrice.ToString(), GlobalSettingsManager.GetGlobalSettings.Invoke().CashColor) + StringFormatter.GetSpriteText(new SpriteTextData(){SpriteName = GlobalSettingsManager.GetGlobalSettings().CashIconName, WithSpaces = true});
            TowerInformationsUI.UpgradePriceText.text = upgradeText;
            
            TowerInformationsUI.SellPriceText.text = $"Sell: " + StringFormatter.GetColoredText(baseInformations.SellPrice.ToString(), GlobalSettingsManager.GetGlobalSettings.Invoke().CashColor) + StringFormatter.GetSpriteText(new SpriteTextData(){SpriteName = GlobalSettingsManager.GetGlobalSettings().CashIconName, WithSpaces = true});

            TowerInformationsUI.MaxedOutImage.enabled = baseInformations.isMaxLevel;

            TowerInformationsUI.UpgradeProgressBar.fillAmount = (float)(baseInformations.Level + 1) / (float)GlobalSettingsManager.GetGlobalSettings().MaxUpgradeLevel;

        }

        
        void ShowProperty<T>(TMP_Text propertyText, PropertyData<T> propertyData)
        {
            Dictionary<bool, string> dictionary = new Dictionary<bool, string>() { {true, GlobalSettingsManager.GetGlobalSettings().CheckedIconName}, {false, GlobalSettingsManager.GetGlobalSettings().UncheckedIconName}};

            bool valuesHasSprites = typeof(T) == typeof(bool);
            bool valueChanged = !propertyData.Value.Equals(propertyData.NextValue);

            string valueText = valuesHasSprites ? 
                StringFormatter.GetSpriteText(new SpriteTextData() { SpriteName = dictionary[bool.Parse($"{propertyData.Value}")] }) : StringFormatter.GetFormattedDouble($"{propertyData.Value}");
            string nextValueText = valuesHasSprites ? 
                StringFormatter.GetSpriteText(new SpriteTextData() { SpriteName = dictionary[bool.Parse($"{propertyData.NextValue}")] }) : StringFormatter.GetColoredText(StringFormatter.GetFormattedDouble($"{propertyData.NextValue}"), GlobalSettingsManager.GetGlobalSettings.Invoke().NextValueColor);
            
            string text = $"<size=30>" + StringFormatter.GetSpriteText(propertyData.SpriteData) + $"   </size>" + $"{propertyData.PropertyName}: " + valueText;
            if (valueChanged)
                text += StringFormatter.GetSpriteText(new SpriteTextData() { SpriteName = GlobalSettingsManager.GetGlobalSettings().ArrowRightIconName, WithColor = true, Color = GlobalSettingsManager.GetGlobalSettings.Invoke().NextValueColor, WithSpaces = true, SpacesCount = 2}) + nextValueText;
            
            propertyText.text = text;
            
        }

        
        void ShowProperty(TMP_Text propertyText)
        {
            propertyText.text = "";

        }



        
        Coroutine ActiveCoroutine;
        
        IEnumerator UpdateTotalValue(TowerController controler)
        {
            string Tittle = "";
            double Value = 0;
            string AdditionalText = "";
            
            while (true)
            {
                if (controler.TryGetController<FarmController>(out var farmController))
                {
                    Tittle = "Total Income";
                    Value = farmController.TowerIncomeComponent.TotalWaveIncome;
                    AdditionalText = StringFormatter.GetSpriteText(new SpriteTextData() {SpriteName = GlobalSettingsManager.GetGlobalSettings().CashIconName});
                }
                else if (controler.TryGetController<SoldierController>(out var soldierController))
                {
                    Tittle = "Total Damage";
                    Value = soldierController.TowerWeaponComponent.TotalGivenDamage;
                }

                
                if (string.IsNullOrWhiteSpace(Tittle))
                {
                    TowerInformationsUI.GivenDamageText.gameObject.SetActive(false);
                }
                else
                {
                    TowerInformationsUI.GivenDamageText.gameObject.SetActive(true);
                    TowerInformationsUI.GivenDamageText.text = $"{Tittle}: {Value} {AdditionalText}";
                }
                
                yield return new WaitForEndOfFrame();
            }
        }
        
        // IEnumerator UpdateGivenDamage(SpawnerController controller)
        // {
        //     while (true)
        //     {
        //         TowerInformationsUI.GivenDamageText.text = $"Total Damage: {controller.TowerWeaponComponent.TotalGivenDamage}";
        //
        //         yield return new WaitForEndOfFrame();
        //     }
        // }
        
        
        
        
        
        

        public void UpgradeTower()
        {
            if(!IsSomeTowerClicked)
                return;
            
            bool isMaxLevel = CurrentClickedTower.Controller.GetLevel() >= 4;

            if (isMaxLevel)
            {
                WarningSystem.ShowWarning(WarningSystem.WarningType.MaxedOut);
                return;
            }

            if (!CurrentClickedTower.Controller.UpgradeLevel())
            {
                WarningSystem.ShowWarning(WarningSystem.WarningType.NotEnoughtMoney);
                return;
            }
            
            OnSetActiveInformationsPanel(true, CurrentClickedTower);
        }

        
        
        public void SellTower()
        {
            if(!IsSomeTowerClicked)
                return;
            
            CurrentClickedTower.Controller.RemoveTower();

            OnSetActiveInformationsPanel(false, CurrentClickedTower);
            
        }

        
        
        
        


#region Set Targetting Mode

        public void ChangeTargetModePanelActive()
        {
            TowerInformationsUI.TargetModePanel.SetActive(!TowerInformationsUI.TargetModePanel.activeSelf);
        }

        public void SetTargetMode(int index)
        {
            TargetMode mode = (TargetMode)index;
            
            if(!IsSomeTowerClicked)
                return;

            if (CurrentClickedTower.Controller.TryGetController<SoldierController>(out var soldierController))
                soldierController.SetTargetMode(mode);
            else
                return;
            
            
            OnUpdateMode(index);
            ChangeTargetModePanelActive();
        }

        
        void OnUpdateMode(TargetMode Mode) => OnUpdateMode((int)Mode);
        
        void OnUpdateMode(int Index)
        {
            UpdateTargettingButtons(Index);

            UpdateTargettingText(Index);
        }


        void UpdateTargettingButtons(TargetMode Mode) => UpdateTargettingButtons((int)Mode);
        
        void UpdateTargettingButtons(int Index)
        {
            foreach (var button in TowerInformationsUI.TargetModeButtons)
                button.image.color = GlobalSettingsManager.GetGlobalSettings.Invoke().TargettingButtonBaseColor;
   
            TowerInformationsUI.TargetModeButtons[Index].image.color = GlobalSettingsManager.GetGlobalSettings.Invoke().TargettingButtonSelectedColor;
        }

        
        void UpdateTargettingText(int Index) => UpdateTargettingText((TargetMode)Index);
        
        void UpdateTargettingText(TargetMode Mode)
        {
            TowerInformationsUI.TargetModeText.text = $"Targets" + "\n" +
                                                      $"[{Mode.ToString()}]";
        }
        
  #endregion

        
        
        
        
        
        
        // string normalColorHEX = $"#{ColorUtility.ToHtmlStringRGB(normalColor)}";
        // string nextValueColorHEX = $"#{ColorUtility.ToHtmlStringRGB(nextValueColor)}";
        // string MaxedOutColorHEX = $"#{ColorUtility.ToHtmlStringRGB(MaxedOutColor)}";
        // string cashColorHEX = $"#{ColorUtility.ToHtmlStringRGB(cashColor)}";

        

    }
    
    
}
