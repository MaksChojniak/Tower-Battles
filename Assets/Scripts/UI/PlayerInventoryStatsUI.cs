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
    [SerializeField] TMP_Text defeatCountText;



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
        PlayerData.OnChangeDefeatsCount += UpdateDefeatCountText;
        
    }

    
    void UnregisterHandlers()
    {
        PlayerData.OnChangeBalance -= UpdateBalanceText;
        PlayerData.OnChangeWinsCount -= UpdateWinCountText;
        PlayerData.OnChangeDefeatsCount -= UpdateDefeatCountText;
    }
    
    
#endregion
    
    
    
    
    

    void UpdateAllTexts()
    {
        // if (PlayerTowerInventory.Instance == null)
        if (PlayerController.GetLocalPlayerData?.Invoke() == null)
            return;


        UpdateBalanceText(PlayerController.GetLocalPlayerData().WalletData.Balance);
        UpdateWinCountText(PlayerController.GetLocalPlayerData().PlayerGamesData.WinsCount);
        UpdateDefeatCountText(PlayerController.GetLocalPlayerData().PlayerGamesData.DefeatsCount);

    }

    void UpdateBalanceText(ulong value)
    {
        moneyText.text = $"{StringFormatter.PriceFormat(value)}{StringFormatter.GetSpriteText(new SpriteTextData() { SpriteName = GlobalSettingsManager.GetGlobalSettings().CoinsIconName })}";
    }

    void UpdateWinCountText(ulong value)
    {
        winsCountText.text = $"{StringFormatter.PriceFormat(value)} {StringFormatter.GetSpriteText(new SpriteTextData() { SpriteName = GlobalSettingsManager.GetGlobalSettings().TrophyIconName })}";
    }

    void UpdateDefeatCountText(ulong value)
    {
        defeatCountText.text = $"{StringFormatter.GetSpriteText(new SpriteTextData() { SpriteName = GlobalSettingsManager.GetGlobalSettings().StarIconName })}" + "  " + "1050 / 2000";
    }

}
