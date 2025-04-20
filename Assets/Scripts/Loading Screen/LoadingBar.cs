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
            
            StartCoroutine(LoadingBarProcess());

            StartCoroutine(UpdateLoadingText());
            StartCoroutine(UpdateProgressText());
        }


        int dotsCount = 0;
        readonly int maxDotsCount = 3;
        IEnumerator UpdateLoadingText()
        {
            while (true)
            {
                LoadingTittleText.text = $"Loading {new string('.', dotsCount)}";

                dotsCount += 1;
                if (dotsCount > maxDotsCount)
                    dotsCount = 0;

                //await Task.Delay(450);
                yield return new WaitForSeconds(0.45f);
            }
            
        }

        IEnumerator UpdateProgressText()
        {
            while (true)
            {
                LoadingProgressText.text = $"{Mathf.RoundToInt(progressValue)}%";

                //await Task.Yield();
                yield return null;
            }
            
        }


        IEnumerator LoadingBarProcess()
        { 
            
            yield return FirebaseCheckDependencies.CheckAndFixDependencies();
            yield return GoogleAds.CheckAndFixDependencies();
            yield return ServerDate.GetDateFromSerer();

            yield return null;

            yield return StartLoadingAnimation();

            yield return LoadingAnimation(40f);
            yield return LoginProcess();

            yield return LoadingAnimation(60f);
            yield return LoadBattlepassRewards();

            yield return LoadingAnimation(70f);
            yield return LoadShopOfferts();


            AsyncOperation loadinsSceneOperation = SceneManager.LoadSceneAsync(GlobalSettingsManager.GetGlobalSettings().mainMenuScene);
            loadinsSceneOperation.allowSceneActivation = false;


            yield return LoadScene(loadinsSceneOperation);
            yield return LoadingAnimation(100f);

            yield return EndLoadingAnimation();


            loadinsSceneOperation.allowSceneActivation = true;

        }




        #region Animation


        IEnumerator StartLoadingAnimation()
        {
            animator.Play(startAnimationClip.name);
            //await Task.Delay( Mathf.RoundToInt(startAnimationClip.length * 1000) );
            yield return new WaitForSeconds(startAnimationClip.length);
        }

        float progressValue;
        float speed = 0.05f;
        float bulletSpeed => speed * 20f;
        IEnumerator LoadingAnimation(float _progressValue)
        {
           
            animator.SetFloat(SPEED_ANIMATION_KEY, speed);

            if (progressValue <= 0)
            {
                animator.Play(loadingAnimationClip.name);
                
                lineRenderer.positionCount = 2;
                lineRenderer.SetPosition(0, bulletStartPosition);
                lineRenderer.SetPosition(1, bulletStartPosition);
            }


            while (animator.GetCurrentAnimatorStateInfo(0).normalizedTime < loadingAnimationClip.length * _progressValue / 100f || (lineRenderer.GetPosition(1) - bulletStartPosition).magnitude < ( (bulletEndPosition - bulletStartPosition).magnitude * _progressValue / 100f) )
            {
                lineRenderer.SetPosition(1, lineRenderer.GetPosition(1) + bulletDirection.normalized * Time.deltaTime * bulletSpeed);
                //await Task.Yield();
                yield return null;

                progressValue = (lineRenderer.GetPosition(1) - bulletStartPosition).magnitude / (bulletEndPosition - bulletStartPosition).magnitude * 100f;
            }

                        
            progressValue = _progressValue;

        }

        IEnumerator EndLoadingAnimation()
        {
            animator.Play(endAnimationClip.name);


            DateTime startTime = DateTime.Now;
            while ((lineRenderer.GetPosition(1) - lineRenderer.GetPosition(0)).magnitude > 0.1f)
            {
                lineRenderer.SetPosition(0, lineRenderer.GetPosition(0) + bulletDirection.normalized * Time.deltaTime * bulletSpeed * 20f);
                //await Task.Yield();
                yield return null;
            }
            lineRenderer.positionCount = 0;

            while (animator.GetCurrentAnimatorStateInfo(0).normalizedTime < loadingAnimationClip.length)
                yield return null;


            yield return new WaitForSeconds(1.5f);
        }


        #endregion



        IEnumerator LoginProcess()
        {
            PlayerController player = null;

            if (PlayerController.GetLocalPlayer?.Invoke() == null)
            {
                GameObject playerObject = Instantiate(PlayerPrefab, Vector3.zero, Quaternion.identity);
                DontDestroyOnLoad(playerObject);
            }
            
            while (player == null)
            {
                player = PlayerController.GetLocalPlayer?.Invoke();

                yield return null;
            }
            
            yield return player.Login();

        }


        IEnumerator LoadShopOfferts() 
        {
            yield return ShopManager.DownloadDataFromServer();
        }// await ShopManager.DownloadDataFromServer();


        IEnumerator LoadBattlepassRewards() 
        {
            yield return BattlepassManager.DownloadDataFromServer();
        }// await BattlepassManager.DownloadDataFromServer();



        IEnumerator LoadScene(AsyncOperation loadinsSceneOperation)
        {
            DateTime startTime = DateTime.Now;

            while (loadinsSceneOperation.progress < 0.9f && (DateTime.Now - startTime).TotalSeconds < 5f )
                yield return null;

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
