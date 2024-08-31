using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Threading.Tasks;
using Ads;
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

        [Space(8)]
        [Header("UI Properties (Maks Loading Bar)")]
        [SerializeField] Animator zombieAnimator;
        [SerializeField] RectTransform zombieRect;
        [SerializeField] TMP_Text fillAmountText;

        [Space(18)]
        [Header("UI Properties (Kacper Loading Bar)")]
        [HideInInspector] [SerializeField] Animator loadingAnimator;


        float fillAmount;

        
        void Awake()
        {
            fillAmount = 0f;
            // fillBar.fillAmount = fillAmount;
        }

        async void Start()
        {
            // StartCoroutine(FillBarAnimation());
            // try
            // {
            //     await LoadingBarProcess();
            // }
            // catch (Exception exception)
            // {
            //     debugText = exception.ToString();
            //     await Task.Delay(600000);
            // }
            
            await LoadingBarProcess();
        }


        async Task LoadingBarProcess()
        {
            
            // loadingAnimator.SetBool(startAnimation, true);
            // await Task.Delay( Mathf.RoundToInt( loadingAnimator.GetCurrentAnimatorClipInfo(0).Length * 1000 ) );
            zombieRect.anchoredPosition = new Vector2(-675, -70);
            
            
            List<Task> taksToPlay = new List<Task>();


            taksToPlay = new List<Task>()
            {
                FirebaseCheckDependencies.CheckAndFixDependencies(),
                AdsCheckDependencies.CheckAndFixDependencies(),
                MaksLoadingAnimation(10f),
                // KacperLoadingAnimation(10f),
            };
            await Task.WhenAll(taksToPlay);
            
            
            taksToPlay = new List<Task>()
            {
                LoginProcess(),
                MaksLoadingAnimation(40f),
                // KacperLoadingAnimation(40f),
            };
            await Task.WhenAll(taksToPlay);

            
            
            AsyncOperation loadinsSceneOperation = SceneManager.LoadSceneAsync(GlobalSettingsManager.GetGlobalSettings().mainMenuScene);
            loadinsSceneOperation.allowSceneActivation = false;

            
            
            taksToPlay = new List<Task>()
            {
                LoadScene(loadinsSceneOperation),
                MaksLoadingAnimation(90f),
                // KacperLoadingAnimation(90f),
            };
            await Task.WhenAll(taksToPlay);
            


            taksToPlay = new List<Task>()
            {
                MaksLoadingAnimation(100f),
                // KacperLoadingAnimation(100f),
            };
            await Task.WhenAll(taksToPlay);

            
            
            // loadingAnimator.SetBool(endAnimation, true);
            // await Task.Delay( Mathf.RoundToInt( loadingAnimator.GetCurrentAnimatorClipInfo(0).Length * 1000 ) );
            
            
            
            loadinsSceneOperation.allowSceneActivation = true;

        }




#region Maks Loading Bar


        float speed
        {
            get
            {
                return _speed;
            }
            set
            {
                _speed = value;
                zombieAnimator.speed = speed;
            }
        }
        float _speed;
        
        async Task MaksLoadingAnimation(float progressValue)
        {
            speed = 0.5f;
            
            float value = (float)Math.Round(progressValue / 100f, 2);
            fillAmount = Math.Clamp(value, 0f, 1f);

            float minValue = -675;
            float maxValue = 725;
            float lenght = maxValue - minValue;
            float targetPos = minValue + (lenght * fillAmount);

            while (zombieRect.anchoredPosition.x < targetPos)
            {
                speed = Math.Clamp(speed + Time.deltaTime, 0.5f, 2f);
                
                zombieRect.anchoredPosition += Vector2.right * 10 * Time.deltaTime * Random.Range(0.5f, 1.5f) * (8 * speed);

                fillAmountText.text = $"{Mathf.Round((zombieRect.anchoredPosition.x - minValue) / lenght * 100f)}%";
                    
                await Task.Yield();
            }

            
            speed = 0.5f;
            
            
            await Task.Yield();
        }

        
#endregion



#region Kacper Loading Bar


        int startAnimation = Animator.StringToHash("");
        int endAnimation = Animator.StringToHash("");

        async Task KacperLoadingAnimation(float progressValue)
        {
            
            float value = (float)Math.Round(progressValue / 100f, 2);
            fillAmount = Math.Clamp(value, 0f, 1f);
            
            
        }

        
#endregion
        
        
        
        

        // async Task LoadingAnimation(float progressValue)
        // {
        //
        //     float value = (float)Math.Round(progressValue / 100f, 2);
        //     fillAmount = Math.Clamp(value, 0f, 1f);
        //
        //     while (fillBar.fillAmount < fillAmount)
        //     {
        //         fillBar.fillAmount += fillAmount * Time.deltaTime * Random.Range(0.5f, 1.5f);
        //         fillAmountText.text = $"{Mathf.Round(fillBar.fillAmount * 100f)}%";
        //         
        //         await Task.Yield();
        //     }
        //     
        //     
        //     await Task.Yield();
        // }
        
        
        


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



        // string debugText;
        // void OnGUI()
        // {
        //     Rect rect = new Rect(50, 50, 550, 250);
        //
        //     GUI.TextArea(rect, debugText);
        // }








        IEnumerator FillBarAnimation()
        {
            float value = (float)Math.Round(Random.Range(1f, 20f) / 100f, 2);
            fillAmount = Math.Clamp(fillAmount + value, 0f, 1f);


            // while (fillBar.fillAmount < fillAmount)
            // {
            //     fillBar.fillAmount += fillAmount * Time.deltaTime;
            //     fillAmountText.text = $"{Mathf.Round(fillBar.fillAmount * 100f)}%";
            //     
            //     yield return null;
            // }
            //
            // fillBar.fillAmount = fillAmount;

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
