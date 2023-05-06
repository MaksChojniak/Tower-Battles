using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class ShowBuildingInformations : MonoBehaviour
{
    public static Action<GameObject, bool> checkInfo;

    [SerializeField] GameObject currentBuilding;

    [SerializeField] GameObject shwoBuildingInfo;

    [SerializeField] TMP_Text nameOfBuildingText;
    [SerializeField] TMP_Text currentUpgradeLevelText;
    [SerializeField] Slider currentUpgradeLevelSlider;
    [SerializeField] TMP_Text upgradePriceText;
    [SerializeField] TMP_Text upgradeTitleText;
    [SerializeField] TMP_Text upgradeDescriptionText;
    [SerializeField] TMP_Text sellPriceText;

    [SerializeField] Button sellBuildingButton;
    [SerializeField] Button upgradeBuildingButton;
    
    void Awake()
    {
        checkInfo += ShowInfo;
    }

    void Start()
    {
        shwoBuildingInfo.SetActive(false);
        
        sellBuildingButton.onClick.AddListener(() =>
        {
            if (currentBuilding == null) return;

            BuildingController controller = currentBuilding.GetComponent<BuildingController>();
            
            GamePlayerInformation.changeBalance(controller.component.GetSellPrice(controller.currentUpgradeLevel));
            shwoBuildingInfo.SetActive(false);
            Destroy(currentBuilding);
        });
        
        upgradeBuildingButton.onClick.AddListener(() =>
        {
            if (currentBuilding == null) return;

            BuildingController controller = currentBuilding.GetComponent<BuildingController>();
            
            if(controller.currentUpgradeLevel + 1 >= 5) return;

            GamePlayerInformation.changeBalance(-controller.component.GetUpgradePrice(controller.currentUpgradeLevel));
            currentBuilding.GetComponent<BuildingController>().currentUpgradeLevel++;
            SetInformationToUI();
        });
    }

    void OnDestroy()
    {
        checkInfo -= ShowInfo;
    }

    void ShowInfo(GameObject currentBuilding, bool state)
    {
        if(this.currentBuilding != null && this.currentBuilding != currentBuilding && state == false)
            return;
        
        shwoBuildingInfo.SetActive(state);
        
        this.currentBuilding = state == true ? currentBuilding : null;

        if(this.currentBuilding != null)
            SetInformationToUI();
    }

    void SetInformationToUI()
    {
        BuildingController controller = currentBuilding.GetComponent<BuildingController>();
        Building buildingInfo = controller.component;
        
        nameOfBuildingText.text = $"{buildingInfo.buildingName}";
        currentUpgradeLevelText.text = $"{(controller.currentUpgradeLevel + 1)}";
        currentUpgradeLevelSlider.value = controller.currentUpgradeLevel;
        upgradePriceText.text = $"{buildingInfo.GetUpgradePrice(controller.currentUpgradeLevel)}";
        upgradeTitleText.text = buildingInfo.GetUpgradeTitle(controller.currentUpgradeLevel);
        upgradeDescriptionText.text = buildingInfo.GetUpgradeDescription(controller.currentUpgradeLevel);
        sellPriceText.text = $"{buildingInfo.GetSellPrice(controller.currentUpgradeLevel)}";
    }
    
}
