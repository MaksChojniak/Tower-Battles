using Assets.Scripts;
using System;
using System.Collections;
using System.Data.SqlTypes;
using MMK;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GamePlayerInformation : MonoBehaviour
{
    public delegate void OnDieDelegate();
    public static event OnDieDelegate OnDie;

    
    public delegate void UpdateBalanceDelegate(long value);
    public static event UpdateBalanceDelegate UpdateBalance;

    public delegate void UpdateHealthDelegate(int value);
    public static event UpdateHealthDelegate UpdateHealth;

    
    public delegate void ChangeBalanceDelegate(long Value);
    public static ChangeBalanceDelegate ChangeBalance;

    public delegate long GetBalanceDelegate();
    public static GetBalanceDelegate GetBalance;
    

    public delegate void ChangeHealthDelegate(int Value);
    public static ChangeHealthDelegate ChangeHealth;
    
    public delegate int GetHealthDelegate();
    public static GetHealthDelegate GetHealth;

    
    
    
    public long Balance;
    public int Health;
    bool isDead;

    
    

    void Awake()
    {
        // WaveManager.OnEndAllWaves += OnEndAllWaves;
        WaveManager.OnEndWave += GetWaveReward;

        GetBalance += OnGetBalance;
        ChangeBalance += OnChangeBalance;

        GetHealth += OnGetHealth;
        ChangeHealth += OnChangeHealth;
        

        Health = 100;
        Balance = 650 + 10000000;
        isDead = false;
    }

    
    void OnDestroy()
    {
        ChangeBalance -= OnChangeBalance;
        GetBalance -= OnGetBalance;

        ChangeHealth -= OnChangeHealth;
        GetHealth -= OnGetHealth;
        
        WaveManager.OnEndWave -= GetWaveReward;
        // WaveManager.OnEndAllWaves -= OnEndAllWaves;
    }

    
    void Start()
    {
        UpdateBalance?.Invoke(Balance);
        UpdateHealth?.Invoke(Health);
    }
    
    

    long OnGetBalance() => Balance;
    int OnGetHealth() => Health;

    
    
    // void OnEndAllWaves()
    // {
    //     StartEndGame(true, 5f);
    // }
    
    
    void GetWaveReward(uint reward)
    {
        ChangeBalance(reward);
    }
    
    
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

            if (!isDead)
            {
                isDead = true;
                OnDie?.Invoke();
                
                // ChangeHealth -= OnChangeHealth;
            }
        }

        UpdateHealth?.Invoke(Health);
    }

    
    // public void StartEndGame(bool state, float time)
    // {
    //     if (EndGameCoroutine == null)
    //         EndGameCoroutine = StartCoroutine(EndGameProcess(state, time));
    // }
    //
    // Coroutine EndGameCoroutine;
    // IEnumerator EndGameProcess(bool isWinner, float timeDelay)
    // {
    //     int moneyReward = 10;
    //     int trophyReward = 0;
    //     int defeatReward = 0;
    //
    //     if (isWinner)
    //     {
    //         Debug.Log($"WIN");
    //         //PlayerTowerInventory.AddWin();
    //         trophyReward += 1;
    //     }
    //     else
    //     {
    //         Debug.Log($"LOSE");
    //         //PlayerTowerInventory.AddDefeat();
    //
    //         defeatReward += 1;
    //     }
    //
    //     
    //     EndGame?.Invoke(isWinner);
    //
    //     yield return new WaitForSeconds(timeDelay);
    //
    //     DontDestroyOnLoad(this.gameObject);
    //
    //     var scene = SceneManager.LoadSceneAsync(GlobalSettingsManager.GetGlobalSettings().mainMenuScene);
    //
    //     OnEndGame?.Invoke();
    //
    //     yield return new WaitUntil(new Func<bool>( () => scene.isDone ));
    //
    //     GameRewardPanel.OpenRewardPanel(isWinner, moneyReward, trophyReward, defeatReward);
    //
    //     EndGameCoroutine = null;
    //
    //     Destroy(this.gameObject);
    // }
    
    
    
}
