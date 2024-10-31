using System;
using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using Ads;
using Mirror;
using MMK;
using Player;
using TMPro;
using UI.Battlepass;
using UI.Shop;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.SceneManagement;
using Random = UnityEngine.Random;

namespace Loading_Screen
{
    public class LoadingBar : MonoBehaviour
    {

        [Space]
        [SerializeField] GameObject PlayerPrefab;

        [Space(8)]
        [Header("UI Properties (Maks Loading Bar)")]
        [SerializeField] Animator animator;
        [SerializeField] LineRenderer lineRenderer;

        [Space]
        [SerializeField] TMP_Text LoadingTittleText;
        [SerializeField] TMP_Text LoadingProgressText;
        [Space]
        [SerializeField] Vector3 bulletStartPosition;
        [SerializeField] Vector3 bulletEndPosition;
        Vector3 bulletDirection => bulletEndPosition - bulletStartPosition;
        [Space]
        [SerializeField] AnimationClip startAnimationClip;
        [SerializeField] AnimationClip loadingAnimationClip;
        [SerializeField] AnimationClip endAnimationClip;
        //[SerializeField] TMP_Text fillAmountText;

        const string SPEED_ANIMATION_KEY = "_speed";


        void Awake()
        {
            progressValue = 0f;
            lineRenderer.positionCount = 0;

        }

        void Start()
        {
            
            LoadingBarProcess();

            UpdateLoadingText();
            UpdateProgressText();
        }


        int dotsCount = 0;
        readonly int maxDotsCount = 3;
        async void UpdateLoadingText()
        {
            while (true)
            {
                LoadingTittleText.text = $"Loading {new string('.', dotsCount)}";

                dotsCount += 1;
                if (dotsCount > maxDotsCount)
                    dotsCount = 0;

                await Task.Delay(450);
            }
            
        }
        
        async void UpdateProgressText()
        {
            while (true)
            {
                LoadingProgressText.text = $"{Mathf.RoundToInt(progressValue)}%";

                await Task.Yield();
            }
            
        }
        

        async void LoadingBarProcess()
        {
            List<Task> taksToPlay = new List<Task>();


            taksToPlay = new List<Task>()
            {
                FirebaseCheckDependencies.CheckAndFixDependencies(),
                GoogleAds.CheckAndFixDependencies(),
                ServerDate.GetDateFromSerer(),
            };
            await Task.WhenAll(taksToPlay);

            await Task.Yield();

            await StartLoadingAnimation();

            taksToPlay = new List<Task>()
            {
                LoginProcess(),
                LoadingAnimation(40f),
            };
            await Task.WhenAll(taksToPlay);
            
            
            taksToPlay = new List<Task>()
            {
                LoadBattlepassRewards(),
                LoadingAnimation(60f),
            };
            await Task.WhenAll(taksToPlay);
            
            taksToPlay = new List<Task>()
            {
                LoadShopOfferts(),
                LoadingAnimation(70f),
            };
            await Task.WhenAll(taksToPlay);

            
            
            AsyncOperation loadinsSceneOperation = SceneManager.LoadSceneAsync(GlobalSettingsManager.GetGlobalSettings().mainMenuScene);
            loadinsSceneOperation.allowSceneActivation = false;

            
            
            taksToPlay = new List<Task>()
            {
                LoadScene(loadinsSceneOperation),
                LoadingAnimation(100f),
            };
            await Task.WhenAll(taksToPlay);
            


            taksToPlay = new List<Task>()
            {
                EndLoadingAnimation(),
            };
            await Task.WhenAll(taksToPlay);

            
            loadinsSceneOperation.allowSceneActivation = true;

        }



        
#region Animation
        
        
        async Task StartLoadingAnimation()
        {
            animator.Play(startAnimationClip.name);
            await Task.Delay( Mathf.RoundToInt(startAnimationClip.length * 1000) );
        }

        float progressValue;
        float speed = 0.05f;
        float bulletSpeed => speed * 20f;
        async Task LoadingAnimation(float _progressValue)
        {
           
            animator.SetFloat(SPEED_ANIMATION_KEY, speed);

            if (progressValue <= 0)
            {
                animator.Play(loadingAnimationClip.name);
                
                lineRenderer.positionCount = 2;
                lineRenderer.SetPosition(0, bulletStartPosition);
                lineRenderer.SetPosition(1, bulletStartPosition);
            }


            while (animator.GetCurrentAnimatorStateInfo(0).normalizedTime < loadingAnimationClip.length * _progressValue / 100f ||
                (lineRenderer.GetPosition(1) - bulletStartPosition).magnitude < ( (bulletEndPosition - bulletStartPosition).magnitude * _progressValue / 100f) )
            {
                lineRenderer.SetPosition(1, lineRenderer.GetPosition(1) + bulletDirection.normalized * Time.deltaTime * bulletSpeed);
                await Task.Yield();

                progressValue = (lineRenderer.GetPosition(1) - bulletStartPosition).magnitude / (bulletEndPosition - bulletStartPosition).magnitude * 100f;
            }

                        
            progressValue = _progressValue;

        }
        
        async Task EndLoadingAnimation()
        {
            animator.Play(endAnimationClip.name);


            DateTime startTime = DateTime.Now;
            while ((lineRenderer.GetPosition(1) - lineRenderer.GetPosition(0)).magnitude > 0.1f)
            {
                lineRenderer.SetPosition(0, lineRenderer.GetPosition(0) + bulletDirection.normalized * Time.deltaTime * bulletSpeed * 20f);
                await Task.Yield();
            }
            lineRenderer.positionCount = 0;

            while ( (DateTime.Now - startTime).TotalMilliseconds < Mathf.RoundToInt(endAnimationClip.length * 1000) )
                await Task.Yield();


            await Task.Delay(1500);
        }


#endregion



        async Task LoginProcess()
        {
            await Task.Delay(300);

            PlayerController player = null;

            if (PlayerController.GetLocalPlayer?.Invoke() == null)
            {
                GameObject playerObject = Instantiate(PlayerPrefab, Vector3.zero, Quaternion.identity);
                DontDestroyOnLoad(playerObject);
            }
            
            while (player == null)
            {
                player = PlayerController.GetLocalPlayer?.Invoke();

                await Task.Yield();
            }

            
            
            Task login = player.Login();

            await Task.WhenAll(login);

        }


        async Task LoadShopOfferts() => await ShopManager.DownloadDataFromServer();
        
        
        async Task LoadBattlepassRewards() => await BattlepassManager.DownloadDataFromServer();
        


        async Task LoadScene(AsyncOperation loadinsSceneOperation)
        {
            DateTime startTime = DateTime.Now;

            while (loadinsSceneOperation.progress < 0.9f && (DateTime.Now - startTime).TotalSeconds < 5f )
                await Task.Yield();

        }



        // string debugText;
        // void OnGUI()
        // {
        //     Rect rect = new Rect(50, 50, 550, 250);
        //
        //     GUI.TextArea(rect, debugText);
        // }





        






    }
}
