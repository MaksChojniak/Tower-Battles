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
    [SerializeField] TMP_Text ExperienceText;
    [SerializeField] TMP_Text LevelText;

    [Space]
    [SerializeField] GameObject LevelProgressPreview;



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



    public void OpenLevelProgressPanel()
    {
        GameObject panel = Instantiate(LevelProgressPreview);
        
    }
    
    
    
    

    void UpdateAllTexts()
    {
        // if (PlayerTowerInventory.Instance == null)
        if (PlayerController.GetLocalPlayerData?.Invoke() == null)
            return;


        UpdateCoinsBalanceText(PlayerController.GetLocalPlayerData().WalletData.Coins);
        
        UpdateGemsBalanceText(PlayerController.GetLocalPlayerData().WalletData.Gems);
        
        UpdateExperienceText(PlayerController.GetLocalPlayerData().Level ,PlayerController.GetLocalPlayerData().XP);

    }

    void UpdateCoinsBalanceText(ulong Coins)
    {
        moneyText.text = $"{StringFormatter.GetCoinsText( (long)Coins )}";
    }

    void UpdateGemsBalanceText(ulong Gems)
    {
        winsCountText.text = $"{StringFormatter.GetGemsText( (long)Gems )}";
    }

    void UpdateExperienceText(ulong Level, ulong Experience)
    {
        ExperienceText.text = $"{StringFormatter.GetSpriteText(new SpriteTextData() { SpriteName = GlobalSettingsManager.GetGlobalSettings().LevelIconName, WithColor = true, Color = GlobalSettingsManager.GetGlobalSettings().GetCurrentLevelColor(Level) })}" + 
                              "  " + $"{Experience}/{PlayerData.GetXPByLevel((uint)Level + 1)}"; //"1050 / 2000";
        LevelText.text = $"{Level}";
    }

}
