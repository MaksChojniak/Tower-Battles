﻿using System;
using System.Collections;
using System.Security.Cryptography;
using System.Threading.Tasks;
using MMK;
using TMPro;
using UI;
using UI.Animations;
using UnityEngine;

public class WaveManager : MonoBehaviour
{
    // public static WaveManager instance;
    public static event Action<int> UpdateWaveCount;
    public static event Action<int> UpdateCountdown;
    public static event Action OnStartWave; // farm give money
    public static event Action<uint> OnEndWave;
    public static event Action OnEndAllWaves;

    [SerializeField] WaveData[] Waves;
    [SerializeField] int ActualyWeveIndex;

    [SerializeField] int StartCountdown;
    
    [Space(18)]
    [SerializeField] Transform enemyStorage;

    [Space(18)]
    [SerializeField] GameObject waveIndicator;

    [Space(18)]
    // [SerializeField] GameObject waveRewardPanel;
    [SerializeField] UIAnimation OpenWaveRewardPanel;
    [SerializeField] UIAnimation CloseWaveRewardPanel;
    [SerializeField] TMP_Text waveRewardText;
    
    [Space(18)]
    // [SerializeField] GameObject skipWavePanel;
    [SerializeField] UIAnimation OpenSkipWavePanel;
    [SerializeField] UIAnimation CloseSkipWavePanel;
    [SerializeField] bool skipWave;




    void Awake()
    {
        GameResult.OnEndGame += OnEndGame;

        ActualyWeveIndex = -1;
        
    }

    void OnDestroy()
    {
        GameResult.OnEndGame -= OnEndGame;
        
    }

    void Start()
    {
        StartCoroutine(PrepareWaves());
    }

    
    

    void OnEndGame()
    {
        Destroy(this.gameObject);
    }
    
    
    
    

    IEnumerator PrepareWaves()
    {
        SetActiveIndicator(true);

        float time = StartCountdown;
        while (time >= 0)
        {
            float delay = Time.fixedDeltaTime;
            time -= delay;

            UpdateCountdown?.Invoke(Mathf.RoundToInt(time));

            yield return new WaitForSeconds(delay);
        }
        UpdateCountdown?.Invoke(-1);

        SetActiveIndicator(false);

        yield return UpdateWaves();
    }


    IEnumerator UpdateWaves()
    {
        if (ActualyWeveIndex + 1 < Waves.Length)
        {
            //await StartWave();
            yield return StartWave();
        }
        else
        {
            Debug.Log($"All waves are ended hihi");
            OnEndAllWaves?.Invoke();
        }
    }
    
    

    IEnumerator StartWave()
    {
        OnStartWave?.Invoke();
        ActualyWeveIndex += 1;
        UpdateWaveCount?.Invoke(ActualyWeveIndex);

        //await ProcessWave(Waves[ActualyWeveIndex]);
        yield return ProcessWave(Waves[ActualyWeveIndex]);
    }
    
    
    IEnumerator ProcessWave(WaveData wave)
    {
        bool isLastWave = ActualyWeveIndex + 1 >= Waves.Length;

        for (int i = 0; i < wave.stages.Length; i++)
        {
            StageWaveData stage = wave.stages[i];

            StageData stageData = stage.stagesData;
            for(int j = 0; j < stageData.enemyCount; j++)
            {
                GameObject enemy = Instantiate(stageData.enemy.EnemyPrefab, Vector3.one * -1000, Quaternion.identity, enemyStorage);

                yield return new WaitForSeconds(stageData.sleepTime);
            }

            yield return new WaitForSeconds(stage.stageSleepTime);
        }

        // if(skipWavePanel != null && !isLastWave)
        //     skipWavePanel.SetActive(true);
        if (!isLastWave)
            yield return ShowSkipWave();

        yield return new WaitUntil(new Func<bool>(() => IsReadyToNextWave() ));

        skipWave = false;
        if (skiWavePanelOpened)
        {
            skiWavePanelOpened = false;
            CloseSkipWavePanel.PlayAnimation();
        }
        // skipWave = false;
        
        
        // if (skipWavePanel != null)
        //     skipWavePanel.SetActive(false);
        // CloseSkipWavePanel.PlayAnimation();

        if (isLastWave)
        {
            yield return UpdateWaves();
            yield break;
        }

        uint waveReward = wave.waveReward;
        StartCoroutine(ShowWaveReward(waveReward));
        OnEndWave?.Invoke(waveReward);

        SetActiveIndicator(true);

        yield return new WaitForSeconds(wave.waveSleepTime);

        SetActiveIndicator(false);

        yield return UpdateWaves();
    }


    bool skiWavePanelOpened = false;
    IEnumerator ShowSkipWave()
    {
        DateTime startTime = DateTime.Now;

        yield return new WaitUntil(new Func<bool>(() => (DateTime.Now - startTime).TotalSeconds >= 5 || IsReadyToNextWave() ));
        
        if (GameObject.FindGameObjectsWithTag("Enemy").Length <= 0)
            yield break;

        skiWavePanelOpened = true;
        
        OpenSkipWavePanel.PlayAnimation();
    }
    

    
    IEnumerator ShowWaveReward(uint waveReward)
    {
        int.TryParse(waveReward.ToString(), out int fixedWaveReward);
        if(waveRewardText != null)
            waveRewardText.text = $"+ {StringFormatter.GetCashText(fixedWaveReward)}";
            // waveRewardText.text = $"+ {StringFormatter.PriceFormat(fixedWaveReward)}";
        
        // if(waveRewardPanel != null)
        //     waveRewardPanel.SetActive(true);
        OpenWaveRewardPanel.PlayAnimation();
        yield return OpenWaveRewardPanel.Wait();
        //yield return new WaitForSeconds(OpenWaveRewardPanel.animationLenght);

        yield return new WaitForSeconds(2.25f);
        
        // if(waveRewardPanel != null)
        //     waveRewardPanel.SetActive(false);
        CloseWaveRewardPanel.PlayAnimation();
    }
    
    

    bool IsReadyToNextWave()
    {
        return (GameObject.FindGameObjectsWithTag("Enemy").Length <= 0) || skipWave;
    }

    
    public void SetSkipWaveState(bool state)
    {
        skipWave = state;
        
        CloseSkipWavePanel.PlayAnimation();

        // if (!state)
        // {
        //     // if (skipWavePanel != null)
        //     //     skipWavePanel.SetActive(false);
        //     
        //     // CloseSkipWavePanel.PlayAnimation();
        // }

    }

    

    void SetActiveIndicator(bool state)
    {
        if (waveIndicator != null)
            waveIndicator.SetActive(state);
    }
    
    
    
    // public bool endAllWaves;
    // public int currentWave;
    // public double loadingGameSceneTime;
    //
    // [SerializeField] WaveData[] waves;
    //
    // [SerializeField] Transform enemyStorage;
    //
    // [SerializeField] List<GameObject> enemies;
    //
    // [SerializeField] bool stageIsActive;
    // double timeAfterWave;
    //
    //
    //
    // void Awake()
    // {
    //     instance = this;
    //     
    //     spawnEnemy += SpawnEnemy;
    //     destroyEnemy += DestroyEnemy;
    //
    //     stageIsActive = false;
    //     currentWave = -1;
    //
    //     loadingGameSceneTime = 15;
    //
    //     timeAfterWave = 0;
    // }
    //
    // void OnDestroy()
    // {
    //     spawnEnemy -= SpawnEnemy;
    //     destroyEnemy -= DestroyEnemy;
    // }
    //
    //
    // void SpawnEnemy(Enemy enemyValues)
    // {
    //     GameObject enemy = Instantiate(enemyValues.enemyPrefab, enemyStorage);
    //     enemy.AddComponent<EnemyController>();
    //     
    //     enemy.GetComponent<EnemyController>().component = enemyValues;
    //     enemy.GetComponent<EnemyController>().speed = enemyValues.speed;
    //     enemy.GetComponent<EnemyController>().health = enemyValues.health;
    //
    //     enemies.Add(enemy);
    // }
    //
    // void DestroyEnemy(GameObject obj)
    // {
    //     enemies.Remove(obj);
    //     Destroy(obj);
    // }
    //
    //
    // void Update()
    // {
    //     if(endAllWaves)
    //         return;
    //     
    //     CalculateWaves();
    // }
    //
    //
    // void CalculateWaves()
    // {
    //     if (loadingGameSceneTime > 0)
    //     {
    //         loadingGameSceneTime -= Time.deltaTime;
    //         return;
    //     }
    //
    //
    //     if (currentWave + 1 >= waves.Length && enemies.Count <= 0 && stageIsActive == false)
    //     {
    //         Invoke(nameof(EndAllWaves), 5f);
    //         return;
    //     }
    //
    //     if (CheckPosibilityOfStartNewWave())
    //     {
    //         stageIsActive = true;
    //         currentWave += 1;
    //         StartCoroutine(StartWave(currentWave));
    //     }
    //     
    // }
    //
    //
    // bool CheckPosibilityOfStartNewWave()
    // {
    //     if (currentWave < 0)
    //         return true;
    //     
    //     if (enemies.Count <= 0 && stageIsActive == false)
    //     {
    //         timeAfterWave += Time.deltaTime;
    //         double endCounting = 2;
    //
    //         if (timeAfterWave < endCounting)
    //         {
    //             return false;
    //         }
    //         else
    //         {
    //             ColectWaveReward();
    //             return true;
    //         }
    //
    //     }
    //     
    //     return false;
    // }
    //
    // void ColectWaveReward()
    // {
    //     if (!waves[currentWave].rewardIsCollected)
    //     {
    //         if(GamePlayerInformation.instance != null)
    //             GamePlayerInformation.changeBalance(waves[currentWave].stageReward);
    //         
    //         waves[currentWave].rewardIsCollected = true;
    //     }
    // }
    //
    // IEnumerator StartWave(int waveLevel)
    // {
    //     if (BuildingController.instance != null)
    //     {
    //         BuildingController.GetFarmReward();
    //     }
    //
    //     yield return new WaitForSeconds(2);
    //
    //     for (int i = 0; i < waves[waveLevel].enemies.Count; i++)
    //     {
    //         int enemiesSpawned = 0;
    //
    //         while (enemiesSpawned < waves[waveLevel].enemiesCount[i])
    //         {
    //             spawnEnemy(waves[waveLevel].enemies[i]);
    //             yield return new WaitForSeconds(waves[waveLevel].sleepTime[i]);
    //             enemiesSpawned++;
    //         }
    //     }
    //     
    //
    //     stageIsActive = false;
    // }
    //
    //
    // void EndAllWaves() => endAllWaves = true;


}


[Serializable]
public class WaveData
{
    public StageWaveData[] stages;
    public float waveSleepTime;    

    public uint waveReward;
}

[Serializable]
public class StageWaveData
{
    public StageData stagesData;
    public float stageSleepTime;
}

[Serializable]
public class StageData
{
    public Enemy enemy;
    public int enemyCount;
    public float sleepTime;
} 

