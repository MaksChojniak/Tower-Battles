using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
//using Unity.VisualScripting;
using System;
using PathCreation;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour//, IUnityAdsLoadListener, IUnityAdsShowListener
{
    public static GameManager instance;

    public int health;
    public int money;

    public List<StageData> waves = new List<StageData>();

    public int currentWave;

    public Transform endPosition;
    public PathCreator pathCreator;
    public Transform enemyStorage;

    public List<GameObject> enemies = new List<GameObject>();

    public bool nextWave;

    public bool waveIsActive;

    public Image healthImage;
    public TMP_Text healthText;

    public TMP_Text waveText;

    public TMP_Text moneyText;

    public bool isLoadAds;


    //[SerializeField] Transform capsule;
    //[SerializeField] bool click = false;
    void Awake()
    {
        instance = this;

        currentWave = -1;
        nextWave = false;

        isLoadAds = false;
    }


    void Update()
    {
        //if(click == false)
        //    StartCoroutine(Click());

        healthImage.fillAmount = (float)health / 100;
        healthText.text = health.ToString() + " HP";

        waveText.text = "Wave " + ( currentWave + 1 ).ToString();

        moneyText.text = money.ToString() + " $";


        if (health <= 0)
        {

            for(int i = 0; i < enemies.Count; i++)
            {
                Destroy(enemies[i].gameObject);
            }

            health = 0;

            LoadAds();

            SceneManager.LoadSceneAsync(0);

        }

        if (enemies.Count == 0 && currentWave + 1 == waves.Count && !nextWave && !waveIsActive)
        {
            Debug.Log("You Win");

            LoadAds();

            SceneManager.LoadSceneAsync(0);
        }

        if (nextWave && !waveIsActive)
        {
            waveIsActive = true;
            StartCoroutine(NextWave());
        }

        if ( enemies.Count == 0 && waves.Count > currentWave + 1 && !nextWave && !waveIsActive)
        {
            currentWave += 1;
            nextWave = true;
        }

    }



    private IEnumerator NextWave()
    {
        yield return new WaitForSeconds(0.5f);

        //currentWave += 1;
        money += waves[currentWave].reward;

        yield return new WaitForSeconds(3.5f);

        int enemiesCount = 0;
        for (int i = 0; i < waves[currentWave].enemiesCount.Count; i++)
        {
            enemiesCount += waves[currentWave].enemiesCount[i];
        }

        StartCoroutine(SpawnAllEmeiesFromWave(enemiesCount));


        yield return new WaitForSeconds(4f);

        nextWave = false;
        waveIsActive = false;

    }

    public IEnumerator SpawnAllEmeiesFromWave(int enemiesCount)
    {

        for (int i = 0; i < enemiesCount; i++)
        {

            int j = 0;
            int k = 0;
            while ( waves[currentWave].enemiesCount[j] + k < i + 1 )
            {
                k += waves[currentWave].enemiesCount[j];
                j += 1;
            }

            SpawnEnemy(
                waves[currentWave].enemies[j].enemyPrefab,
                waves[currentWave].enemies[j].health,
                waves[currentWave].enemies[j].speed
                );

            yield return new WaitForSeconds(waves[currentWave].sleepTime[j]);
        }

    }

    public void SpawnEnemy(GameObject prefab, int health, float speed)
    {
        var enemy = Instantiate(prefab, enemyStorage);

        enemy.GetComponent<Follower>().pathCreator = pathCreator;
        enemy.GetComponent<Follower>().endPosition = endPosition;
        enemy.GetComponent<Follower>().speed = speed;
        enemy.GetComponent<Follower>().health = health;

        enemies.Add(enemy);
    }


    public void LoadAds()
    {
        if (!isLoadAds && AdsController.instance.adsLoaded == true)
        {
            //AdsController.instance.ShowAd();
        }
    }


    //IEnumerator Click()
    //{
    //    if (Input.touchCount > 0)
    //    {
    //        click = true;

    //        Vector3 pos = Input.GetTouch(0).position;

    //        Ray ray = Camera.main.ScreenPointToRay(pos);
    //        RaycastHit hit;

    //        if (Physics.Raycast(ray, out hit, 1000, 1 << 6))
    //        {
    //            capsule.position = new Vector3(hit.point.x, 1f, hit.point.z);

    //        }

    //        yield return new WaitForSeconds(0.1f);

    //        click = false;

    //    }
    //}

}

[Serializable]
public class StageData
{
    public List<Enemy> enemies;
    public List<int> enemiesCount;

    public List<float> sleepTime;

    public int reward;
}
