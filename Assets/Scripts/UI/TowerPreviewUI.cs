using System.Collections;
using System.Collections.Generic;
using DefaultNamespace;
using DefaultNamespace.ScriptableObjects;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class TowerPreviewUI : MonoBehaviour
{
    [SerializeField] TowerInventory inventory;

    [Space(18)]
    [SerializeField] TMP_Text towerNameText;
    [SerializeField] Image towerImage;

    [SerializeField] TMP_Text startingPriceText;
    [SerializeField] TMP_Text damageTypeText;
    [SerializeField] Image damageImage;
    [SerializeField] Image firerateImage;
    [SerializeField] Image rangeImage;
    [SerializeField] TMP_Text placementText;

    [SerializeField] GameObject ownedPanel;
    [SerializeField] GameObject unlockPanel;
    [SerializeField] TMP_Text unlockPrice;

    [SerializeField] Color[] colors;

    int lastSelectedTowerIndex;

    private void Awake()
    {
        TowerInventory.OnSelectTile += UpdateTowerInformations;
    }

    private void OnDestroy()
    {
        TowerInventory.OnSelectTile -= UpdateTowerInformations;
    }

    void UpdateTowerInformations(int index, GameObject tile = null)
    {
        Tower tower = inventory.TowerData[index].towerSO;

        towerNameText.text = tower.TowerName;
        // towerImage.sprite = tower.TowerSprite;

        startingPriceText.text = $"{tower.GetPrice()}$";
        damageTypeText.text = "Single/Splash";

        damageImage.fillAmount = 0.2f;
        UpdateImageColor(damageImage);
        firerateImage.fillAmount = 0.4f;
        UpdateImageColor(firerateImage);
        rangeImage.fillAmount = 1f;
        UpdateImageColor(rangeImage);

        placementText.text = "Ground/Cliff";

        ownedPanel.SetActive(tower.IsUnlocked());
        unlockPanel.SetActive(!tower.IsUnlocked());
        unlockPrice.text = $"{tower.GetUnlockedPrice()} Credits";

        lastSelectedTowerIndex = index;
    }

    public void BuyTower()
    {
        Tower towerData = inventory.TowerData[lastSelectedTowerIndex].towerSO;
        if (towerData.GetUnlockedPrice() > PlayerTowerInventory.Instance.GetBalance())
        {
            WarningSystem.ShowWarning(WarningSystem.WarningType.NotEnoughtMoney);
            return;
        }

        PlayerTowerInventory.ChangeBalance(-towerData.GetUnlockedPrice());
        towerData.UnlockTower();
        
        inventory.SelectTower(lastSelectedTowerIndex);
    }

    void UpdateImageColor(Image image)
    {
        float fillAmount = image.fillAmount;
        int colorIndex = 0;

        if (fillAmount < 0.2f)
            colorIndex = 0;
        else if (fillAmount < 0.4f)
            colorIndex = 1;
        else if (fillAmount < 0.6f)
            colorIndex = 2;
        else if (fillAmount < 0.8f)
            colorIndex = 3;
        else
            colorIndex = 4;

        image.color = colors[colorIndex];
    }
}
 