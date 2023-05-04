using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System;
using PathCreation;
using UnityEngine.Assertions.Must;
using UnityEngine.SceneManagement;


public class GameManager : MonoBehaviour//, IUnityAdsLoadListener, IUnityAdsShowListener
{
    public static GameManager instance;
    
    
    public Image healthImage;
    public TMP_Text healthText;
    public TMP_Text waveText;
    public TMP_Text moneyText;



    void Awake()
    {
        instance = this;
    }



    void Update()
    {
        healthImage.fillAmount = (float)GamePlayerInformation.instance.health / 100;
        healthText.text = $"{GamePlayerInformation.instance.health} HP";

        moneyText.text = $"{GamePlayerInformation.instance.balance} $";

        waveText.text = $"Wave {WaveManager.instance.currentWave + 1}";


        if (GamePlayerInformation.instance.health <= 0)
        {
            AdsController.showAds();
            SceneManager.LoadSceneAsync(0);
        }

        if (WaveManager.instance.endAllWaves)
        {
            Debug.Log("You Win");
            AdsController.showAds();
            SceneManager.LoadSceneAsync(0);
        }
    }



}
