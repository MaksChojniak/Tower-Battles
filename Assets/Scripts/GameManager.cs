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

    public List<StageData> stages = new List<StageData>();

    public int currentStage;

    public Transform endPosition;
    public PathCreator pathCreator;
    public Transform enemyStorage;

    public List<GameObject> enemies = new List<GameObject>();

    public bool nextStage;

    public bool stageIsActive;

    public Image healthImage;
    public TMP_Text healthText;

    public bool isLoadAds;


    //[SerializeField] Transform capsule;
    //[SerializeField] bool click = false;
    void Awake()
    {
        instance = this;

        currentStage = 0;
        nextStage = true;

        isLoadAds = false;
    }


    void Update()
    {
        //if(click == false)
        //    StartCoroutine(Click());

        healthImage.fillAmount = (float)health / 100;
        healthText.text = health.ToString() + " HP";


        if(health <= 0)
        {

            for(int i = 0; i < enemies.Count; i++)
            {
                Destroy(enemies[i].gameObject);
            }

            health = 0;

            if (!isLoadAds && AdsController.instance.adsLoaded == true)
            {
                //AdsController.instance.ShowAd();
            }

            SceneManager.LoadSceneAsync(0);

        }

        if (nextStage && !stageIsActive)
        {
            stageIsActive = true;
            StartCoroutine(NextStage());
        }

        if ( enemies.Count == 0 && stages.Count > currentStage + 1 && !nextStage && !stageIsActive)
        {
            currentStage += 1;
            nextStage = true;
        }


    }

    private IEnumerator NextStage()
    {
        yield return new WaitForSeconds(3f);

        int enemiesCount = 0;
        for (int i = 0; i < stages[currentStage].enemiesCount.Count; i++)
        {
            enemiesCount += stages[currentStage].enemiesCount[i];
        }

        StartCoroutine(SpawnAllEmeiesFromStage(enemiesCount));


        yield return new WaitForSeconds(3f);

        money += stages[currentStage].reward;

        yield return new WaitForSeconds(4f);

        nextStage = false;
        stageIsActive = false;

    }

    public IEnumerator SpawnAllEmeiesFromStage(int enemiesCount)
    {

        for (int i = 0; i < enemiesCount; i++)
        {

            int j = 0;
            int k = 0;
            while ( stages[currentStage].enemiesCount[j] + k < i + 1 )
            {
                k += stages[currentStage].enemiesCount[j];
                j += 1;
            }

            SpawnEnemy(
                stages[currentStage].enemies[j].enemyPrefab,
                stages[currentStage].enemies[j].health,
                stages[currentStage].enemies[j].speed
                );

            yield return new WaitForSeconds(stages[currentStage].sleepTime[j]);
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
