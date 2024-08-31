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
        PlayerData.OnChangeBalance += UpdateBalanceText;
        PlayerData.OnChangeWinsCount += UpdateWinCountText;
        PlayerData.OnChangeExperience += UpdateExperienceText;
        
    }

    
    void UnregisterHandlers()
    {
        PlayerData.OnChangeBalance -= UpdateBalanceText;
        PlayerData.OnChangeWinsCount -= UpdateWinCountText;
        PlayerData.OnChangeExperience -= UpdateExperienceText;
    }
    
    
#endregion
    
    
    
    
    

    void UpdateAllTexts()
    {
        // if (PlayerTowerInventory.Instance == null)
        if (PlayerController.GetLocalPlayerData?.Invoke() == null)
            return;


        UpdateBalanceText(PlayerController.GetLocalPlayerData().WalletData.Balance);
        UpdateWinCountText(PlayerController.GetLocalPlayerData().PlayerGamesData.WinsCount);
        UpdateExperienceText(PlayerController.GetLocalPlayerData().ExperiencePoins);

    }

    void UpdateBalanceText(ulong value)
    {
        moneyText.text = $"{StringFormatter.PriceFormat(value)}{StringFormatter.GetSpriteText(new SpriteTextData() { SpriteName = GlobalSettingsManager.GetGlobalSettings().CoinsIconName })}";
    }

    void UpdateWinCountText(ulong value)
    {
        winsCountText.text = $"{StringFormatter.PriceFormat(value)} {StringFormatter.GetSpriteText(new SpriteTextData() { SpriteName = GlobalSettingsManager.GetGlobalSettings().TrophyIconName })}";
    }

    void UpdateExperienceText(ulong value)
    {
        XPText.text = $"{StringFormatter.GetSpriteText(new SpriteTextData() { SpriteName = GlobalSettingsManager.GetGlobalSettings().StarIconName })}" + "  " + $"{value}/2000";//"1050 / 2000";
    }

}
