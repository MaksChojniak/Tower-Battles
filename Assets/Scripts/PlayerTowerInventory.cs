using System;
using DefaultNamespace.ScriptableObjects;
using UnityEngine;

public class PlayerTowerInventory : MonoBehaviour
{
    public static PlayerTowerInventory Instance;

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

        ChangeBalance += OnChangeBalance;
        AddWin += OnAddWin;
        AddDefeat += OnAddDefeat;

    }

    void OnDestroy()
    {
        if (Instance == this)
        {
            ChangeBalance -= OnChangeBalance;
            AddWin -= OnAddWin;
            AddDefeat -= OnAddDefeat;
        }
    }



    public int GetBalance() => Balance;
    public int GetWinsCount => WinCount;
    public int GetDefeatCount => DefeatCount;

    void OnChangeBalance(int value)
    {
        Balance += value;
    }

    void OnAddWin()
    {
        WinCount += 1;
    }

    void OnAddDefeat()
    {
        DefeatCount += 1;
    }

}
