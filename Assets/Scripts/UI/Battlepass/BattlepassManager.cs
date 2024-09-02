using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using MMK;
using Player;
using Player.Database;
using UI.Animations;
using UI.Shop;
using UnityEngine;

namespace UI.Battlepass
{
    public class BattlepassManager : MonoBehaviour
    {

        
        BattlepassProgress playerProgress;
        

        public BattlepassRewards BattlepassRewards;


        [Space(18)]
        [Header("UI properties")]
        [HideInInspector] [SerializeField] GameObject TilesContainer;
        [SerializeField] BattlepassTierTile[] TilesUI;
        [Space(4)]
        [SerializeField] RectTransform LockedRewardsMask;
 
        [Space(8)]
        [Header("Prefabs")]
        [SerializeField] GameObject LargeRewardPrefab;
        [SerializeField] GameObject SmallRewardPrefab;

        [Space(8)]
        [Header("Animations")]
        [SerializeField] UIAnimation OpenRewardPreviewPanel;
        [SerializeField] UIAnimation CloseRewardPreviewPanel;

        
        DateTime dateFromServer = new DateTime();
        TimeSpan localTimeOffset = new TimeSpan();
        DateTime simulateDateOnServer => DateTime.Now - localTimeOffset;
        DateTime simulatedDateOnServerUTC => simulateDateOnServer.ToUniversalTime();

        

        void Awake()
        {
            RegisterHandlers();
            
            GetDataFromServer();
        }

        void OnDestroy()
        {
            UnregisterHandlers();
            
        }


        [ContextMenu(nameof(UpdateUI))]
        public void UpdateUI()
        {
            List<BattlepassTierTile> tiles = new List<BattlepassTierTile>();

            for (int i = 0; i < TilesContainer.transform.childCount; i++)
            {
                tiles.Add(TilesContainer.transform.GetChild(i).GetComponent<BattlepassTierTile>());
            }

            TilesUI = tiles.ToArray();
        }


        void Update()
        {
            UpdateBattlapassUI();
        }


        void OnApplicationFocus(bool hasFocus)
        {

            if (hasFocus)
                GetDataFromServer();

        }
        
        

#region Register & Unregister Handlers

        void RegisterHandlers()
        {
            
        }
        
        void UnregisterHandlers()
        {
            
        }
        
#endregion

        
        
        
        async void GetDataFromServer()
        {
            ServerDateReseult result = await ServerDate.GetDateFromServerAsync();
            dateFromServer = result.ServerDate;
            localTimeOffset = result.LocalTimeOffset;
            
            await GetPlayerProgress();
                
            await Task.Yield();

        }


#region Battlepass


        TimeSpan TimeToEndBattlepass => BattlepassRewards.CreatedDateUTC.AddDays(BattlepassRewards.DaysDuration) - simulatedDateOnServerUTC;

        async Task GetPlayerProgress()
        {
            string playerID = PlayerController.GetLocalPlayerData().ID;
            
            
            var result = await Database.GET<BattlepassProgress>(playerID);
            
            // TODO chekc when is new event
            if (result.Status == DatabaseStatus.Error)
                playerProgress = new BattlepassProgress() {LastTierUnlocked = -1, Rewards = new List<Reward>()};
            else
                playerProgress = result.Data;
            
        }


        async void UpdateBattlapassUI()
        {
            // TODO add battlepass UI when kacper commit  

            for (int i = 0; i < BattlepassRewards.rewards.Length; i++)
            {
                Rewards rewards = BattlepassRewards.rewards[i];

                RewardUI[] freeRewardsUI = GetRewards(rewards.Battlepass);
                RewardUI[] premiumRewardsUI = GetRewards(rewards.PremiumBattlepass);
                
                TilesUI[i].SetFreeBattlepassImages(freeRewardsUI);
                TilesUI[i].SetFreeTileLockedState(false);

                TilesUI[i].SetPremiumBattlepassImages(premiumRewardsUI);
                TilesUI[i].SetPremiumTileLockedState(false);
            }
            
        }


        
        
        
        RewardUI[] GetRewards(Reward reward)
        {
            List<RewardUI> rewardsUI = new List<RewardUI>();
            
            switch (reward.Type)
            {
                case RewardType.Coins:
                    rewardsUI.Add(new RewardUI() { Prefab = SmallRewardPrefab, Sprite = GetCoinsSpriteByAmmount(reward.Coins), } );
                    break;
                case RewardType.Coins_Gems:
                    rewardsUI.Add(new RewardUI() { Prefab = SmallRewardPrefab, Sprite = GetCoinsSpriteByAmmount(reward.Coins), } );
                    rewardsUI.Add(new RewardUI() { Prefab = SmallRewardPrefab, Sprite = GetGemsSpriteByAmmount(reward.Gems), } );
                    break;
                case RewardType.Coins_Skin:
                    rewardsUI.Add(new RewardUI() { Prefab = SmallRewardPrefab, Sprite = GetCoinsSpriteByAmmount(reward.Coins), } );
                    rewardsUI.Add(new RewardUI() { Prefab = LargeRewardPrefab, Sprite = reward.Skin.TowerSprite, } );
                    break;
                case RewardType.Gems:
                    rewardsUI.Add(new RewardUI() { Prefab = SmallRewardPrefab, Sprite = GetGemsSpriteByAmmount(reward.Gems), } );
                    break;
                case RewardType.Gems_Skin:
                    rewardsUI.Add(new RewardUI() { Prefab = SmallRewardPrefab, Sprite = GetGemsSpriteByAmmount(reward.Gems), } );
                    rewardsUI.Add(new RewardUI() { Prefab = LargeRewardPrefab, Sprite = reward.Skin.TowerSprite, } );
                    break;
                case RewardType.Skin:
                    rewardsUI.Add(new RewardUI() { Prefab = LargeRewardPrefab, Sprite = reward.Skin.TowerSprite, } );
                    break;
                case RewardType.Coins_Gems_Skin:
                    rewardsUI.Add(new RewardUI() { Prefab = SmallRewardPrefab, Sprite = GetCoinsSpriteByAmmount(reward.Coins), } );
                    rewardsUI.Add(new RewardUI() { Prefab = SmallRewardPrefab, Sprite = GetGemsSpriteByAmmount(reward.Gems), } );
                    rewardsUI.Add(new RewardUI() { Prefab = LargeRewardPrefab, Sprite = reward.Skin.TowerSprite, } );
                    break;
                case RewardType.None:
                    break;
            }

            return rewardsUI.ToArray();
        }

        Sprite GetCoinsSpriteByAmmount(ulong amount)
        {
            return null;
        }
        
        Sprite GetGemsSpriteByAmmount(ulong amount)
        {
            return null;
        }
        
        
        
        
        // if (TimeToEndBattlepass.TotalMilliseconds < 0)
        // {
        //     playerProgress = null;
        //     await Database.DELETE<BattlepassProgress>(playerID);
        // }
        
#endregion




    }
}
