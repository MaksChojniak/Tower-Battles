using System;
using System.Collections;
using System.Collections.Generic;
using MMK;
using Player;
using TMPro;
using UnityEngine;

public class PlayerInventoryStatsUI : MonoBehaviour
{
    [SerializeField] TMP_Text moneyText;
    [SerializeField] TMP_Text winsCountText;
    [SerializeField] TMP_Text XPText;



    void OnEnable()
    {
        RegisterHandlers();

        UpdateAllTexts();
    }

    void OnDisable()
    {
        UnregisterHandlers();
        
    }




#region Register & Unregister Handlers

    
    void RegisterHandlers()
    {
        PlayerData.OnChangeCoinsBalance += UpdateCoinsBalanceText;
        
        PlayerData.OnChangeGemsBalance += UpdateGemsBalanceText;
        
        PlayerData.OnChangeExperience += UpdateExperienceText;
        
    }

    
    void UnregisterHandlers()
    {
        PlayerData.OnChangeExperience -= UpdateExperienceText;
        
        PlayerData.OnChangeGemsBalance -= UpdateGemsBalanceText;
        
        PlayerData.OnChangeCoinsBalance -= UpdateCoinsBalanceText;
        
    }
    
    
#endregion
    
    
    
    
    

    void UpdateAllTexts()
    {
        // if (PlayerTowerInventory.Instance == null)
        if (PlayerController.GetLocalPlayerData?.Invoke() == null)
            return;


        UpdateCoinsBalanceText(PlayerController.GetLocalPlayerData().WalletData.Coins);
        
        UpdateGemsBalanceText(PlayerController.GetLocalPlayerData().WalletData.Gems);
        
        UpdateExperienceText(PlayerController.GetLocalPlayerData().ExperiencePoins);

    }

    void UpdateCoinsBalanceText(ulong value)
    {
        moneyText.text = $"{StringFormatter.PriceFormat(value)}{StringFormatter.GetSpriteText(new SpriteTextData() { SpriteName = GlobalSettingsManager.GetGlobalSettings().CoinsIconName })}";
    }

    void UpdateGemsBalanceText(ulong value)
    {
        winsCountText.text = $"{StringFormatter.PriceFormat(value)} {StringFormatter.GetSpriteText(new SpriteTextData() { SpriteName = GlobalSettingsManager.GetGlobalSettings().GemsIconName })}";
    }

    void UpdateExperienceText(ulong value)
    {
        XPText.text = $"{StringFormatter.GetSpriteText(new SpriteTextData() { SpriteName = GlobalSettingsManager.GetGlobalSettings().StarIconName })}" + "  " + $"{value}/2000";//"1050 / 2000";
    }

}
