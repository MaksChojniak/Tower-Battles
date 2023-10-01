using System.Collections;
using System.Collections.Generic;
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


    private void Awake()
    {
        TowerInventory.OnSelectTile += UpdateTowerInformations;
    }

    private void OnDestroy()
    {
        TowerInventory.OnSelectTile -= UpdateTowerInformations;
    }

    void UpdateTowerInformations(GameObject tile, int index)
    {
        Building building = inventory.buildingsData[index].buildingSO;

        towerNameText.text = building.buildingName;
        towerImage.sprite = building.buildingImage;

        startingPriceText.text = $"{building.price}$";
        damageTypeText.text = "Single/Splash";

        damageImage.fillAmount = 0.2f;
        UpdateImageColor(damageImage);
        firerateImage.fillAmount = 0.4f;
        UpdateImageColor(firerateImage);
        rangeImage.fillAmount = 1f;
        UpdateImageColor(rangeImage);

        placementText.text = "Ground/Cliff";

        ownedPanel.SetActive(building.unlocked);
        unlockPanel.SetActive(!building.unlocked);
        unlockPrice.text = $"{building.unlockPrice} Credits";
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
 