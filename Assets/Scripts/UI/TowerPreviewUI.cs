using System;
using DefaultNamespace;
using MMK;
using MMK.ScriptableObjects;
using MMK.Towers;
using Player;
using TMPro;
using UI.Animations;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.UI;
using Random = UnityEngine.Random;

public class TowerPreviewUI : MonoBehaviour
{
    [SerializeField] TowerInventory inventory;

    [Space(18)]
    [SerializeField] TMP_Text towerNameText;
    [SerializeField] TMP_Text skinNameText;
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

    [SerializeField] UIAnimation OpenTowerPreview;
    [SerializeField] UIAnimation CloseTowerPreview;

    [SerializeField] GameObject skinChangeButton;

    [SerializeField] Color[] colors;

    public int lastSelectedTowerIndex { get; private set; }
    [SerializeField] int _lastSelectedTowerIndex;

    private void Awake()
    {
        TowerInventory.OnSelectTile += UpdateTowerInformations;

        lastSelectedTowerIndex = -1;
    }

    private void OnDestroy()
    {
        TowerInventory.OnSelectTile -= UpdateTowerInformations;
    }

    void Update()
    {
        _lastSelectedTowerIndex = lastSelectedTowerIndex;
    }

    void UpdateTowerInformations(int index, GameObject tile, bool isUnlocked, Tower tower)
    {
        if (index < 0 && lastSelectedTowerIndex >= 0)
        {
            CloseTowerPreview.PlayAnimation();
            lastSelectedTowerIndex = -1;
            return;
        }
        else if (index >= 0 && lastSelectedTowerIndex < 0)
        {
            OpenTowerPreview.PlayAnimation();
        }
        else if (index < 0)
        {
            lastSelectedTowerIndex = -1;
            return;
        }
        
        // Tower tower = inventory.TowerData.GetAllTowerInventoryData()[index].towerSO;

        skinChangeButton.SetActive(tower.BaseProperties.IsUnlocked);

        towerNameText.text = tower.TowerName;
        // skinNameText.text = tower.CurrentSkin.SkinName; TODO
        
        // towerImage.sprite = tower.TowerSprite;

        startingPriceText.text = $"{tower.GetPrice()} {StringFormatter.GetSpriteText(new SpriteTextData() { SpriteName = GlobalSettingsManager.GetGlobalSettings().CashIconName})}";
        if(tower.TryGetData<Soldier>(out var soldier))
        {
            damageTypeText.text = soldier.GetWeapon(0).DamageType.ToString();
        }
        else
        {
            damageTypeText.text = "None";
        }

        float[] fillAmounts = new[] { 0.2f, 0.4f, 0.6f, 0.8f, 1f };
        damageImage.fillAmount = fillAmounts[Random.Range(0, fillAmounts.Length)];
        UpdateImageColor(damageImage);
        firerateImage.fillAmount = fillAmounts[Random.Range(0, fillAmounts.Length)];
        UpdateImageColor(firerateImage);
        rangeImage.fillAmount = fillAmounts[Random.Range(0, fillAmounts.Length)];
        UpdateImageColor(rangeImage);

        placementText.text = $"{tower.PlacementType}";//"Ground/Cliff";

        // lockedPanel.SetActive(!isUnlocked && !tower.IsRequiredWinsCount(PlayerTowerInventory.Instance.GetWinsCount()));
        lockedPanel.SetActive(!isUnlocked && !tower.IsRequiredLevel(PlayerController.GetLocalPlayerData().Level));
        lockedPrice.text = $"Locked:  {StringFormatter.PriceFormat(tower.GetRequiredLevel())}";
        
        unlockPanel.SetActive(!isUnlocked && !lockedPanel.activeSelf);
        
        ownedPanel.SetActive(isUnlocked);
        unlockPrice.text = $"{tower.GetUnlockedPrice()}";

        lastSelectedTowerIndex = index;
    }

    public bool BuyTower()
    {
        Tower towerData = inventory.TowerData.GetAllTowerInventoryData()[lastSelectedTowerIndex].towerSO;
        // PlayerTowerInventory playerTowerInventory = PlayerTowerInventory.Instance;

        // if (!towerData.IsRequiredWinsCount(playerTowerInventory.GetWinsCount()))
        if (!towerData.IsRequiredLevel(PlayerController.GetLocalPlayerData().Level))
        {
            WarningSystem.ShowWarning(WarningSystem.WarningType.NotEnoughtWins);
            return false;
        }
        
        // if (towerData.GetUnlockedPrice() > PlayerTowerInventory.Instance.GetBalance())
        if (towerData.GetUnlockedPrice() > PlayerController.GetLocalPlayerData().WalletData.Coins)
        {
            WarningSystem.ShowWarning(WarningSystem.WarningType.NotEnoughtMoney);
            return false;
        }

        // PlayerTowerInventory.ChangeBalance(-towerData.GetUnlockedPrice());
        PlayerData.ChangeCoinsBalance(-(long)towerData.GetUnlockedPrice());
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

        return true;
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
 