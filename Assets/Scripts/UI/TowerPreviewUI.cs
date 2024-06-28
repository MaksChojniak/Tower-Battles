using DefaultNamespace;
using MMK;
using MMK.ScriptableObjects;
using TMPro;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.UI;

public class TowerPreviewUI : MonoBehaviour
{
    [SerializeField] TowerInventory inventory;

    [Space(18)]
    [SerializeField] TMP_Text towerNameText;
    //[SerializeField] Image towerImage;

    [SerializeField] TMP_Text startingPriceText;
    [SerializeField] TMP_Text damageTypeText;
    [SerializeField] Image damageImage;
    [SerializeField] Image firerateImage;
    [SerializeField] Image rangeImage;
    [SerializeField] TMP_Text placementText;

    [SerializeField] GameObject lockedPanel;
    [SerializeField] TMP_Text lockedPrice;
    [SerializeField] GameObject ownedPanel;
    [SerializeField] GameObject unlockPanel;
    [SerializeField] TMP_Text unlockPrice;

    [SerializeField] GameObject skinChangeButton;

    [SerializeField] Color[] colors;

    public int lastSelectedTowerIndex { get; private set; }

    private void Awake()
    {
        TowerInventory.OnSelectTile += UpdateTowerInformations;
    }

    private void OnDestroy()
    {
        TowerInventory.OnSelectTile -= UpdateTowerInformations;
    }

    void UpdateTowerInformations(int index, GameObject tile, bool isUnlocked)
    {
        Tower tower = inventory.TowerData.GetAllTowerInventoryData()[index].towerSO;

        skinChangeButton.SetActive(tower.BaseProperties.IsUnlocked);

        towerNameText.text = tower.TowerName;
        // towerImage.sprite = tower.TowerSprite;

        startingPriceText.text = $"{tower.GetPrice()}";
        damageTypeText.text = "Single/Splash";

        float[] fillAmounts = new[] { 0.2f, 0.4f, 0.6f, 0.8f, 1f };
        damageImage.fillAmount = fillAmounts[Random.Range(0, fillAmounts.Length)];
        UpdateImageColor(damageImage);
        firerateImage.fillAmount = fillAmounts[Random.Range(0, fillAmounts.Length)];
        UpdateImageColor(firerateImage);
        rangeImage.fillAmount = fillAmounts[Random.Range(0, fillAmounts.Length)];
        UpdateImageColor(rangeImage);

        placementText.text = "Ground/Cliff";

        lockedPanel.SetActive(!isUnlocked && !tower.IsRequiredWinsCount(PlayerTowerInventory.Instance.GetWinsCount()));
        lockedPrice.text = $"Locked:  {StringFormatter.PriceFormat(tower.GetRequiredWinsCount())}";
        
        unlockPanel.SetActive(!isUnlocked && !lockedPanel.activeSelf);
        
        ownedPanel.SetActive(isUnlocked);
        unlockPrice.text = $"{tower.GetUnlockedPrice()}";

        lastSelectedTowerIndex = index;
    }

    public void BuyTower()
    {
        Tower towerData = inventory.TowerData.GetAllTowerInventoryData()[lastSelectedTowerIndex].towerSO;
        PlayerTowerInventory playerTowerInventory = PlayerTowerInventory.Instance;

        if (!towerData.IsRequiredWinsCount(playerTowerInventory.GetWinsCount()))
        {
            WarningSystem.ShowWarning(WarningSystem.WarningType.NotEnoughtWins);
            return;
        }
        
        if (towerData.GetUnlockedPrice() > PlayerTowerInventory.Instance.GetBalance())
        {
            WarningSystem.ShowWarning(WarningSystem.WarningType.NotEnoughtMoney);
            return;
        }

        PlayerTowerInventory.ChangeBalance(-towerData.GetUnlockedPrice());
        towerData.UnlockTower();

        inventory.UpdateTiles();

        var allTowersInventoryData = inventory.TowerData.GetAllTowerInventoryData();
        for (int i = 0; i < allTowersInventoryData.Length; i++)
        {
            if (allTowersInventoryData[i].towerSO == towerData)
            {
                lastSelectedTowerIndex = i;
                break;
            }
        }
        
        inventory.SelectTower(lastSelectedTowerIndex);
    }

    void UpdateImageColor(Image image)
    {
        float fillAmount = image.fillAmount;
        int colorIndex = 0;

        if (fillAmount <= 0.2f)
            colorIndex = 0;
        else if (fillAmount <= 0.4f)
            colorIndex = 1;
        else if (fillAmount <= 0.6f)
            colorIndex = 2;
        else if (fillAmount <= 0.8f)
            colorIndex = 3;
        else
            colorIndex = 4;

        image.color = colors[colorIndex];
    }
}
 