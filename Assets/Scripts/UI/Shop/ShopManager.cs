using System;
using System.Collections.Generic;
using System.Globalization;
using System.Linq;
using System.Net;
using System.Net.Http;
using UnityEngine;
using UnityEngine.UI;
using System.Threading.Tasks;
using DefaultNamespace;
using Firebase.Storage;
using MMK;
using MMK.Extensions;
using MMK.ScriptableObjects;
using Newtonsoft.Json;
using Player;
using Player.Database;
using TMPro;
using UI.Shop.Daily_Rewards;
using UI.Shop.Daily_Rewards.Scriptable_Objects;

using DateTime = System.DateTime;
using Random = Unity.Mathematics.Random;
using Time = UnityEngine.Time;


namespace UI.Shop
{

    [Serializable]
    public class SkinsForSaleUIProperties
    {
        public Color CommonColor;
        public Color RareColor;
        public Color EpicColor;
        public Color ExclusiveColor;

        public BuySkinConfirmationPanel ConfirmationPanel;
    }
    
    [Serializable]
    public class DailyRewardUIProperties
    {
        public Color ClaimedColor;
        public Color ClaimColor;
        public Color LockedColor;
        [Space(8)]
        public Sprite ExerienceIcon;
        public Sprite CoinsIcon;
    }
    
    
    
    public class ShopManager : MonoBehaviour
    {

        SkinsForSale skinsForSale = new SkinsForSale();
        DailyRewards dailyRewards = new DailyRewards();
        CoinsOffert[] CoinsOfferts = new CoinsOffert[COINS_OFFERTS_COUNT];

        
        [Space(8)]
        [Header("UI Properties")]
        [SerializeField] ScrollRect scrollRect;
        [Space(16)]
        [SerializeField] SkinsForSaleUIProperties skinsForSaleUIProperties;
        [SerializeField] SkinForSaleUI[] skinsForSalePanels;
        [SerializeField] TMP_Text offertsTimerText;
        [Space(8)]
        [SerializeField] DailyRewardUIProperties dailyRewardsUIProperties;
        [SerializeField] DailyRewardUI[] dalyRewardsPanels;
        [Space(8)]
        [SerializeField] GameObject[] coinsOffertsPanels;
        [Space(16)]
        [SerializeField] 

        public const int SKINS_FOR_SALE_COUNT = 3;
        public const int DAILY_REWARDS_COUNT = 7;
        public const int COINS_OFFERTS_COUNT = 4;



        void Awake()
        {
            RegisterHandlers();

            GetDataFromServer();
        }

        void OnDestroy()
        {
            UnregisterHandlers();

        }

        
        
        void OnEnable()
        {
            
        }

        void OnDisable()
        {

        }


        
        void Update()
        {
            UpdateSkinsForSaleUI();
                
            UpdateDailyRewardsUI();

            UpdateCoinsOffertsUI();
        }

        
        void OnApplicationQuit()
        {
            
            
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




        
#region Scroll Animation

        [ContextMenu(nameof(CoinsScrollRect))]
        public void CoinsScrollRect()
        {
            //scrollRect.verticalNormalizedPosition = 0f;
            ScrollBarAnimation(0f);
        }

        [ContextMenu(nameof(DailyRewardScrollRect))]
        public void DailyRewardScrollRect()
        {

            // scrollRect.verticalNormalizedPosition = Mathf.Lerp(1f, 0.275f, );
            ScrollBarAnimation(0.275f);


        }


        async void ScrollBarAnimation(float targetPosition)
        {
            float speed = 5f;

            while (Mathf.Abs(scrollRect.verticalNormalizedPosition - targetPosition) >= 2 * Time.deltaTime )
            {
                float currentDistance = Mathf.Abs(scrollRect.verticalNormalizedPosition - targetPosition);
                int direction = ((targetPosition - scrollRect.verticalNormalizedPosition) >= 0 ? 1 : -1);

                if (currentDistance > 0.1f && speed > 1f)
                    speed *= 0.9f;

                scrollRect.verticalNormalizedPosition += direction * speed * Time.deltaTime;      //Mathf.Lerp(scrollRect.verticalNormalizedPosition, targetPosition, 0.05f);

                await Task.Yield();
            }

            scrollRect.verticalNormalizedPosition = targetPosition;
        }
        
#endregion


        
        
        
#region Get Offerts From Server
        
        
        async void GetDataFromServer()
        {
            ServerDateReseult result = await ServerDate.GetDateFromServerAsync();
            dateFromServer = result.ServerDate;
            localTimeOffset = result.LocalTimeOffset;

            List<Task> tasks = new List<Task>()
            {
                GetSkinsForSaleFromServerAsync(),
                GetDailyRewardsFromServerAsync(),
                GetCoinsOffertsFromServerAsync()
            };
            await Task.WhenAll(tasks);
                
            await Task.Yield();

        }
        
        
        
#region Skins Offerts


        [SerializeField] TowerSkin[] avaiableSkins;
        
        void GetSkinsForSaleFromServer()
        {

        }

        async Task GetSkinsForSaleFromServerAsync()
        {
            var result = await Database.GET<SkinsForSale>();

            if (result.Status == DatabaseStatus.Error)
                skinsForSale = await CalculateNewSkinsForSale(); // Calculate new offerts
            else if ((simulatedDateOnServerUTC - new DateTime(result.Data.CreateDateUTCTicks)).TotalDays >= 1)
                skinsForSale = await CalculateNewSkinsForSale(result.Data); // Calculate new offerts
            else
                skinsForSale = result.Data;
            
        }


        void UpdateSkinsForSaleUI()
        {
            DateTime createTimeUTC = new DateTime(skinsForSale.CreateDateUTCTicks);
            TimeSpan offsetToNextOfferts = createTimeUTC.AddDays(1) - simulatedDateOnServerUTC;

            offertsTimerText.text = $"Next in: {offsetToNextOfferts.Hours}h {offsetToNextOfferts.Minutes}min";
            
            for (int i = 0; i < skinsForSale.skinsForSale.Length; i++)
            {
                skinsForSalePanels[i].UpdateUI(skinsForSale.skinsForSale[i], skinsForSaleUIProperties);
            }
            
        }



        [ContextMenu(nameof(CalculateNewSkinsForSale))]
        async Task<SkinsForSale> CalculateNewSkinsForSale(SkinsForSale oldOfferts = null)
        {
            Random random = new Random((uint)UnityEngine.Random.Range(0, 100));
            
            var createDateUTC = simulatedDateOnServerUTC.AddHours(8 - simulatedDateOnServerUTC.Hour).AddMinutes(-simulatedDateOnServerUTC.Minute).AddSeconds(-simulatedDateOnServerUTC.Second);
            if(simulatedDateOnServerUTC.Hour < 8)
                createDateUTC = simulatedDateOnServerUTC.AddDays(-1).AddHours(8 - simulatedDateOnServerUTC.Hour).AddMinutes(-simulatedDateOnServerUTC.Minute).AddSeconds(-simulatedDateOnServerUTC.Second);
            
            SkinsForSale _skinsForSale = new SkinsForSale()
            {
                skinsForSale = new SkinOffert[SKINS_FOR_SALE_COUNT] {new SkinOffert(), new SkinOffert(), new SkinOffert()},
                CreateDateUTCTicks = createDateUTC.Ticks 
            };
            List<SkinOffert> offerts = null;
            
            var result = await Database.GET<SkinOffert[]>();

            if (result.Status == DatabaseStatus.Error)
            {
                List<SkinOffert> generatedOfferts = GenerateAllSkins().ToList();
                
                await Database.POST<SkinOffert[]>(generatedOfferts.ToArray());

                await Task.Yield();

                return await CalculateNewSkinsForSale(oldOfferts);
            }
            else
            {
                offerts = result.Data.ToList();
            }

            if (oldOfferts != null)
            {

                for (int i = 0; i < oldOfferts.skinsForSale.Length; i++)
                {
                    int index = offerts.FindIndex(element => element.TowerSkinID == oldOfferts.skinsForSale[i].TowerSkinID);
                    if (index >= 0)
                        offerts.RemoveAt(index);
                }

            }

            for (int i = 0; i < SKINS_FOR_SALE_COUNT; i++)
            {
                int index = random.NextInt(0, offerts.Count);
                
                _skinsForSale.skinsForSale[i] = offerts[index];
                
                offerts.RemoveAt(index);
            }

            
            await Database.POST<SkinsForSale>(_skinsForSale);
            
            
            return _skinsForSale;
        }


        [ContextMenu(nameof(GenerateAllSkins))]
        SkinOffert[] GenerateAllSkins()
        {
            List<SkinOffert> offerts = new List<SkinOffert>();

            foreach (var avaiableSkin in avaiableSkins)
            {
                if(avaiableSkin.Rarity != SkinRarity.Common)
                    offerts.Add(new SkinOffert() { TowerSkinID = avaiableSkin.ID });
            }


            //offert.TowerSkin.Rarity != SkinRarity.Common)).ToList();
            
            Debug.Log(JsonConvert.SerializeObject(offerts.ToArray()));

            return offerts.ToArray();
        }
        
        
        // async Task SaveSkinsForSale()
        // {
        //     await Database.POST<SkinsForSale>(skinsForSale);
        // }

        public void BuySkinFromOffert(int offertIndex)
        {
            SkinOffert skinOffert = skinsForSale.skinsForSale[offertIndex];
            
            Tower tower = Tower.GetTowerBySkinID(skinOffert.TowerSkinID);
            if(tower == null)
                return;

            TowerSkin skin = TowerSkin.GetTowerSkinByID(skinOffert.TowerSkinID);
            if(skin == null)
                return;

            if (skin.IsUnlocked)
            {
                WarningSystem.ShowWarning(WarningSystem.WarningType.SkinIsUnlocked);
                return;
            }

            // if (PlayerData.GetBalance() < skin.UnlockPrice)
            // {
            //     WarningSystem.ShowWarning(WarningSystem.WarningType.NotEnoughtMoney);
            //     return;
            // }
            //
            // PlayerData.ChangeBalance(-1 * (long)skin.UnlockPrice);

            skinsForSaleUIProperties.ConfirmationPanel.Open(tower, skin);
        }
        
        
#endregion



#region Daily Rewards Offerts

        [SerializeField] RewardObject[] avaiableRewards;
        
        DateTime dateFromServer = new DateTime();
        TimeSpan localTimeOffset = new TimeSpan();
        DateTime simulateDateOnServer => DateTime.Now - localTimeOffset;
        DateTime simulatedDateOnServerUTC => simulateDateOnServer.ToUniversalTime();
        
        
        
        
        
        
        void GetDailyRewardsFromServer()
        {
            string playerID = PlayerController.GetLocalPlayerData().ID;

            var result = Database.GET<DailyRewards>(playerID).Result;

            if (result.Status == DatabaseStatus.Error)
            {
                dailyRewards = CalculateNewDailyRewards();
                return;
            }

            if (result.Data.LastCalimedRewardIndex + 1 >= DAILY_REWARDS_COUNT)
            {
                dailyRewards = CalculateNewDailyRewards();
                return;
            }

            dailyRewards = result.Data;
        }
        
        async Task GetDailyRewardsFromServerAsync()
        {
            string playerID = PlayerController.GetLocalPlayerData().ID;

            var result = await Database.GET<DailyRewards>(playerID);

            if (result.Status == DatabaseStatus.Error)
                dailyRewards = CalculateNewDailyRewards(true);
            else if (result.Data.LastCalimedRewardIndex + 1 >= DAILY_REWARDS_COUNT)
                dailyRewards = CalculateNewDailyRewards();
            else
                dailyRewards = result.Data;
            

            await Database.POST<DailyRewards>(dailyRewards, playerID);
        }

        
        void UpdateDailyRewardsUI()
        {

            for (int i = 0; i < dailyRewards.Rewards.Length; i++)
            {
                // Reward reward = dailyRewards.Rewards[i];
                //
                // RewardType type = RewardType.None;
                // ulong value = 0;
                //
                // if (reward.Type == RewardType.Coins)
                // {
                //     value = reward.CoinsBalance;
                //     type = reward.Type;
                // }
                // else if (reward.Type == RewardType.Experience)
                // {
                //     value = reward.XP;
                //     type = reward.Type;
                // }
                //
                //
                //
                // UpdateDailyRewardPanelUI(i, type, value);
                dalyRewardsPanels[i].UpdateUI(i, dailyRewards, dailyRewardsUIProperties, simulatedDateOnServerUTC);
            }
            
            
        }


        
        public async void ClaimReward(int index)
        {
            TimeSpan timeToClaim = new DateTime(dailyRewards.LastClaimDateTicks).AddDays(1) - simulatedDateOnServerUTC;
            bool canClaim = dailyRewards.LastCalimedRewardIndex + 1 == index && (timeToClaim.TotalSeconds <= 0 );
            
            if(!canClaim)
                return;

            dailyRewards.LastClaimDateTicks = simulatedDateOnServerUTC.Ticks;
            dailyRewards.LastCalimedRewardIndex += 1;
            
            
            GiveDailyReward(dailyRewards.Rewards[dailyRewards.LastCalimedRewardIndex]);
            

            if (dailyRewards.LastCalimedRewardIndex + 1 >= DAILY_REWARDS_COUNT)
                dailyRewards = CalculateNewDailyRewards();
            
            
            string playerID = PlayerController.GetLocalPlayerData?.Invoke()?.ID;
            await Database.POST<DailyRewards>(dailyRewards, playerID);
        }


        void GiveDailyReward(Reward reward)
        {
            
            switch (reward.Type)
            {
                case RewardType.Coins:
                    PlayerData.ChangeBalance((long)reward.CoinsBalance);
                    break;
                case RewardType.Experience:
                    PlayerData.ChangeExperience((long)reward.XP);
                    break;
            }
            
        }
        

        DailyRewards CalculateNewDailyRewards(bool isFirstDailyReward = false)
        {
            Random random = new Random((uint)UnityEngine.Random.Range(0, 100));

            Reward[] _rewards = new Reward[DAILY_REWARDS_COUNT];
            for (int i = 0; i < DAILY_REWARDS_COUNT; i++)
            {
                RewardObject[] _rewardsObjects = Array.Empty<RewardObject>();
                switch (i)
                {
                    case 0:
                        _rewardsObjects = avaiableRewards
                            .Where(element => 
                                element.RewardRarity == RewardRarity.Common )
                            .ToArray();
                        break;
                    case 1:
                        _rewardsObjects = avaiableRewards
                            .Where(element =>
                                element.RewardRarity == RewardRarity.Common || 
                                element.RewardRarity == (random.NextInt() % 20 == 0 ? RewardRarity.Common : RewardRarity.Uncommon) )
                            .ToArray();
                        break;
                    case 2:
                        _rewardsObjects = avaiableRewards
                            .Where(element => 
                                element.RewardRarity == RewardRarity.Common || 
                                element.RewardRarity == (random.NextInt() % 5 == 0 ? RewardRarity.Uncommon : RewardRarity.Common) )
                            .ToArray();
                        break;
                    case 3:
                        _rewardsObjects = avaiableRewards
                            .Where(element => 
                                element.RewardRarity == RewardRarity.Uncommon )
                            .ToArray();
                        break;
                    case 4:
                        _rewardsObjects = avaiableRewards
                            .Where(element => 
                                element.RewardRarity == RewardRarity.Uncommon || 
                                element.RewardRarity == (random.NextInt() % 5 == 0 ? RewardRarity.Rare : RewardRarity.Uncommon) )
                            .ToArray();
                        break;
                    case 5:
                        _rewardsObjects = avaiableRewards
                            .Where(element => 
                                element.RewardRarity == RewardRarity.Rare || 
                                element.RewardRarity == (random.NextInt() % 5 == 0 ? RewardRarity.Epic : RewardRarity.Rare) )
                            .ToArray();
                        break;
                    case 6:
                        _rewardsObjects = avaiableRewards
                            .Where(element => 
                                element.RewardRarity == RewardRarity.Epic ||
                                element.RewardRarity == (random.NextInt() % 10 == 0 ? RewardRarity.Legendary : RewardRarity.Epic) || 
                                element.RewardRarity == (random.NextInt() % 25 == 0 ? RewardRarity.Exclusive : RewardRarity.Epic) )
                            .ToArray();
                        break;
                }

                RewardObject _rewardObject = _rewardsObjects[UnityEngine.Random.Range(0, _rewardsObjects.Length)];

                Reward _reward = new Reward()
                {
                    Type = _rewardObject.RewardType,
                    CoinsBalance = _rewardObject.Coins,
                    XP = _rewardObject.Experience,
                };

                _rewards[i] = _reward;
            }

            DailyRewards rewards = new DailyRewards()
            {
                LastClaimDateTicks = isFirstDailyReward ? simulatedDateOnServerUTC.AddDays(-1).Ticks : simulatedDateOnServerUTC.Ticks,
                LastCalimedRewardIndex = -1,
                Rewards = _rewards
            };


            return rewards;
        }


        // async Task SaveDailyRewards()
        // {
        //     string playerID = PlayerController.GetLocalPlayerData?.Invoke()?.ID;
        //     await Database.POST<DailyRewards>(dailyRewards, playerID);
        // }
        
        
#endregion
        
        
        
#region Coins Offerts

        
        void GetCoinsOffertsFromServer()
        {

        }

        async Task GetCoinsOffertsFromServerAsync()
        {

        }


        void UpdateCoinsOffertsUI()
        {
            
        }
        
        
#endregion
        
        
        
        
#endregion



        
    }
    
    
}