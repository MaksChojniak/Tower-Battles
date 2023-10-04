// using System.Collections;
// using System.Collections.Generic;
// using UnityEngine;
// using UnityEngine.UI;
// using TMPro;
// using System;
// using PathCreation;
// using UnityEngine.Assertions.Must;
// using UnityEngine.SceneManagement;
//
//
// public class GameManager : MonoBehaviour
// {
//     public static GameManager instance;
//
//     public bool isBuildingsCountMax;
//     
//     
//     public Image healthImage;
//     public TMP_Text healthText;
//     public TMP_Text waveText;
//     public TMP_Text moneyText;
//     public TMP_Text buildingsCountText;
//     public TMP_Text countdownTimerText;
//     public Image countdownTimerArrowImage;
//
//     int lastCountdownValue;
//
//     void Awake()
//     {
//         instance = this;
//
//         lastCountdownValue = 5;
//     }
//
//
//
//     void Update()
//     {
//         healthImage.fillAmount = (float)GamePlayerInformation.instance.health / 100;
//         healthText.text = $"{GamePlayerInformation.instance.health} HP";
//
//         moneyText.text = $"{GamePlayerInformation.instance.balance} $";
//
//         waveText.text = $"Wave {WaveManager.instance.currentWave + 1}";
//
//
//         int countdownValue = Mathf.RoundToInt((float)WaveManager.instance.loadingGameSceneTime);
//         if (WaveManager.instance.loadingGameSceneTime < 0)
//         {
//             countdownTimerText.gameObject.SetActive(false); 
//             countdownTimerArrowImage.gameObject.SetActive(false);
//         }
//         
//         
//         if(lastCountdownValue != countdownValue)
//         {
//             lastCountdownValue = countdownValue;
//             StartCoroutine(CountdownArrow(countdownValue));
//         }
//
//         
//         countdownTimerText.text = $"{countdownValue}";
//
//
//         if (GamePlayerInformation.instance.health <= 0)
//         {
//             AdsController.showAds();
//             SceneManager.LoadSceneAsync(0);
//         }
//
//         if (WaveManager.instance.endAllWaves)
//         {
//             Debug.Log("You Win");
//             AdsController.showAds();
//             SceneManager.LoadSceneAsync(0);
//         }
//
//         MaxBuildingsCount();
//     }
//
//     IEnumerator CountdownArrow(int countdownValue)
//     {
//         CanvasRenderer canvasRenderer = countdownTimerArrowImage.GetComponent<CanvasRenderer>();
//
//         while (canvasRenderer.GetAlpha() > 0)
//         {
//             canvasRenderer.SetAlpha(canvasRenderer.GetAlpha() - (Time.deltaTime * 4) );
//             yield return new WaitForSeconds(0.001f);
//         }
//         canvasRenderer.SetAlpha(0);
//
//         yield return new WaitForSeconds(0.15f);
//
//         if (countdownValue <= 0)
//             yield break;
//
//
//
//         while (canvasRenderer.GetAlpha() < 1)
//         {
//             canvasRenderer.SetAlpha(canvasRenderer.GetAlpha() + (Time.deltaTime * 4) );
//             yield return new WaitForSeconds(0.001f);
//         }
//         canvasRenderer.SetAlpha(1);
//     }
//
//     void MaxBuildingsCount()
//     {
//         int maxCount = 10;
//         int count = GameObject.FindObjectsOfType<BuildingController>().Length;
//
//         isBuildingsCountMax = (count > maxCount);
//
//         buildingsCountText.text = $"{count}/{maxCount} Towers";
//     }
//
// }
