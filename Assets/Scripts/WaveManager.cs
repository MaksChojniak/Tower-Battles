using System;
using System.Collections;
using System.Collections.Generic;
using PathCreation;
using UnityEngine;
public class WaveManager : MonoBehaviour
{
    public static WaveManager instance;
    
    public static Action<Enemy> spawnEnemy; 
    public static Action<GameObject> destroyEnemy;

    public bool endAllWaves;
    public int currentWave;
    public double loadingGameSceneTime;
    
    [SerializeField] WaveData[] waves;
    
    [SerializeField] Transform enemyStorage;
    
    [SerializeField] List<GameObject> enemies;

    [SerializeField] bool stageIsActive;
    double timeAfterWave;
    
    
    
    void Awake()
    {
        instance = this;
        
        spawnEnemy += SpawnEnemy;
        destroyEnemy += DestroyEnemy;

        stageIsActive = false;
        currentWave = -1;

        loadingGameSceneTime = 5;

        timeAfterWave = 0;
    }

    void OnDestroy()
    {
        spawnEnemy -= SpawnEnemy;
        destroyEnemy -= DestroyEnemy;
    }


    void SpawnEnemy(Enemy enemyValues)
    {
        GameObject enemy = Instantiate(enemyValues.enemyPrefab, enemyStorage);
        enemy.AddComponent<EnemyController>();
        
        enemy.GetComponent<EnemyController>().component = enemyValues;
        enemy.GetComponent<EnemyController>().speed = enemyValues.speed;
        enemy.GetComponent<EnemyController>().health = enemyValues.health;

        enemies.Add(enemy);
    }

    void DestroyEnemy(GameObject obj)
    {
        enemies.Remove(obj);
        Destroy(obj);
    }


    void Update()
    {
        if(endAllWaves)
            return;
        
        CalculateWaves();
    }


    void CalculateWaves()
    {
        if (loadingGameSceneTime > 0)
        {
            loadingGameSceneTime -= Time.deltaTime;
            return;
        }


        if (currentWave + 1 >= waves.Length && enemies.Count <= 0 && stageIsActive == false)
        {
            Invoke(nameof(EndAllWaves), 5f);
            return;
        }

        if (CheckPosibilityOfStartNewWave())
        {
            stageIsActive = true;
            currentWave += 1;
            StartCoroutine(StartWave(currentWave));
        }
        
    }


    bool CheckPosibilityOfStartNewWave()
    {
        if (currentWave < 0)
            return true;
        
        if (enemies.Count <= 0 && stageIsActive == false)
        {
            timeAfterWave += Time.deltaTime;
            double endCounting = 2;

            if (timeAfterWave < endCounting)
            {
                return false;
            }
            else
            {
                ColectWaveReward();
                return true;
            }

        }
        
        return false;
    }

    void ColectWaveReward()
    {
        if (!waves[currentWave].rewardIsCollected)
        {
            GamePlayerInformation.changeBalance(waves[currentWave].stageReward);
            waves[currentWave].rewardIsCollected = true;
        }
    }

    IEnumerator StartWave(int waveLevel)
    {
        if (BuildingController.instance != null)
        {
            BuildingController.GetFarmReward();
        }

        yield return new WaitForSeconds(2);

        for (int i = 0; i < waves[waveLevel].enemies.Count; i++)
        {
            int enemiesSpawned = 0;

            while (enemiesSpawned < waves[waveLevel].enemiesCount[i])
            {
                spawnEnemy(waves[waveLevel].enemies[i]);
                yield return new WaitForSeconds(waves[waveLevel].sleepTime[i]);
                enemiesSpawned++;
            }
        }
        

        stageIsActive = false;
    }

    
    void EndAllWaves() => endAllWaves = true;
    
    
}


[Serializable]
public class WaveData
{
    public List<Enemy> enemies;
    public List<int> enemiesCount;

    public List<float> sleepTime;

    public uint stageReward;
    public bool rewardIsCollected;
}

