using System;
using System.Collections;
using System.Data.SqlTypes;
using UnityEngine;
public class GamePlayerInformation : MonoBehaviour
{
    public static GamePlayerInformation Instance;

    public static event Action OnEndGame;

    public static event Action<long> UpdateBalance;
    public static event Action<int> UpdateHealth;

    public static Action<long> ChangeBalance;
    public static Action<int> ChangeHP;

    public long Balance;
    public int Health;


    void Awake()
    {
        Instance = this;
        
        ChangeBalance += OnChangeBalance;
        
        ChangeHP += OnChangeHealth;

        WaveManager.OnEndWave += GetWaveReward;
        WaveManager.OnEndAllWaves += OnEndAllWaves;

        Health = 100;
        Balance = 16500;
    }

    void Start()
    {
        UpdateBalance?.Invoke(Balance);
        UpdateHealth?.Invoke(Health);
    }

    void OnDestroy()
    {
        ChangeBalance -= OnChangeBalance;

        ChangeHP -= OnChangeHealth;
        
        WaveManager.OnEndWave -= GetWaveReward;
        WaveManager.OnEndAllWaves -= OnEndAllWaves;
    }

    void OnEndAllWaves()
    {
        StartCoroutine(EndGameProcess(true));
    }
    
    void GetWaveReward(uint reward)
    {
        ChangeBalance(reward);
    }

    public long GetBalance() => Balance;
    public int GetHealth() => Health;

    void OnChangeBalance(long value)
    {
        Balance += value;
     
        UpdateBalance?.Invoke(Balance);
    }

    void OnChangeHealth(int value)
    {
        Health += value;

        if (Health <= 0)
        {
            Health = 0;
            
            if (EndGameCoroutine == null) 
                EndGameCoroutine = StartCoroutine(EndGameProcess(false));
        }

        UpdateHealth?.Invoke(Health);
    }

    Coroutine EndGameCoroutine;
    IEnumerator EndGameProcess(bool isWinner)
    {
        if (isWinner)
        {
            Debug.Log($"WIN");
            PlayerTowerInventory.AddWin();
        }
        else
        {
            Debug.Log($"LOSE");
            PlayerTowerInventory.AddDefeat();
        }

        yield return new WaitForSeconds(5f);
        

        OnEndGame?.Invoke();

        EndGameCoroutine = null;
    }
}
