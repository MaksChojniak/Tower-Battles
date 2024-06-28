using System;
using MMK.ScriptableObjects;
using UnityEngine;

public class PlayerTowerInventory : MonoBehaviour
{
    public static PlayerTowerInventory Instance;

    public static event Action<int> OnChangeBalance;
    public static event Action<int> OnChangeWinCount;
    public static event Action<int> OnChangeDefeatCount;

    public static Action<int> ChangeBalance;
    public static Action AddWin;
    public static Action AddDefeat;

    [SerializeField] int Balance;
    [SerializeField] int WinCount;
    [SerializeField] int DefeatCount;

    public Tower[] TowerDeck = new Tower[5];

    private void Awake()
    {
        if(Instance != null)
        {
            Destroy(gameObject);
            return;
        }
        else
        {
            Instance = this;
            DontDestroyOnLoad(gameObject);
        }

        ChangeBalance += BalanceChanged;
        AddWin += WinCountChanged;
        AddDefeat += DefeatCountChanged;

    }

    void OnDestroy()
    {
        if (Instance == this)
        {
            ChangeBalance -= BalanceChanged;
            AddWin -= WinCountChanged;
            AddDefeat -= DefeatCountChanged;
        }
    }



    public int GetBalance() => Balance;
    public int GetWinsCount() => WinCount;
    public int GetDefeatCount() => DefeatCount;

    void BalanceChanged(int value)
    {
        Balance += value;

        OnChangeBalance?.Invoke(Balance);
    }

    void WinCountChanged()
    {
        WinCount += 1;

        OnChangeWinCount?.Invoke(WinCount);
    }

    void DefeatCountChanged()
    {
        DefeatCount += 1;

        OnChangeDefeatCount?.Invoke(DefeatCount);
    }

}
