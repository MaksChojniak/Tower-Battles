using System;
using System.Threading.Tasks;
using DefaultNamespace;
using MMK;
using MMK.ScriptableObjects;
using MMK.Towers;
using Player;
using TMPro;
using UI;
using UI.Animations;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.UI;
using Random = UnityEngine.Random;

public class TowerPreviewUI : MonoBehaviour
{
    [SerializeField] TowerInventory inventory;
    [SerializeField] RotateableTower rotateableTower;

    
    [Space(8)]
    [Header("Prefabs")]
    [SerializeField] GameObject ConfirmationTowerPrefab;
    [SerializeField] GameObject SkinChangerWindow;
    
    [Space(18)]
    [Header("Properties UI")]
    [SerializeField] TMP_Text towerNameText;
    [SerializeField] TMP_Text skinNameText;
    //[SerializeField] Image towerImage;

    [Space(8)]
    [SerializeField] TMP_Text startingPriceText;
    [SerializeField] TMP_Text damageTypeText;
    [SerializeField] Image damageImage;
    [SerializeField] Image firerateImage;
    [SerializeField] Image rangeImage;
    [SerializeField] TMP_Text placementText;

    [Space(8)]
    [SerializeField] GameObject lockedPanel;
    [SerializeField] TMP_Text lockedPrice;
    [SerializeField] GameObject ownedPanel;
    [SerializeField] GameObject unlockPanel;
    [SerializeField] TMP_Text unlockPrice;

    [Space(16)]
    [Header("Animations UI")]
    [SerializeField] UIAnimation OpenTowerPreview;
    [SerializeField] UIAnimation CloseTowerPreview;

    [Space(18)]
    [SerializeField] GameObject skinChangeButton;

    [SerializeField] Color[] colors;

    public int lastSelectedTowerIndex { get; private set; }
    Tower lastSelectedTower => lastSelectedTowerIndex < 0 ? null : inventory.TowerData.GetAllTowerInventoryData()[lastSelectedTowerIndex].towerSO;




    void Awake()
    {
        RegisterHandlers();

        lastSelectedTowerIndex = -1;
    }

    void OnDestroy()
    {
        UnregisterHandlers();
        
    }



    
#region Register & Unregister Handlers

    
    void RegisterHandlers()
    {
        TowerInventory.OnSelectTile += UpdateTowerInformations;
        
    }

    void UnregisterHandlers()
    {
        TowerInventory.OnSelectTile -= UpdateTowerInformations;
        
    }
    
    
#endregion
    
    
    

#region Update UI

    
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

    
#endregion

    

#region Buying

    // public bool BuyTower()
    public async void BuyTower()
    {

        // if (!towerData.IsRequiredWinsCount(playerTowerInventory.GetWinsCount()))
        if (!lastSelectedTower.IsRequiredLevel(PlayerController.GetLocalPlayerData().Level))
        {
            WarningSystem.ShowWarning(WarningSystem.WarningType.NotEnoughtWins);
            // return false;
            return;
        }
        
        // if (towerData.GetUnlockedPrice() > PlayerTowerInventory.Instance.GetBalance())
        if (lastSelectedTower.GetUnlockedPrice() > PlayerController.GetLocalPlayerData().WalletData.Coins)
        {
            WarningSystem.ShowWarning(WarningSystem.WarningType.NotEnoughtMoney);
            // return false;
            return;
        }

        
        
        
        bool onCloseConfirmationPanel = false;
        bool pausePayements = false;
        Confirmation confirmation = Instantiate(ConfirmationTowerPrefab).GetComponent<Confirmation>();
        confirmation.ShowTower(
            $"Would You Like To Buy\n{StringFormatter.GetTowerText(lastSelectedTower)} Tower For {StringFormatter.GetCoinsText( (long)lastSelectedTower.BaseProperties.UnlockPrice, true,"66%" )}",
            () =>
            {
                onCloseConfirmationPanel = true;
                confirmation.StartLoadingAnimation();
            },
            () =>
            {
                onCloseConfirmationPanel = true;
                pausePayements = true;
            },
            lastSelectedTower
        );

        while (!onCloseConfirmationPanel)
            await Task.Yield();

        if (pausePayements)
            return;
        
        
        
        
        // PlayerTowerInventory.ChangeBalance(-towerData.GetUnlockedPrice());
        PlayerData.ChangeCoinsBalance(-(long)lastSelectedTower.GetUnlockedPrice());
        lastSelectedTower.UnlockTower();

        

        confirmation.StopLoadingAnimation();
        
        
        
        
        inventory.UpdateTiles();

        var allTowersInventoryData = inventory.TowerData.GetAllTowerInventoryData();
        for (int i = 0; i < allTowersInventoryData.Length; i++)
        {
            if (allTowersInventoryData[i].towerSO == lastSelectedTower)
            {
                lastSelectedTowerIndex = i;
                break;
            }
        }
        
        inventory.SelectTower(lastSelectedTowerIndex);

        
        // return true;
    }
    
#endregion




    public void OpenSkinChangerWindow()
    {
        SkinChanger skinChanger = Instantiate(SkinChangerWindow).GetComponent<SkinChanger>();

        skinChanger.Init(rotateableTower, inventory);
        skinChanger.Open(lastSelectedTower);
    }




}
 