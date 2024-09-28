using System;
using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using Ads;
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
        
        
        [Space(8)]
        [SerializeField] UIAnimation OpenWinPanel;
        [SerializeField] UIAnimation OpenLosePanel;

        [Space(16)]
        [SerializeField] TMP_Text GameInfoText;
        [SerializeField] GameObject AddButton;


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

        }

        void UnregisterHandlers()
        {
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


        async Task  OpenResultPanel(UIAnimation animator)
        {
            OnEndGame?.Invoke();

            GameInfoText.text = $"Waves: {wavesCount}" + "    " + $"Time: {(DateTime.Now - gameStartDate).ToString(@"mm\:ss")}";

            await Task.Delay(1000);

            animator.PlayAnimation();

            await Task.Delay(Mathf.RoundToInt(animator.animationLenght * 1000));

            
            isAdWatchedOrTimePassed = false;

            WatchAdAnimationCoroutine = StartCoroutine(WatchAdAnimation());

            while (!isAdWatchedOrTimePassed)
                await Task.Yield();
            
            await Task.Delay(1000);

            await LoadMenuScene();
        }


        bool isAdWatchedOrTimePassed;

        Coroutine WatchAdAnimationCoroutine;
        IEnumerator WatchAdAnimation()
        {
            float time = 0;

            while (time <= 3)
            {
                // TODO apply   fillAmountBar.Amount = Mathf.Clamp01(time / 3f);

                yield return new WaitForSeconds(Time.deltaTime);
                time += 1;
            }
            
            

            isAdWatchedOrTimePassed = true;
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
            
            OpenRewardMessage();
        }


        
        void PlayAd()
        {
            StopCoroutine(WatchAdAnimationCoroutine);
            WatchAdAnimationCoroutine = null;
            
            Debug.Log("Start Add");
                    
            GoogleAds.ShowAd(RewardType.None);
            
            
            GoogleAds.OnGetReward += () =>
            {
                withRewardMultiplier = true;
                
                Debug.Log("End Add");

                isAdWatchedOrTimePassed = true;
            };
            
        }
        
        


        void OpenRewardMessage()
        {
            GameReward reward = new GameReward(wavesCount, withRewardMultiplier);

            List<MessageProperty> properties = new List<MessageProperty>();
            
            string bonusCoinsText = "";
            if(reward.BonusCoins > 0)
                bonusCoinsText = $" + {StringFormatter.GetCoinsText(reward.BonusCoins, true, "66%")}";
            if(reward.Coins > 0)
                properties.Add(new MessageProperty(){ Name = "Coins", Value = $"{StringFormatter.GetCoinsText(reward.Coins, true, "66%")}{bonusCoinsText}"});

            if (reward.XP > 0)
            {
                Color levelColor = GlobalSettingsManager.GetGlobalSettings.Invoke().GetCurrentLevelColor((ulong)PlayerController.GetLocalPlayer.Invoke().PlayerData.Level);
                string value = $@"{StringFormatter.GetColoredText($"{reward.XP}", levelColor)}{StringFormatter.GetSpriteText(new SpriteTextData()
                    {SpriteName = $"{GlobalSettingsManager.GetGlobalSettings?.Invoke().LevelIconName}", WithColor = true, Color = levelColor, Size = "50%", WithSpaces = true, SpacesCount = 1 })}";
                properties.Add(new MessageProperty(){ Name = "XP", Value = $"{value}"});
            }
            
            Message message = null;

            if (properties.Count > 0)
            {
                message = new Message();
                
                message.Tittle = "Game Rewards";
                message.Properties = properties;
            }
            
            if(message != null)
                MessageQueue.AddMessageToQueue?.Invoke(message);
            
            
            if (reward.Coins > 0)
                PlayerData.ChangeCoinsBalance(reward.Coins);
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

        public GameReward(int waveCount, bool withRewardMultiplier)
        {
            
            if (waveCount < 5)
            {
                Coins = 10;
                XP = 20;
            }
            else if (waveCount <= 10)
            {
                Coins = 20;
                XP = 40;
            }
            else if (waveCount <= 15)
            {
                Coins = 30;
                XP = 70;
            }
            else if (waveCount <= 20)
            {
                Coins = 50;
                XP = 110;
            }
            else if (waveCount <= 25)
            {
                Coins = 80;
                XP = 170;
            }
            else
            {
                Coins = 100;
                XP = 250;
            }

            
            float[] multipliers = new float[] { 1.5f, 2f};
            if (withRewardMultiplier)
                RewardMultiplier = multipliers[Random.Range(0, multipliers.Length)];
            else
                RewardMultiplier = 1f;

            
            BonusCoins = Mathf.RoundToInt(Coins * (RewardMultiplier - 1) );
            // BonusXP = Mathf.RoundToInt(XP * (rewardMultiplier - 1) );
            
            // TODO calcuate rewards for pvp
        }
        
    }
    
    
    
    
}
