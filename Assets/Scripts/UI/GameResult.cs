using System;
using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using Ads;
using MMK;
using Player;
using TMPro;
using UI.Animations;
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
        DateTime gameStartDate;


        void Awake()
        {
            DontDestroyOnLoad(this.gameObject);
            
            RegisterHandlers();

            wavesCount = 0;

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

        

        // async void LoseProcess() => await OpenResultPanel(OpenLosePanel);
        async void LoseProcess() => StartCoroutine(OpenResultPanel(OpenLosePanel));

        // async void WinProces() => await OpenResultPanel(OpenWinPanel);
        async void WinProces() => StartCoroutine(OpenResultPanel(OpenWinPanel));



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


        IEnumerator OpenResultPanel(UIAnimation animator)
        {
            OnEndGame?.Invoke();

            GameInfoText.text = $"Waves: {wavesCount}" + "    " + $"Time: {(DateTime.Now - gameStartDate).ToString(@"mm\:ss")}";
        
            yield return new WaitForSeconds(1);
            
            animator.PlayAnimation();

            yield return new WaitForSeconds(animator.GetAnimationClip().length);


            if (Random.Range(0, 100) % 2 == 0)
            {
                AddButton.SetActive(true);

                AddButton.GetComponent<Button>().onClick.AddListener( PlayAd );

                yield return new WaitForSeconds(4);

            }
            else
            {
                yield return new WaitForSeconds(4);
            }


            StartCoroutine(LoadMenuScene());
        }


        
        
        
        IEnumerator LoadMenuScene()
        {
            var openScene = SceneManager.LoadSceneAsync(GlobalSettingsManager.GetGlobalSettings.Invoke().mainMenuScene);
            while (!openScene.isDone)
                yield return null;
            
            
            for (int i = 0; i < this.transform.childCount; i++)
            {
                Destroy(this.transform.GetChild(i).gameObject);
            }    


            yield return new WaitForSeconds(1);
            
            OpenRewardMessage();
        }
        


        void PlayAd()
        {
            Debug.Log("Start Add");
                    
            GoogleAds.ShowAd();

            Debug.Log("End Add");
            
            // StartCoroutine(LoadMenuScene());
        }
        
        


        void OpenRewardMessage()
        {
            GameReward reward = new GameReward(wavesCount);

            List<MessageProperty> properties = new List<MessageProperty>();
            if(reward.Coins > 0)
                properties.Add(new MessageProperty(){ Name = "Coins", Value = $"{reward.Coins}"});
            if(reward.XP > 0)
                properties.Add(new MessageProperty(){ Name = "XP", Value = $"{reward.XP}"});
            Message message = null;

            if (properties.Count > 0)
            {
                message = new Message();
                
                message.Tittle = "Game Rewards";
                message.Properties = properties;
            }
            
            if(message != null)
                MessageQueue.AddMessageToQueue(message);
            
            
            if (reward.Coins > 0)
                PlayerData.ChangeBalance(reward.Coins);
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
        public long Coins = 0;


        public GameReward(int waveCount)
        {
            
            if (waveCount < 5)
            {
                Coins = 0;
                XP = 0;
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
            
            // TODO calcuate rewards for pvp
        }
        
    }
    
    
    
    
}
