using System;
using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using Ads;
using Assets.Scripts;
using MMK;
using Player;
using TMPro;
using UI.Animations;
using UI.Shop.Daily_Rewards.Scriptable_Objects;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using Random = UnityEngine.Random;
using Task = System.Threading.Tasks.Task;

namespace UI
{


    public class GameResult : MonoBehaviour
    {
        public delegate void OnEndGameDelegate();
        public static event OnEndGameDelegate OnEndGame;

        public delegate void ExitFromGameDelegate();
        public static ExitFromGameDelegate ExitFromGame;


        [Space(8)]
        [SerializeField] UIAnimation OpenWinPanel;
        [SerializeField] UIAnimation OpenLosePanel;

        [Space(16)]
        [SerializeField] TMP_Text CoinsRewardText;
        [SerializeField] TMP_Text XPRewardText;
        [SerializeField] TMP_Text GameInfoText;
        [SerializeField] Image AddTimeFillBar;
        [SerializeField] Button AdButton;


        int wavesCount;
        bool withRewardMultiplier;
        DateTime gameStartDate;


        void Awake()
        {
            DontDestroyOnLoad(this.gameObject);

            RegisterHandlers();

            wavesCount = 0;
            withRewardMultiplier = false;
        }


        void OnDestroy()
        {
            UnregisterHandlers();

        }


        void Start()
        {

        }


        void Update()
        {

        }



        #region Register & Unregister Handlers

        void RegisterHandlers()
        {
            GamePlayerInformation.OnDie += LoseProcess;
            WaveManager.OnEndAllWaves += WinProces;

            WaveManager.OnEndWave += OnEndWave;

            WaveManager.OnStartWave += OnStartWave;

            ExitFromGame += OnExitFromGame;

        }

        void UnregisterHandlers()
        {
            ExitFromGame -= OnExitFromGame;

            WaveManager.OnEndWave -= OnEndWave;

            WaveManager.OnEndAllWaves -= WinProces;
            GamePlayerInformation.OnDie -= LoseProcess;

        }

        #endregion



        void OnEndWave(uint waveReward) => wavesCount += 1;



        async void LoseProcess() => await OpenResultPanel(OpenLosePanel);
        // async void LoseProcess() => StartCoroutine(OpenResultPanel(OpenLosePanel));

        async void WinProces() => await OpenResultPanel(OpenWinPanel);
        // async void WinProces() => StartCoroutine(OpenResultPanel(OpenWinPanel));



        // async Task OpenResultPanel(UIAnimation animator)
        // {
        //     OnEndGame?.Invoke();
        //
        //     GameInfoText.text = $"Waves: {wavesCount}" + "    " + $"Time: {(DateTime.Now - gameStartDate).ToString(@"mm\:ss")}";
        //
        //    await Task.Delay(1000);
        //     
        //     animator.PlayAnimation();
        //
        //     await Task.Delay( Mathf.RoundToInt( animator.GetAnimationClip().length * 1000 ) );
        //
        //
        //     if (Random.Range(0, 100) % 2 == 0)
        //     {
        //         AddButton.SetActive(true);
        //
        //         // AddButton.GetComponent<Button>().onClick.AddListener( PlayAd );
        //         PlayAd();
        //         
        //         await Task.Delay(4 * 1000);
        //
        //     }
        //     else
        //     {
        //         await Task.Delay(4 * 1000);
        //     }
        //
        //
        //
        //     var openScene = SceneManager.LoadSceneAsync(GlobalSettingsManager.GetGlobalSettings.Invoke().mainMenuScene);
        //     while (!openScene.isDone)
        //         await Task.Yield();
        //     
        //     
        //     for (int i = 0; i < this.transform.childCount; i++)
        //     {
        //         Destroy(this.transform.GetChild(i).gameObject);
        //     }    
        //
        //
        //     await Task.Delay(1000);
        //     
        //     OpenRewardMessage();
        //
        // }


        async Task OpenResultPanel(UIAnimation animator)
        {
            GameReward reward = new GameReward(wavesCount);

            OnEndGame?.Invoke();

            GameInfoText.text = $"Waves: {wavesCount}" + "    " + $"Time: {(DateTime.Now - gameStartDate).ToString(@"mm\:ss")}";

            CoinsRewardText.text = $"{reward.Coins}";
            XPRewardText.text = $"{reward.XP}";

            await Task.Delay(1000);

            animator.PlayAnimation();

            await animator.WaitAsync();
            //await Task.Delay(Mathf.RoundToInt(animator.animationLenght * 1000));


            isTimePassed = false;
            adRewardDelivered = false;

            StartCoroutine(WatchAdAnimation());

            while (!isTimePassed && !adRewardDelivered)
                await Task.Yield();

            AdButton.interactable = false;
            AdButton.gameObject.SetActive(false);

            await Task.Delay(1000);

            await LoadMenuScene();

            reward = new GameReward(wavesCount, withRewardMultiplier);
            OpenRewardMessage(reward);
        }


        bool isTimePassed;

        IEnumerator WatchAdAnimation()
        {
            float time = 3;

            while (time >= 0)
            {
                if (isPlayingAd)
                    yield return new WaitUntil(() => !isPlayingAd);

                AddTimeFillBar.fillAmount = Mathf.Clamp01(time / 3f);

                yield return new WaitForSeconds(Time.deltaTime);
                time -= Time.deltaTime;
            }

            yield return null;

            isTimePassed = true;
        }




        async Task LoadMenuScene()
        {
            var openScene = SceneManager.LoadSceneAsync(GlobalSettingsManager.GetGlobalSettings.Invoke().mainMenuScene);
            while (!openScene.isDone)
                await Task.Yield();

            for (int i = 0; i < this.transform.childCount; i++)
            {
                Destroy(this.transform.GetChild(i).gameObject);
            }

            await Task.Delay(1000);

        }




        public async void OnExitFromGame()
        {
            await LoadMenuScene();

            GameReward reward = new GameReward(wavesCount).HalfReward();
            OpenRewardMessage(reward);
        }



        bool isPlayingAd;
        bool adRewardDelivered;

        public void PlayAd()
        {
            AdButton.interactable = false;
            AdButton.gameObject.SetActive(false);

            isPlayingAd = true;
            StopAllCoroutines();

            Debug.Log("Start Add");

            //GoogleAds.OnGetReward += (type, amount) =>
            //{
            //    withRewardMultiplier = true;
            //    AddTimeFillBar.fillAmount = 0;

            //    adRewardDelivered = true;

            //    Debug.Log("Add Reward Delivered");
            //};

            GoogleAds.OnCloseAd += () =>
            {
                isPlayingAd = false;

                Debug.Log("End Add");
            };

            GoogleAds.ShowAd(RewardType.None, 0, OnGetAdReward);

            void OnGetAdReward(Ads.Reward reward)
            {
                withRewardMultiplier = true;
                AddTimeFillBar.fillAmount = 0;

                adRewardDelivered = true;

                Debug.Log("Add Reward Delivered");

            }
        }

        void OpenRewardMessage(GameReward reward)
        {
            List<MessageProperty> properties = new List<MessageProperty>();

            string bonusCoinsText = "";
            if (reward.BonusCoins > 0)
                bonusCoinsText = $" + {StringFormatter.GetCoinsText(reward.BonusCoins, true, "66%")}";
            if (reward.Coins > 0)
                properties.Add(new MessageProperty() { Name = "Coins", Value = $"{StringFormatter.GetCoinsText(reward.Coins, true, "66%")}{bonusCoinsText}" });

            if (reward.XP > 0)
            {
                Color levelColor = GlobalSettingsManager.GetGlobalSettings.Invoke().GetCurrentLevelColor((ulong)PlayerController.GetLocalPlayer.Invoke().PlayerData.Level);
                string value = $@"{StringFormatter.GetColoredText($"{reward.XP}", levelColor)}{StringFormatter.GetSpriteText(new SpriteTextData()
                { SpriteName = $"{GlobalSettingsManager.GetGlobalSettings?.Invoke().LevelIconName}", WithColor = true, Color = levelColor, Size = "50%", WithSpaces = true, SpacesCount = 1 })}";
                properties.Add(new MessageProperty() { Name = "XP", Value = $"{value}" });
            }

            Message message = null;

            if (properties.Count > 0)
            {
                message = new Message();

                message.MessageType = MessageType.GameReward;
                message.Tittle = "Game Rewards";
                message.Properties = properties;
            }

            if (message != null)
                MessageQueue.AddMessageToQueue?.Invoke(message);


            if (reward.Coins > 0)
                PlayerData.ChangeCoinsBalance(reward.Coins + reward.BonusCoins);
            if (reward.XP > 0)
                PlayerData.ChangeExperience(reward.XP);


            Destroy(this.gameObject);
        }




        void OnStartWave()
        {
            WaveManager.OnStartWave -= OnStartWave;

            gameStartDate = DateTime.Now;
        }



    }



    public class GameReward
    {
        public long XP = 0;
        public long BonusXP = 0;
        public long Coins = 0;
        public long BonusCoins = 0;

        public float RewardMultiplier;

        public GameReward(int waveCount, bool withRewardMultiplier = false)
        {
            Coins = waveCount * 5;

            if (waveCount >= 5)
                Coins += 5;
            if (waveCount >= 10)
                Coins += 10;
            if (waveCount >= 15)
                Coins += 15;
            if (waveCount >= 20)
                Coins += 20;
            if (waveCount >= 25)
                Coins += 25;
            if (waveCount >= 30)
                Coins += 25;

            XP = Coins * 2;


            if (withRewardMultiplier)
                RewardMultiplier = 2f;
            else
                RewardMultiplier = 1f;


            BonusCoins = Mathf.RoundToInt(Coins * (RewardMultiplier - 1));
            // BonusXP = Mathf.RoundToInt(XP * (rewardMultiplier - 1) );

            // TODO calcuate rewards for pvp
        }

        public GameReward()
        {

        }


        public GameReward HalfReward()
        {
            Coins = Mathf.RoundToInt((float)Coins / 2);
            Coins -= Coins % 5;

            XP = Coins * 2;

            return new GameReward()
            {
                Coins = Coins,
                XP = XP
            };
        }


    }




}
