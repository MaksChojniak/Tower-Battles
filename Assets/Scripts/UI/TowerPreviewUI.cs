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
using UI.Shop;
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
    [SerializeField] GameObject lockedByLevelPanel;
    TMP_Text lockedByLevelText => lockedByLevelPanel.transform.GetChild(0).GetChild(0).GetComponent<TMP_Text>();
    [SerializeField] GameObject lockedPanel;
    TMP_Text lockedText => lockedPanel.transform.GetChild(0).GetChild(0).GetComponent<TMP_Text>();
    [SerializeField] GameObject unlockedPanel;
    TMP_Text unlockedPrice => unlockedPanel.transform.GetChild(0).GetChild(0).GetComponent<TMP_Text>();

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

        
        
    #region Set Locked State Buttons
        
        bool isRequiredLevel  = tower.IsRequiredLevel(PlayerController.GetLocalPlayerData().Level);
        
        lockedByLevelPanel.SetActive(!isUnlocked && !isRequiredLevel);
        lockedByLevelText.text = $"Required: {StringFormatter.PriceFormat(tower.GetRequiredLevel())} Lvl";
        
        lockedPanel.SetActive(!isUnlocked && isRequiredLevel);
        lockedText.text = $"{StringFormatter.GetCoinsText((long)tower.GetUnlockedPrice(), true, "66%")}";
        
        unlockedPanel.SetActive(isUnlocked);
        // unlockPrice.text = $"{tower.GetUnlockedPrice()}{StringFormatter.GetSpriteText(new SpriteTextData() {SpriteName = GlobalSettingsManager.GetGlobalSettings.Invoke().CoinsIconName, Size = "66%"})}";

    #endregion

        
        
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
        long price = (long)lastSelectedTower.GetUnlockedPrice();
        long balance = (long)PlayerController.GetLocalPlayerData().WalletData.Coins;
        

        if (!lastSelectedTower.IsRequiredLevel(PlayerController.GetLocalPlayerData().Level))
            return;
        
        
        // if (towerData.GetUnlockedPrice() > PlayerTowerInventory.Instance.GetBalance())
        if (price > balance)
        {
            // WarningSystem.ShowWarning(WarningSystem.WarningType.NotEnoughtMoney);
            // NotEnoughtCurrency panel = Instantiate(NotEnoughtCurrencyPrefab).GetComponent<NotEnoughtCurrency>();
            // panel.ShowCoinsPanel?.Invoke((long)lastSelectedTower.GetUnlockedPrice(), 
            //     (long)PlayerController.GetLocalPlayerData().WalletData.Coins, 
            //     () => {
            //         OpenShop.PlayAnimation();
            //         
            //         ShopManager.ScrollToCoinsOfferts();
            //     }
            //     );
            this.GetComponent<NotEnoughtCurrencyInvoker>().ShowWarningPanel(price, balance);
            return;
        }

        
        

        this.gameObject.GetComponent<ConfirmationInvoker>().ShowConfirmation(
            $"Would You Like To Buy\n{StringFormatter.GetTowerText(lastSelectedTower)} Tower For {StringFormatter.GetCoinsText( (long)lastSelectedTower.BaseProperties.UnlockPrice, true,"66%" )}",
            lastSelectedTower,
            OnAccept);


        async Task OnAccept()
        {
            PlayerData.ChangeCoinsBalance(-(long)lastSelectedTower.GetUnlockedPrice());
            lastSelectedTower.UnlockTower();

            await Task.Yield();

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
        }
        
        
    }
    
#endregion




    public void OpenSkinChangerWindow()
    {
        SkinChanger skinChanger = Instantiate(SkinChangerWindow).GetComponent<SkinChanger>();

        skinChanger.Init(rotateableTower, inventory);
        skinChanger.Open(lastSelectedTower);
    }




}
 