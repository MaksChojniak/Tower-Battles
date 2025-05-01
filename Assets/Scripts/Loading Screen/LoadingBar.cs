using System;
using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using Ads;
using Mirror;
using MMK;
using Player;
using TMPro;
using UI.Animations;
using UI.Battlepass;
using UI.Shop;
using UnityEngine;
using UnityEngine.SceneManagement;
using Random = UnityEngine.Random;

namespace Loading_Screen
{
    public class LoadingBar : MonoBehaviour
    {
        [Header("Player Settings")]
        [SerializeField] GameObject PlayerPrefab;

        [Header("UI Properties (Maks Loading Bar)")]
        [SerializeField] Animator animator;
        [SerializeField] LineRenderer lineRenderer;
        [SerializeField] TMP_Text LoadingTittleText;
        [SerializeField] TMP_Text LoadingProgressText;

        [Header("Bullet Settings")]
        [SerializeField] Vector3 bulletStartPosition;
        [SerializeField] Vector3 bulletEndPosition;

        [Header("Animation Clips")]
        [SerializeField] AnimationClip startAnimationClip;
        [SerializeField] AnimationClip loadingAnimationClip;
        [SerializeField] AnimationClip endAnimationClip;

        const string SPEED_ANIMATION_KEY = "_speed";
        const float SPEED = 0.5f;
        const float BULLET_SPEED = SPEED * 50f;
        float progressValue;

        void Awake()
        {
            progressValue = 0f;
            LoadingProgressText.text = $"{Mathf.RoundToInt(progressValue)}%";
            LoadingTittleText.text = "Starting..";
        }

        void Start()
        {
            StartCoroutine(LoadingBarProcess());
        }

        IEnumerator LoadingBarProcess()
        {
            yield return StartLoadingAnimation();

            yield return TrackProgress(Prerequisites(), "Dependencies..", 0f, 10f);
            yield return TrackProgress(LoginProcess(), "User..", 10f, 25f);
            yield return TrackProgress(LoadShopOfferts(), "Special Offers..", 25f, 40f);
            yield return TrackProgress(LoadBattlepassRewards(), "Battlepass..", 40f, 55f);

            AsyncOperation mainMenuSceneOperation = SceneManager.LoadSceneAsync(GlobalSettingsManager.GetGlobalSettings().mainMenuScene);
            mainMenuSceneOperation.allowSceneActivation = false;
            yield return TrackProgress(LoadScene(mainMenuSceneOperation), "Finishing..", 55f, 100f);

            yield return EndLoadingAnimation();

            mainMenuSceneOperation.allowSceneActivation = true;
        }

        IEnumerator TrackProgress(IEnumerator task, String taskName, float startProgress, float endProgress)
        {
            float taskProgress = 0f;

            LoadingTittleText.text = taskName;

            Coroutine taskCoroutine = StartCoroutine(task);

            while (taskProgress < 1f)
            {
                taskProgress += Time.deltaTime; // Adjust this to match the task's duration

                progressValue = Mathf.Lerp(startProgress, endProgress, taskProgress);

                float lineRendererProgress = progressValue / 100f;
                Vector3 newPosition = Vector3.Lerp(bulletStartPosition, bulletEndPosition, lineRendererProgress);
                lineRenderer.SetPosition(1, newPosition);

                LoadingProgressText.text = $"{Mathf.RoundToInt(progressValue)}%";

                yield return null;
            }

            yield return taskCoroutine;
        }

        IEnumerator Prerequisites()
        {
            yield return FirebaseCheckDependencies.CheckAndFixDependencies();
            yield return GoogleAds.CheckAndFixDependencies();
            yield return ServerDate.GetDateFromSerer();
        }

        IEnumerator StartLoadingAnimation()
        {
            animator.Play(startAnimationClip.name);

            while (animator.IsPlaying())
                yield return null;

            // pull the trigger
            animator.SetFloat(SPEED_ANIMATION_KEY, SPEED);
            animator.Play(loadingAnimationClip.name);
            lineRenderer.positionCount = 2;
            lineRenderer.SetPosition(0, bulletStartPosition);
            lineRenderer.SetPosition(1, bulletStartPosition);

        }

        IEnumerator EndLoadingAnimation()
        {
            animator.Play(endAnimationClip.name);

            while ((lineRenderer.GetPosition(1) - lineRenderer.GetPosition(0)).sqrMagnitude > 0.5f)
            {
                Vector3 newPosition = Vector3.MoveTowards(
                    lineRenderer.GetPosition(0),
                    lineRenderer.GetPosition(1),
                    BULLET_SPEED * Time.deltaTime
                );
                lineRenderer.SetPosition(0, newPosition);

                yield return null;
            }
            lineRenderer.positionCount = 0;

            while (animator.IsPlaying()) yield return null;

        }

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
            while (Mathf.Abs(loadinsSceneOperation.progress - 0.9f) >= 0.05f)
                yield return null;
        }

    }
}
