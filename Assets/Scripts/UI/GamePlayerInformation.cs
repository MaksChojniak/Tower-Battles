using Assets.Scripts;
using System;
using System.Collections;
using System.Data.SqlTypes;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GamePlayerInformation : MonoBehaviour
{
    public static GamePlayerInformation Instance;

    public static event Action OnEndGame;

    public static event Action<long> UpdateBalance;
    public static event Action<int> UpdateHealth;

    
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


    void Awake()
    {
        Instance = this;
        
        
        WaveManager.OnEndAllWaves += OnEndAllWaves;
        WaveManager.OnEndWave += GetWaveReward;

        GetBalance += OnGetBalance;
        ChangeBalance += OnChangeBalance;

        GetHealth += OnGetHealth;
        ChangeHealth += OnChangeHealth;
        

        Health = 100;
        Balance = 10500;
    }

    void Start()
    {
        UpdateBalance?.Invoke(Balance);
        UpdateHealth?.Invoke(Health);
    }

    void OnDestroy()
    {
        ChangeBalance -= OnChangeBalance;
        GetBalance -= OnGetBalance;

        ChangeHealth -= OnChangeHealth;
        GetHealth -= OnGetHealth;
        
        WaveManager.OnEndWave -= GetWaveReward;
        WaveManager.OnEndAllWaves -= OnEndAllWaves;
    }

    
    
    long OnGetBalance() => Balance;
    int OnGetHealth() => Health;

    
    
    void OnEndAllWaves()
    {
        EndGame(true, 5f);
    }
    
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

            EndGame(false, 5f);
        }

        UpdateHealth?.Invoke(Health);
    }

    public void EndGame(bool state, float time)
    {
        if (EndGameCoroutine == null)
            EndGameCoroutine = StartCoroutine(EndGameProcess(state, time));
    }

    Coroutine EndGameCoroutine;
    IEnumerator EndGameProcess(bool isWinner, float timeDelay)
    {
        int moneyReward = 10;
        int trophyReward = 0;
        int defeatReward = 0;

        if (isWinner)
        {
            Debug.Log($"WIN");
            //PlayerTowerInventory.AddWin();
            trophyReward += 1;
        }
        else
        {
            Debug.Log($"LOSE");
            //PlayerTowerInventory.AddDefeat();

            defeatReward += 1;
        }


        Assets.Scripts.EndGame.OnEndGame(isWinner);

        yield return new WaitForSeconds(timeDelay);

        DontDestroyOnLoad(this.gameObject);

        var scene = SceneManager.LoadSceneAsync(Scenes.mainMenuScene);

        OnEndGame?.Invoke();

        yield return new WaitUntil(new Func<bool>( () => scene.isDone ));

        GameRewardPanel.OpenRewardPanel(isWinner, moneyReward, trophyReward, defeatReward);

        EndGameCoroutine = null;

        Destroy(this.gameObject);
    }
}
