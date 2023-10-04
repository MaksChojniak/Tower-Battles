// using System;
// using System.Collections;
// using System.Collections.Generic;
// using TMPro;
// using UnityEngine;
// using UnityEngine.UI;
//
// public class ShowBuildingInformations : MonoBehaviour
// {
//     public static Action<GameObject, bool> checkInfo;
//
//     public static Action showNotEnoughMoneyMessage;
//
//     [SerializeField] GameObject currentBuilding;
//
//     [SerializeField] GameObject shwoBuildingInfo;
//
//     [SerializeField] TMP_Text nameOfBuildingText;
//     [SerializeField] TMP_Text currentUpgradeLevelText;
//     [SerializeField] Slider currentUpgradeLevelSlider;
//     [SerializeField] TMP_Text upgradePriceText;
//     [SerializeField] TMP_Text upgradeTitleText;
//     [SerializeField] TMP_Text upgradeDescriptionText;
//     [SerializeField] TMP_Text sellPriceText;
//     [SerializeField] TMP_Text totalDamageOrIncomeText;
//
//     [SerializeField] Button sellBuildingButton;
//     [SerializeField] Button upgradeBuildingButton;
//
//     [SerializeField] TMP_Text notEnoughMoneyText;
//
//     BuildingController builingController;
//     void Awake()
//     {
//         checkInfo += ShowInfo;
//         showNotEnoughMoneyMessage += ShowNotEnoughMoneyMessage;
//     }
//
//     void Start()
//     {
//         shwoBuildingInfo.SetActive(false);
//         
//         sellBuildingButton.onClick.AddListener(() =>
//         {
//             if (currentBuilding == null) return;
//
//             BuildingController controller = currentBuilding.GetComponent<BuildingController>();
//             
//             GamePlayerInformation.changeBalance(controller.component.GetSellPrice(controller.currentUpgradeLevel));
//             shwoBuildingInfo.SetActive(false);
//             Destroy(currentBuilding);
//         });
//         
//         upgradeBuildingButton.onClick.AddListener(() =>
//         {
//             if (currentBuilding == null) return;
//
//             BuildingController controller = currentBuilding.GetComponent<BuildingController>();
//
//             if (controller.component.GetUpgradePrice(controller.currentUpgradeLevel, controller.upgradeDiscountMultiplier) > GamePlayerInformation.instance.balance)
//             {
//                 showNotEnoughMoneyMessage();
//                 return;
//             }
//
//             GamePlayerInformation.changeBalance(-controller.component.GetUpgradePrice(controller.currentUpgradeLevel, controller.upgradeDiscountMultiplier));
//             currentBuilding.GetComponent<BuildingController>().currentUpgradeLevel++;
//
//             checkInfo(currentBuilding, true);
//         });
//
//     }
//
//     private void Update()
//     {
//         if (builingController == null) return;
//
//         if (builingController.component.type == TypeOfBuildng.farm)
//         {
//             totalDamageOrIncomeText.gameObject.SetActive(true);
//             totalDamageOrIncomeText.text = $"{builingController.totalIncome}";
//         }
//         else if (builingController.component.type == TypeOfBuildng.farm)
//         {
//             totalDamageOrIncomeText.gameObject.SetActive(false);
//         }
//         else
//         {
//             totalDamageOrIncomeText.gameObject.SetActive(true);
//             totalDamageOrIncomeText.text = $"{builingController.totalDamage}";
//         }
//     }
//
//
//     void OnDestroy()
//     {
//         checkInfo -= ShowInfo;
//         showNotEnoughMoneyMessage -= ShowNotEnoughMoneyMessage;
//     }
//
//     void ShowInfo(GameObject currentBuilding, bool state)
//     {
//         if (this.currentBuilding != null && this.currentBuilding != currentBuilding && state == false)
//             return;
//
//         if (currentBuilding.GetComponent<BuildingController>().currentUpgradeLevel >= 4)
//         {
//             upgradeBuildingButton.gameObject.SetActive(false);
//         }
//         else
//         {
//             upgradeBuildingButton.gameObject.SetActive(true);
//         }
//
//         shwoBuildingInfo.SetActive(state);
//
//         this.currentBuilding = state == true ? currentBuilding : null;
//
//         if (this.currentBuilding != null)
//             SetInformationToUI();
//     }
//
//     void SetInformationToUI()
//     {
//         builingController = currentBuilding.GetComponent<BuildingController>();
//         Building buildingInfo = builingController.component;
//         
//         nameOfBuildingText.text = $"{buildingInfo.buildingName}";
//         currentUpgradeLevelText.text = $"{(builingController.currentUpgradeLevel + 1)}";
//         currentUpgradeLevelSlider.value = builingController.currentUpgradeLevel;
//         upgradePriceText.text = $"{buildingInfo.GetUpgradePrice(builingController.currentUpgradeLevel, builingController.upgradeDiscountMultiplier)}";
//         upgradeTitleText.text = buildingInfo.GetUpgradeTitle(builingController.currentUpgradeLevel);
//         upgradeDescriptionText.text = buildingInfo.GetUpgradeDescription(builingController.currentUpgradeLevel);
//        
//         sellPriceText.text = $"{buildingInfo.GetSellPrice(builingController.currentUpgradeLevel)}";
//     }
//
//     //Writes Message, when there is not enough money
//
//     void ShowNotEnoughMoneyMessage()
//     {
//         StopAllCoroutines();
//         StartCoroutine(NotEnoughMoneyMessage());
//     }
//
//     IEnumerator NotEnoughMoneyMessage()
//     {
//         notEnoughMoneyText.gameObject.SetActive(true);
//         GameManager.instance.moneyText.color = Color.red;
//
//         yield return new WaitForSeconds(1);
//
//         notEnoughMoneyText.gameObject.SetActive(false);
//         GameManager.instance.moneyText.color = Color.white;
//     }
// }
