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


    [Header("Prefabs")]
    [SerializeField] GameObject SkinChangerWindow;

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
    [SerializeField] TMP_Text incomeText;
    [SerializeField] TMP_Text placementText;

    [Space(8)]
    [SerializeField] GameObject lockedByLevelPanel;
    TMP_Text lockedByLevelText => lockedByLevelPanel.transform.GetChild(0).GetChild(0).GetComponent<TMP_Text>();
    [SerializeField] GameObject lockedPanel;
    TMP_Text lockedText => lockedPanel.transform.GetChild(0).GetChild(0).GetComponent<TMP_Text>();
    [SerializeField] GameObject unlockedPanel;
    TMP_Text unlockedPrice => unlockedPanel.transform.GetChild(0).GetChild(0).GetComponent<TMP_Text>();

    [Header("Animations UI")]
    [SerializeField] UIAnimation OpenTowerPreview;
    [SerializeField] UIAnimation CloseTowerPreview;

    [SerializeField] GameObject skinChangeButton;
    [SerializeField] Color[] colors;

    [Header("Max Tower Stats")]
    [SerializeField] float maxDamage;
    [SerializeField] float maxFirerate;
    [SerializeField] float maxViewrange;

    [Header("Tower Stats")]
    [SerializeField] GameObject damagePanel;
    [SerializeField] GameObject fireratePanel;
    [SerializeField] GameObject viewrangePanel;
    [SerializeField] GameObject incomePanel;

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
;
            damagePanel.transform.GetChild(0).gameObject.SetActive(true);
            damagePanel.transform.GetChild(1).gameObject.SetActive(true);
            fireratePanel.SetActive(true);
            incomePanel.SetActive(false);
            viewrangePanel.transform.GetChild(0).gameObject.SetActive(true);
            viewrangePanel.transform.GetChild(1).gameObject.SetActive(true);

            damageImage.fillAmount = FillAmountStats(Stats.Damage, tower);
            UpdateImageColor(damageImage);
            firerateImage.fillAmount = FillAmountStats(Stats.Firerate, tower);
            UpdateImageColor(firerateImage);
            rangeImage.fillAmount = FillAmountStats(Stats.Viewrange, tower);
            UpdateImageColor(rangeImage);
        }
        else if (tower.TryGetData<Farm>(out var farm))
        {
            damageTypeText.text = "None";

            damagePanel.transform.GetChild(0).gameObject.SetActive(false);
            damagePanel.transform.GetChild(1).gameObject.SetActive(false);
            fireratePanel.SetActive(false);
            incomePanel.SetActive(true);
            viewrangePanel.transform.GetChild(0).gameObject.SetActive(false);
            viewrangePanel.transform.GetChild(1).gameObject.SetActive(false);

            incomeText.text = $"{farm.GetWaveIncome(0)} {StringFormatter.GetSpriteText(new SpriteTextData() { SpriteName = GlobalSettingsManager.GetGlobalSettings().CashIconName })}";
        }

        //float[] fillAmounts = new[] { 0.2f, 0.4f, 0.6f, 0.8f, 1f };
        //damageImage.fillAmount = fillAmounts[Random.Range(0, fillAmounts.Length)];
        //UpdateImageColor(damageImage);
        //firerateImage.fillAmount = fillAmounts[Random.Range(0, fillAmounts.Length)];
        //UpdateImageColor(firerateImage);
        //rangeImage.fillAmount = fillAmounts[Random.Range(0, fillAmounts.Length)];
        //UpdateImageColor(rangeImage);



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
    enum Stats
    {
        Damage,
        Firerate,
        Viewrange
    }
    float FillAmountStats(Stats statType, Tower tower)
    {
        float damage;
        float firerate;
        float viewrange;
        if (tower.TryGetData<Soldier>(out var soldier))
        {
            damage = soldier.GetWeapon(0).Damage;
            firerate = 60f/soldier.GetWeapon(0).Firerate;
            viewrange = soldier.ViewRanges[0];
        }
        else
        {
            damage = 0;
            firerate = 0;
            viewrange = 0;
        }


        switch (statType) 
        {
            case Stats.Damage:
                return Mathf.Ceil((damage / maxDamage) / 0.2f) * 0.2f;
            case Stats.Firerate:
                return Mathf.Ceil((firerate / maxFirerate) / 0.2f) * 0.2f;
            case Stats.Viewrange:
                return Mathf.Ceil((viewrange / maxViewrange) / 0.2f) * 0.2f;
            default:
                return 0f;
        }
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
            $"Would You Like To Buy\n{StringFormatter.GetTowerText(lastSelectedTower)} Tower For\n {StringFormatter.GetCoinsText( (long)lastSelectedTower.BaseProperties.UnlockPrice, true,"66%" )}",
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
 