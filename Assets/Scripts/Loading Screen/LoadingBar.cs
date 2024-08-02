using System;
using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using Mirror;
using MMK;
using Player;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using Random = UnityEngine.Random;

namespace Loading_Screen
{
    public class LoadingBar : MonoBehaviour
    {

        [Header("UI Properties")]
        [SerializeField] Image fillBar;
        [SerializeField] TMP_Text fillAmountText;

        
        
        float fillAmount;

        void Awake()
        {
            fillAmount = 0f;
            fillBar.fillAmount = fillAmount;
        }

        async void Start()
        {
            // StartCoroutine(FillBarAnimation());
            try
            {
                await LoadingBarProcess();
            }
            catch (Exception exception)
            {
                debugText = exception.ToString();
                await Task.Delay(600000);
            }
            
        }




        async Task LoadingBarProcess()
        {
            List<Task> taksToPlay = new List<Task>();


            taksToPlay = new List<Task>()
            {
                LoadingAnimation(10f),
                CheckDependencies.CheckAndFixDependencies()
            };
            await Task.WhenAll(taksToPlay);
            
            
            taksToPlay = new List<Task>()
            {
                LoadingAnimation(40f),
                LoginProcess()
            };
            await Task.WhenAll(taksToPlay);

            
            
            AsyncOperation loadinsSceneOperation = SceneManager.LoadSceneAsync(GlobalSettingsManager.GetGlobalSettings().mainMenuScene);
            loadinsSceneOperation.allowSceneActivation = false;

            
            
            taksToPlay = new List<Task>()
            {
                LoadingAnimation(90f),
                LoadScene(loadinsSceneOperation)
            };
            await Task.WhenAll(taksToPlay);
            


            taksToPlay = new List<Task>()
            {
                LoadingAnimation(100f),
            };
            await Task.WhenAll(taksToPlay);

            
            loadinsSceneOperation.allowSceneActivation = true;
            // SceneManager.LoadSceneAsync(GlobalSettingsManager.GetGlobalSettings().mainMenuScene);
            
        }



        async Task LoadingAnimation(float progressValue)
        {
            float value = (float)Math.Round(progressValue / 100f, 2);
            fillAmount = Math.Clamp(value, 0f, 1f);
            
            while (fillBar.fillAmount < fillAmount)
            {
                fillBar.fillAmount += fillAmount * Time.deltaTime * Random.Range(0.5f, 1.5f);
                fillAmountText.text = $"{Mathf.Round(fillBar.fillAmount * 100f)}%";
                
                await Task.Yield();
            }
            
            await Task.Yield();
        }



        async Task LoginProcess()
        {
            await Task.Delay(300);

            PlayerController player = null;

            while (player == null)
            {
                player = PlayerController.GetLocalPlayer?.Invoke();

                await Task.Yield();
            }

            
            
            Task login = player.Login();

            await Task.WhenAll(login);

        }


        async Task LoadScene(AsyncOperation loadinsSceneOperation)
        {
            while (loadinsSceneOperation.progress < 0.9f)
                await Task.Yield();

        }



        string debugText;
        void OnGUI()
        {
            Rect rect = new Rect(50, 50, 550, 250);

            GUI.TextArea(rect, debugText);
        }








        IEnumerator FillBarAnimation()
        {
            float value = (float)Math.Round(Random.Range(1f, 20f) / 100f, 2);
            fillAmount = Math.Clamp(fillAmount + value, 0f, 1f);


            while (fillBar.fillAmount < fillAmount)
            {
                fillBar.fillAmount += fillAmount * Time.deltaTime;
                fillAmountText.text = $"{Mathf.Round(fillBar.fillAmount * 100f)}%";
                
                yield return null;
            }

            fillBar.fillAmount = fillAmount;

            if (fillAmount < 1f)
            {
                yield return new WaitForSeconds(Random.Range(0.1f, 0.5f));
                StartCoroutine(FillBarAnimation());
            }
            else
            {
                yield return new WaitForSeconds(1f);
                
                SceneManager.LoadSceneAsync(GlobalSettingsManager.GetGlobalSettings().mainMenuScene);
            }
        }



    }
}
