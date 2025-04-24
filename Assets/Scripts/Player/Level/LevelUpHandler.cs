using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using MMK;
using Player;
using TMPro;
using UI.Animations;
using UnityEngine;

namespace UI
{
    public class LevelUpHandler : MonoBehaviour
    {

        [SerializeField] LevelsRewards LevelsRewards;

        [Space(18)]
        [SerializeField] TMP_Text LevelText;
        [SerializeField] TMP_Text RewardText;

        [Space]
        [SerializeField] AudioSource StarAudioSource;
        
        [Space]
        [SerializeField] UIAnimation OpenPanelAnimation;
        [SerializeField] UIAnimation LevelUpAnimation;
        [SerializeField] UIAnimation ClosePanelAnimation;


        void Awake()
        {
            RegisterHandlers();
            
        }

        void OnDestroy()
        {
            UnregisterHandlers();
            
        }


#region Register & Unregister Handlers

        void RegisterHandlers()
        {
            PlayerData.OnLevelUp += OnLevelUp;

        }
        
        void UnregisterHandlers()
        {
            PlayerData.OnLevelUp -= OnLevelUp;
            
        }
        
#endregion


        LevelsReward reward;

        async void OnLevelUp(uint Level)
        {

            if (LevelsRewards.LevelExist(Level))
            {
                reward = LevelsRewards.GetRewardByLevel(Level);
                await ShowLevelUpPanel();
            }
            else
            {
                reward = new LevelsReward() { Level = Level };
                await ShowLevelUpPanel();
            }

        }


        async Task ShowLevelUpPanel()
        {
            LevelText.text = $"{reward.Level-1}";
            
            string rewardText = "";
            if (reward.CoinsRewards > 0)
                rewardText += $"{StringFormatter.GetCoinsText(reward.CoinsRewards, true, "66%")}";
            if (reward.GemsRewards > 0)
                rewardText += $"{StringFormatter.GetGemsText(reward.GemsRewards, true, "66%")}";
            RewardText.text = rewardText;

            
            OpenPanelAnimation.PlayAnimation();
            await OpenPanelAnimation.WaitAsync();
            //await Task.Delay(Mathf.RoundToInt(OpenPanelAnimation.animationLenght * 1000));
            
            StarAudioSource.Play();
            
            LevelUpAnimation.PlayAnimation();
            await LevelUpAnimation.WaitAsync();
            //await Task.Delay(Mathf.RoundToInt(LevelUpAnimation.animationLenght * 1000));

            await Task.Delay(3000);
            
            Close();
        }

        public void UpdateLevel() => LevelText.text = $"{reward.Level}";
        

        void GiveRewards()
        {
            List<MessageProperty> prperties = new List<MessageProperty>();

            if (reward.CoinsRewards > 0)
            {
                PlayerData.ChangeCoinsBalance(reward.CoinsRewards);
                    
                prperties.Add(new MessageProperty(){Name = "Coins", Value = $"{StringFormatter.GetCoinsText(reward.CoinsRewards, true, "66%")}"});
            }
            if (reward.GemsRewards > 0)
            {
                PlayerData.ChangeGemsBalance(reward.GemsRewards);
                    
                prperties.Add(new MessageProperty(){Name = "Gems", Value = $"{StringFormatter.GetGemsText(reward.GemsRewards, true, "66%")}"});
            }

            if (prperties.Count <= 0)
                return;

            MessageQueue.AddMessageToQueue?.Invoke(new Message()
            {
                MessageType = MessageType.Normal,
                Tittle = "Level Up Rewards",
                Properties = prperties,
            });
            
        }

        public async void Close()
        {
            ClosePanelAnimation.PlayAnimation();
            await ClosePanelAnimation.WaitAsync();
            //await Task.Delay(Mathf.RoundToInt(ClosePanelAnimation.animationLenght * 1000));

            GiveRewards();
        }



    }
}
