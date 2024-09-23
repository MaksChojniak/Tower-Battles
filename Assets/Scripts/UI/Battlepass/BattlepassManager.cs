using System;
using System.Collections.Generic;
using System.Linq;
using System.Net.Sockets;
using System.Threading.Tasks;
using DefaultNamespace;
using MMK;
using MMK.ScriptableObjects;
using Org.BouncyCastle.Bcpg.OpenPgp;
using Player;
using Player.Database;
using TMPro;
using UI.Animations;
using UI.Shop;
using UnityEngine;
using UnityEngine.UI;

namespace UI.Battlepass
{
    public class BattlepassManager : MonoBehaviour
    {

        
        BattlepassProgress playerProgress;
        

        public BattlepassRewards BattlepassRewards;
        BattlepassReward[] battlepassRewards;


        [Space(18)]
        [Header("UI properties")]
        [SerializeField] GameObject TilesContainer;
        [SerializeField] BattlepassTierTile[] TilesUI;
        [SerializeField] GameObject PremiumBattlepassLockedMask;
        [SerializeField] bool UpdateTiles;
        [Space(12)]
        [Header("Info panel UI")]
        [SerializeField] TMP_Text ItemNameText;
        [SerializeField] TMP_Text RarityTextText;
        [SerializeField] TMP_Text CurrentLevelText;
        [SerializeField] TMP_Text TimeToEndBattlepassText;
        [SerializeField] GameObject ItemSpriteObject;
        [SerializeField] Image RarityImage;
        [SerializeField] Image RarityBarImage;
        [SerializeField] Image Mask;
        [SerializeField] GameObject ClaimButton;
        [SerializeField] GameObject ClaimedButton;
        [SerializeField] GameObject LockedButton;
        RotateableTower ItemRotateableTower => ItemSpriteObject.transform.GetComponentInChildren<RotateableTower>(true);
        Image ItemImage => ItemSpriteObject.transform.GetComponentInChildren<Image>(true);

        [Space(8)]
        [Header("Sprites")]
        [SerializeField] Sprite[] CoinSprites;
        [SerializeField] Sprite[] GemsSprites;

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

        

        // void Awake()
        void OnEnable()
        {
            RegisterHandlers();
            
            GetDataFromServer();
        }

        // void OnDestroy()
        void OnDisable()
        {
            UnregisterHandlers();
            
        }


        void OnValidate()
        {

            if (!UpdateTiles)
                return;
            UpdateTiles = false;
                    
            List<BattlepassTierTile> tiles = new List<BattlepassTierTile>();
        
            for (int i = 0; i < TilesContainer.transform.childCount; i++)
            {
                tiles.Add(TilesContainer.transform.GetChild(i).GetComponent<BattlepassTierTile>());
            }

            TilesUI = tiles.ToArray();
            
        }


        void Update()
        {

        }

        

        // async void OnEnable()
        // {
        //     await UpdateBattlapassUI();
        // }
        //
        // async void OnDisable()
        // {
        //     
        // }

        

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
            
            
            UpdateBattlapassUI();
            
                
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
            {
                playerProgress = new BattlepassProgress() { ExperienceCollected = 0, LastTierUnlocked = 0, ClaimedRewards = new List<BattlepassReward>(), HasPremiumBattlepass = false, };
                
                await Database.POST<BattlepassProgress>(playerProgress, playerID);
            }
            else
                playerProgress = result.Data;
            

            GetBattlepassRewards();

        }
        
        void GetBattlepassRewards()
        {
            List<BattlepassReward> _battlepassRewards = new List<BattlepassReward>();

            for (int tierIndex = 0; tierIndex < BattlepassRewards.rewards.Length; tierIndex++)
            {
                Rewards rewards = BattlepassRewards.rewards[tierIndex];

                BattlepassReward[] freeBattlepassTierRewards = GetBattlepassRewards(rewards.Battlepass);
                BattlepassReward[] premiumBattlepassTierRewards = GetBattlepassRewards(rewards.PremiumBattlepass);

                for (int rewardIndex = 0; rewardIndex < freeBattlepassTierRewards.Length; rewardIndex++)
                {
                    BattlepassReward reward = freeBattlepassTierRewards[rewardIndex];
                    reward.TierIndex = tierIndex;
                    reward.RewardIndex = rewardIndex;
                    reward.IsPremium = false;

                    _battlepassRewards.Add(reward);
                }
                
                for (int rewardIndex = 0; rewardIndex < premiumBattlepassTierRewards.Length; rewardIndex++)
                {
                    BattlepassReward reward = premiumBattlepassTierRewards[rewardIndex];
                    reward.TierIndex = tierIndex;
                    reward.RewardIndex = rewardIndex;
                    reward.IsPremium = true;
                    
                    _battlepassRewards.Add(reward);
                }
                

            }

            battlepassRewards = _battlepassRewards.ToArray();

        }
        
        

        
        async void UpdateBattlapassUI()
        {
            if(playerProgress == null)
                return;

             
            await Task.Yield();

            PremiumBattlepassLockedMask.SetActive(!playerProgress.HasPremiumBattlepass);

            CurrentLevelText.text = $"{playerProgress.LastTierUnlocked + 1}";
            
            string Days = TimeToEndBattlepass.Days > 0 ? $"  {TimeToEndBattlepass.Days} Days" : "";
            string Hours = TimeToEndBattlepass.Hours > 0 ? $"  {TimeToEndBattlepass.Hours} Hours" : "";
            TimeToEndBattlepassText.text = $"{StringFormatter.GetColoredText("Ends in:", GlobalSettings.Color("#00FFFF"))}{Days}{Hours}";

            for (int i = 0; i < BattlepassRewards.rewards.Length; i++)
            {
                int tierIndex = i;

                BattlepassReward[] _freeBattlepassRewards = battlepassRewards.Where(reward => reward.TierIndex == tierIndex && !reward.IsPremium).ToArray();
                BattlepassReward[] _premiumBattlepassRewards = battlepassRewards.Where(reward => reward.TierIndex == tierIndex && reward.IsPremium).ToArray();

                RewardUI[] freeRewardsUI = GetRewards(_freeBattlepassRewards);
                RewardUI[] premiumRewardsUI = GetRewards(_premiumBattlepassRewards);

                bool isUnlocked = i <= playerProgress.LastTierUnlocked;

                TilesUI[i].SetFreeBattlepassImages(freeRewardsUI, (int rewardIndex) => OnNormalRewardClicked(tierIndex, rewardIndex) );
                TilesUI[i].SetFreeTileLockedState(isUnlocked);

                TilesUI[i].SetPremiumBattlepassImages(premiumRewardsUI, (int rewardIndex) => OnPremiumRewardClicked(tierIndex, rewardIndex) );
                TilesUI[i].SetPremiumTileLockedState(isUnlocked);

                TilesUI[i].SetPremiumBattlepassLockedState(playerProgress.HasPremiumBattlepass);
                


                await Task.Yield();
            }
            
            
        }
        
        
        
        static BattlepassReward[] GetBattlepassRewards(Reward reward)
        {
            List<BattlepassReward> rewards = new List<BattlepassReward>();
            
            switch (reward.Type)
            {
                case RewardType.Coins:
                    rewards.Add(new BattlepassReward() { Type = RewardType.Coins, Coins = reward.Coins} );
                    break;
                case RewardType.Coins_Gems:
                    rewards.Add(new BattlepassReward() { Type = RewardType.Coins, Coins = reward.Coins} );
                    rewards.Add(new BattlepassReward() { Type = RewardType.Gems, Gems = reward.Gems} );
                    break;
                case RewardType.Coins_Skin:
                    rewards.Add(new BattlepassReward() { Type = RewardType.Skin, Skin = new TowerSkinSerializable(reward.Skin) } );
                    rewards.Add(new BattlepassReward() { Type = RewardType.Coins, Coins = reward.Coins} );
                    break;
                case RewardType.Gems:
                    rewards.Add(new BattlepassReward() { Type = RewardType.Gems, Gems = reward.Gems} );
                    break;
                case RewardType.Gems_Skin:
                    rewards.Add(new BattlepassReward() { Type = RewardType.Skin, Skin = new TowerSkinSerializable(reward.Skin) } );
                    rewards.Add(new BattlepassReward() { Type = RewardType.Gems, Gems = reward.Gems} );
                    break;
                case RewardType.Skin:
                    rewards.Add(new BattlepassReward() { Type = RewardType.Skin, Skin = new TowerSkinSerializable(reward.Skin) } );
                    break;
                case RewardType.Coins_Gems_Skin:
                    rewards.Add(new BattlepassReward() { Type = RewardType.Skin, Skin = new TowerSkinSerializable(reward.Skin) } );
                    rewards.Add(new BattlepassReward() { Type = RewardType.Coins, Coins = reward.Coins} );
                    rewards.Add(new BattlepassReward() { Type = RewardType.Gems, Gems = reward.Gems} );
                    break;
                case RewardType.None:
                    break;
            }

            return rewards.ToArray();
        }
        
        
        RewardUI[] GetRewards(BattlepassReward[] rewards)
        {
            List<RewardUI> rewardsUI = new List<RewardUI>();

            foreach (var reward in rewards)
            {
                RewardUI rewardUI = new RewardUI();
                
                switch (reward.Type)
                {
                    case RewardType.Coins:
                        // rewardsUI.Add(new RewardUI() { Prefab = SmallRewardPrefab, Sprite = GetCoinsSpriteByAmmount(reward.Coins), Amount = reward.Coins, } );
                        rewardUI = new RewardUI() { Prefab = SmallRewardPrefab, Sprite = GetCoinsSpriteByAmmount(reward.Coins), Amount = reward.Coins, };
                        break;
                    case RewardType.Gems:
                        // rewardsUI.Add(new RewardUI() { Prefab = SmallRewardPrefab, Sprite = GetGemsSpriteByAmmount(reward.Gems), Amount = reward.Gems, } );
                        rewardUI = new RewardUI() { Prefab = SmallRewardPrefab, Sprite = GetGemsSpriteByAmmount(reward.Gems), Amount = reward.Gems, };
                        break;
                    case RewardType.Skin:
                        // rewardsUI.Add(new RewardUI() { Prefab = LargeRewardPrefab, Sprite = TowerSkin.GetTowerSkinByID(reward.Skin.ID).TowerSprite, } );
                        rewardUI = new RewardUI() { Prefab = LargeRewardPrefab, Sprite = TowerSkin.GetTowerSkinByID(reward.Skin.ID).TowerSprite, };
                        break;
                    case RewardType.None:
                        break;
                }

                rewardUI.IsClaimed = playerProgress.IsClaimed(reward);
                    
                    
                rewardsUI.Add(rewardUI);
            }

            return rewardsUI.ToArray();
        }

        
        
        Sprite GetCoinsSpriteByAmmount(ulong amount)
        {
            
            if (amount <= 25)
                return CoinSprites[0];
            else
                return CoinSprites[1];
       
            return null;
        }
        
        Sprite GetGemsSpriteByAmmount(ulong amount)
        {
        
            if (amount <= 25)
                return GemsSprites[0];
            else
                return GemsSprites[1];
        
            return null;
        }
        
        
        
        
        // if (TimeToEndBattlepass.TotalMilliseconds < 0)
        // {
        //     playerProgress = null;
        //     await Database.DELETE<BattlepassProgress>(playerID);
        // }
        
#endregion




#region On Select Reward


        BattlepassReward lastSelectedReward = null;
        bool lastSelectedRewardIsNull => lastSelectedReward == null;
        
        
        
        void OnNormalRewardClicked(int tierIndex, int rewardIndex) => OnRewardClicked(tierIndex, rewardIndex, false);
        
        void OnPremiumRewardClicked(int tierIndex, int rewardIndex) => OnRewardClicked(tierIndex, rewardIndex, true);

        
        void OnRewardClicked(int tierIndex, int rewardIndex, bool isPremiumPreward)
        {
            BattlepassReward[] rewards = battlepassRewards.Where(_reward => _reward.IsPremium == isPremiumPreward).ToArray();   //isPremiumPreward ? premiumBattlepassRewards : freeBattlepassRewards;
            BattlepassReward reward = rewards.FirstOrDefault(_reward => _reward.TierIndex == tierIndex && _reward.RewardIndex == rewardIndex);

            bool rewardIsNull = reward == null;
            
            
            if (lastSelectedRewardIsNull && !rewardIsNull)
                OpenRewardPreviewPanel.PlayAnimation();
            else if (!lastSelectedRewardIsNull && rewardIsNull)
                CloseRewardPreviewPanel.PlayAnimation();

            lastSelectedReward = reward;
            
            if(rewardIsNull)
                return;

            string itemName = "";
            string rarityName = "";
            Color rarityColor = Color.white;
            SkinRarity itemRarity = SkinRarity.Default;



            bool isClaimed = playerProgress.IsClaimed(reward);
            bool isLocked = tierIndex > playerProgress.LastTierUnlocked || (isPremiumPreward && !playerProgress.HasPremiumBattlepass);

            ClaimedButton.SetActive(false);
            LockedButton.SetActive(false);
            ClaimButton.SetActive(false);
            if (isClaimed)
                ClaimedButton.SetActive(true);
            else if (isLocked)
                LockedButton.SetActive(true);
            else
                ClaimButton.SetActive(true);
            
            Mask.gameObject.SetActive(isClaimed || isLocked);
            
            
            ItemRotateableTower.gameObject.SetActive(reward.Type == RewardType.Skin);
            ItemImage.gameObject.SetActive(reward.Type != RewardType.Skin);
            
            
            
            switch (reward.Type)
            {
                case RewardType.Coins:
                    itemName = $"{reward.Coins} {StringFormatter.GetSpriteText(new SpriteTextData(){SpriteName = GlobalSettingsManager.GetGlobalSettings.Invoke().CoinsIconName, Size = "66%"})}";
                    
                    itemRarity = GetCoinsRarityByAmmount(reward.Coins);
                    rarityName = $"{itemRarity}";
                    rarityColor =  GlobalSettingsManager.GetGlobalSettings.Invoke().GetRarityColorByRarity(itemRarity);
                    
                    ItemImage.sprite = GetCoinsSpriteByAmmount(reward.Coins);
                    break;
                case RewardType.Gems:
                    itemName = $"{reward.Gems} {StringFormatter.GetSpriteText(new SpriteTextData(){SpriteName = GlobalSettingsManager.GetGlobalSettings.Invoke().GemsIconName, Size = "66%"})}";
                    
                    itemRarity = GetGemsRarityByAmmount(reward.Gems);
                    rarityName = $"{itemRarity}";
                    rarityColor =  GlobalSettingsManager.GetGlobalSettings.Invoke().GetRarityColorByRarity(itemRarity);
                    
                    ItemImage.sprite = GetGemsSpriteByAmmount(reward.Gems);
                    break;
                case RewardType.Skin:
                    TowerSkin skin = TowerSkin.GetTowerSkinByID(reward.Skin.ID);
                    itemName = $"{skin.SkinName} Skin";
                    
                    rarityName = $"{reward.Skin.Rarity}";
                    rarityColor = GlobalSettingsManager.GetGlobalSettings.Invoke().GetRarityColorBySkin(skin);
                    
                    ItemRotateableTower.SpawnTowerProcess?.Invoke( Tower.GetTowerBySkinID(reward.Skin.ID), skin);
                    break;  
            }


            ItemNameText.text = itemName;
            
            RarityTextText.text = $"{StringFormatter.GetColoredText("Rarity | ", Color.white)}{StringFormatter.GetColoredText($"{rarityName}", rarityColor * new Color(2f, 2f, 2f))}";
            RarityImage.color = rarityColor;// * new Color(1.65f, 1.65f, 1.65f);
            RarityBarImage.color = new Color(rarityColor.r * 0.55f, rarityColor.g * 0.55f, rarityColor.b * 0.55f);


            Debug.Log($"[Tier: {tierIndex}, Reward: {rewardIndex}, IsPremium: {isPremiumPreward}] is clicked ");


        }
        
        
#region Collect Rewards

        public async void ClaimReward()
        {
            if (lastSelectedRewardIsNull)
                return;

            playerProgress.ClaimedRewards.Add(lastSelectedReward);
            
            string playerID = PlayerController.GetLocalPlayerData().ID;
            await Database.POST<BattlepassProgress>(playerProgress, playerID);
            
            
            UpdateBattlapassUI();
            
            OnRewardClicked(lastSelectedReward.TierIndex, lastSelectedReward.RewardIndex, lastSelectedReward.IsPremium);
        }
        
#endregion
        
        
        static SkinRarity GetCoinsRarityByAmmount(ulong amount)
        {
            
            if (amount <= 25)
                return SkinRarity.Default;
            else
                return SkinRarity.Common;
  
        }
        
        static SkinRarity GetGemsRarityByAmmount(ulong amount)
        {
        
            if (amount <= 25)
                return SkinRarity.Common;
            else
                return SkinRarity.Rare;
            
        }
        
        
#endregion

        
        
        
        
        public async static Task AddBattlepassExperienceProgress(long XP)
        {
            string playerID = PlayerController.GetLocalPlayerData().ID;
            BattlepassProgress progress;
            
            var result = await Database.GET<BattlepassProgress>(playerID);
            
            // TODO chekc when is new event
            if (result.Status == DatabaseStatus.Error)
                progress = new BattlepassProgress() { ExperienceCollected = 0, LastTierUnlocked = 0, ClaimedRewards = new List<BattlepassReward>(), HasPremiumBattlepass = false, };
            else
                progress = result.Data;

            progress.ExperienceCollected += XP;
            progress.UpdateUnlockedTiers();

            await Database.POST<BattlepassProgress>(progress, playerID);
        }
        
        
        public async static Task AddBattlepassTierProgress(uint TiersCount)
        {
            string playerID = PlayerController.GetLocalPlayerData().ID;
            BattlepassProgress progress;
            
            var result = await Database.GET<BattlepassProgress>(playerID);
            
            // TODO chekc when is new event
            if (result.Status == DatabaseStatus.Error)
                progress = new BattlepassProgress() { ExperienceCollected = 0, LastTierUnlocked = 0, ClaimedRewards = new List<BattlepassReward>(), HasPremiumBattlepass = false, };
            else
                progress = result.Data;

            progress.LastTierUnlocked += TiersCount;

            await Database.POST<BattlepassProgress>(progress, playerID);
        }
        
        


    }
}
