using System.Collections;
using System.Collections.Generic;
using MMK;
using TMPro;
using UnityEngine;

public class PlayerInventoryStatsUI : MonoBehaviour
{
    [SerializeField] TMP_Text moneyText;
    [SerializeField] TMP_Text winsCountText;
    [SerializeField] TMP_Text defeatCountText;


    private void OnEnable()
    {
        PlayerTowerInventory.OnChangeBalance += UpdateBalanceText;
        PlayerTowerInventory.OnChangeWinCount += UpdateWinCountText;
        PlayerTowerInventory.OnChangeDefeatCount += UpdateDefeatCountText;

        UpdateAllTexts();
    }

    private void OnDisable()
    {
        PlayerTowerInventory.OnChangeBalance -= UpdateBalanceText;
        PlayerTowerInventory.OnChangeWinCount -= UpdateWinCountText;
        PlayerTowerInventory.OnChangeDefeatCount -= UpdateDefeatCountText;
    }

    void UpdateAllTexts()
    {
        if (PlayerTowerInventory.Instance == null)
            return;

        UpdateBalanceText(PlayerTowerInventory.Instance.GetBalance());
        UpdateWinCountText(PlayerTowerInventory.Instance.GetWinsCount());
        UpdateDefeatCountText(PlayerTowerInventory.Instance.GetDefeatCount());

    }

    void UpdateBalanceText(int value)
    {
        moneyText.text = $"{StringFormatter.PriceFormat(value)}";
    }

    void UpdateWinCountText(int value)
    {
        winsCountText.text = $"{StringFormatter.PriceFormat(value)}";
    }

    void UpdateDefeatCountText(int value)
    {
        defeatCountText.text = $"{StringFormatter.PriceFormat(value)}";
    }

}
