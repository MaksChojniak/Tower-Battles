using System;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;
using System.Threading.Tasks;
using Ads;
using DefaultNamespace;
using MMK;
using MMK.ScriptableObjects;
using Newtonsoft.Json;
using Player;
using Player.Database;
using TMPro;
using UI.Battlepass;
using UI.Shop.Daily_Rewards;
using UI.Shop.Daily_Rewards.Scriptable_Objects;
using DateTime = System.DateTime;
using Random = Unity.Mathematics.Random;
using Reward = UI.Shop.Daily_Rewards.Reward;
using RewardType = UI.Shop.Daily_Rewards.Scriptable_Objects.RewardType;
using Task = System.Threading.Tasks.Task;


namespace UI.Shop
{

    [Serializable]
    public class SkinsForSaleUIProperties
    {
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
    
    
    public enum ScrollTarget : int
    {
        Skins = 0,
        DailyRewards = 2482,//2700,
        Coins = 6204,//6850,
        Tickets = 7955,//8900,
        Gems = 10000,
    }
    
    
    public class ShopManager : MonoBehaviour
    {

        static SkinsForSale skinsForSale = new SkinsForSale();
        static DailyRewards dailyRewards = new DailyRewards();
        static AdsRewards adsRewards = new AdsRewards();

        [Header("Const Data")]
        [SerializeField] BattlepassTicket[] BattlepassTickets;
        [SerializeField] GemsExchange[] GemsExchangeOfferts;
        [Space(18)]
        [Header("UI Properties")]
        [SerializeField] ScrollRect scrollRect;
        [Space(16)]
        [Header("   Skins For Sale UI")]
        [SerializeField] SkinsForSaleUIProperties skinsForSaleUIProperties;
        [SerializeField] SkinForSaleUI[] skinsForSalePanels;
        [SerializeField] TMP_Text offertsTimerText;
        [Space(8)]
        [Header("   Daily Rewards UI")]
        [SerializeField] DailyRewardUIProperties dailyRewardsUIProperties;
        [SerializeField] DailyRewardUI[] dalyRewardsPanels;
        [SerializeField] TMP_Text nextDailyRewardTimerText;
        [Space(8)]
        [Header("   Ads Rewards UI")]
        [SerializeField] AdRewardUI[] adRewardsPanels;
        [SerializeField] AdRewardUI currentAdReward;
        [SerializeField] TMP_Text adsCounterText;
        [Header("   Gems Exchange UI")]
        [SerializeField] GemsExchangeUI[] gemsExchangePanels;
        [Header("   Battlepass Tickets UI")]
        [SerializeField] BattlepassTicketUI[] battlepassTicketsPanels;
        [Header("   Coins Offerts UI")]
        [SerializeField] GameObject[] coinsOffertsPanels;
        
        [Space(18)]
        static AvaiableTowerSkins AvaiableSkins;
        static AvaiableDailyRewards AvaiableDailyRewards;
        static AvaiableAdRewards AvaiableAdRewards;
        

        public const int SKINS_FOR_SALE_COUNT = 3;
        public const int DAILY_REWARDS_COUNT = 7;
        public const int DAILY_ADS_LIMIT = 10;


        
        void OnEnable()
        {
            RegisterHandlers();

            GetDataFromServer();
            
        }
        
        void OnDisable()
        {
            UnregisterHandlers();

        }



        void Update()
        {
            UpdateSkinsOffertRestockTimerUI();
            
            UpdateNextDailyOffertsTimerUI();
            
            UpdateDailyRewardsUI();

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



        public void ScrollToSkinsOfferts() => ScrollToAnimation(ScrollTarget.Skins);
        public void ScrollToDailyOfferts() => ScrollToAnimation(ScrollTarget.DailyRewards);
        public void ScrollToCoinsOfferts() => ScrollToAnimation(ScrollTarget.Coins);
        public void ScrollToTicketsOfferts() => ScrollToAnimation(ScrollTarget.Tickets);
        public void ScrollToGemsOfferts() => ScrollToAnimation(ScrollTarget.Gems);
        
        void ScrollToAnimation(ScrollTarget target) => ScrollBarAnimation(1f - ( (int)target / 100f / 100f ) );



        async void ScrollBarAnimation(float targetPosition)
        {
            if (this.transform.root.TryGetComponent<Animator>(out Animator animator))
            {

                while (!animator.GetCurrentAnimatorClipInfo(0)[0].clip.name.Contains("Towers_Idle") )
                    await Task.Yield();
            } 
        
            float lastDistance = Mathf.Abs(scrollRect.verticalNormalizedPosition - targetPosition);
            await Task.Yield();
            
            while (Mathf.Abs(scrollRect.verticalNormalizedPosition - targetPosition) > 0.002f)
            {
                float currentDistance = Mathf.Abs(scrollRect.verticalNormalizedPosition - targetPosition);
                if(currentDistance > lastDistance * 1.1f)
                    return;
                
                scrollRect.verticalNormalizedPosition = Mathf.Lerp(scrollRect.verticalNormalizedPosition, targetPosition, 0.05f);
                lastDistance = Mathf.Abs(scrollRect.verticalNormalizedPosition - targetPosition);

                await Task.Yield();
            }

            scrollRect.verticalNormalizedPosition = targetPosition;
        }
        
        
#endregion


        
        
        
#region Get Offerts From Server
        
        
        async void GetDataFromServer()
        {
            UpdateUI();

            await DownloadDataFromServer();
            
            UpdateUI();

            await Task.Yield();

        }

        public async static Task DownloadDataFromServer()
        {
            AvaiableSkins = Resources.Load<AvaiableTowerSkins>("Avaiable Tower Skins");
            AvaiableDailyRewards = Resources.Load<AvaiableDailyRewards>("Avaiable Daily Rewards");
            AvaiableAdRewards = Resources.Load<AvaiableAdRewards>("Avaiable Ad Rewards");
            
            await Task.Run(async () => await GetSkinsForSaleFromServerAsync() );
            await Task.Run(async () => await GetDailyRewardsFromServerAsync() );
            await Task.Run(async () => await GetAdsRewardsFromServerAsync() );
        }
        
        void UpdateUI()
        {
            UpdateSkinsForSaleUI();
            
            UpdateDailyRewardsUI();
            
            UpdateAdsRewardsOffertsUI();
            
            UpdateExchangeOffertsUI();
            
            UpdateBattlepassTicketsOffertsUI();
        }
        
        
        
#region Skins Offerts



    #region Get Data From Server


        async static Task GetSkinsForSaleFromServerAsync()
        {
            var result = await Database.GET<SkinsForSale>();

            if (result.Status == DatabaseStatus.Error)
                skinsForSale = await CalculateNewSkinsForSale(); // Calculate new offerts
            else if ((ServerDate.SimulatedDateOnServerUTC() - new DateTime(result.Data.CreateDateUTCTicks)).TotalDays >= 1)
                skinsForSale = await CalculateNewSkinsForSale(result.Data); // Calculate new offerts
            else
                skinsForSale = result.Data;

        }
        
        
    #endregion

        

    #region Calculate New Offerts
    
        async static Task<SkinsForSale> CalculateNewSkinsForSale(SkinsForSale oldOfferts = null)
        {
            Random random = new Random((uint)new System.Random().Next(1, 100));
            
            var createDateUTC = ServerDate.SimulatedDateOnServerUTC().AddHours(8 - ServerDate.SimulatedDateOnServerUTC().Hour).AddMinutes(-ServerDate.SimulatedDateOnServerUTC().Minute).AddSeconds(-ServerDate.SimulatedDateOnServerUTC().Second);
            if(ServerDate.SimulatedDateOnServerUTC().Hour < 8)
                createDateUTC = ServerDate.SimulatedDateOnServerUTC().AddDays(-1).AddHours(8 - ServerDate.SimulatedDateOnServerUTC().Hour).AddMinutes(-ServerDate.SimulatedDateOnServerUTC().Minute).AddSeconds(-ServerDate.SimulatedDateOnServerUTC().Second);
            
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

        static SkinOffert[] GenerateAllSkins()
        {
            List<SkinOffert> offerts = new List<SkinOffert>();

            foreach (var avaiableSkin in AvaiableSkins.rewards)
            {
                if(avaiableSkin.Rarity != SkinRarity.Common && avaiableSkin.Rarity != SkinRarity.Gold)
                    offerts.Add(new SkinOffert() { TowerSkinID = avaiableSkin.ID });
            }

            Debug.Log(JsonConvert.SerializeObject(offerts.ToArray()));

            return offerts.ToArray();
        }
        
    #endregion
        
        

        public async void BuySkinFromOffert(int offertIndex)
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

            if (!tower.IsUnlocked())
            {
                WarningSystem.ShowWarning(WarningSystem.WarningType.LockedTower);
                return;
            }

            long balance = (long)PlayerData.GetCoinsBalance.Invoke();
            long price = (long)skin.UnlockPrice;
            if (balance < price)
            {
                // WarningSystem.ShowWarning(WarningSystem.WarningType.NotEnoughtMoney);
                skinsForSalePanels[offertIndex].gameObject.GetComponent<NotEnoughtCurrencyInvoker>().ShowWarningPanel(price, balance);
                return;
            }
            

            this.gameObject.GetComponent<ConfirmationInvoker>().ShowConfirmation(
                $"Would You Like To Buy\n{StringFormatter.GetSkinText(skin)} Skin For {StringFormatter.GetTowerText(tower)} Tower\nFor {StringFormatter.GetCoinsText( (long)skin.UnlockPrice, true, "66%" )}",
                skin,
                OnAccept);

            
            async Task OnAccept()
            {
                PlayerData.ChangeCoinsBalance(-(long)skin.UnlockPrice);
                skin.UnlockSkin();
                
                await Task.Yield();
                
                UpdateSkinsForSaleUI();
            }

            // skinsForSaleUIProperties.ConfirmationPanel.Open(tower, skin);
        }
        
        
        void UpdateSkinsForSaleUI()
        {
            for (int i = 0; i < skinsForSale.skinsForSale.Length; i++)
            {
                skinsForSalePanels[i].UpdateUI(skinsForSale.skinsForSale[i]);
            }
            
        }

        void UpdateSkinsOffertRestockTimerUI()
        {
            if (skinsForSale == null)
            {
                offertsTimerText.text = $"No Offerts";
                return;
            }
            
            DateTime createTimeUTC = new DateTime(skinsForSale.CreateDateUTCTicks);
            TimeSpan offsetToNextOfferts = createTimeUTC.AddDays(1) - ServerDate.SimulatedDateOnServerUTC();

            offertsTimerText.text = $"Next in: {offsetToNextOfferts.Hours}h {offsetToNextOfferts.Minutes}min";
        }


#endregion



#region Daily Rewards Offerts


    #region Get Data From Server
        
        async static Task GetDailyRewardsFromServerAsync()
        {
            string playerID = PlayerController.GetLocalPlayerData().ID;

            var result = await Database.GET<DailyRewards>(playerID);

            if (result.Status == DatabaseStatus.Error)
                dailyRewards = await CalculateNewDailyRewards(true);
            else if (result.Data.LastCalimedRewardIndex + 1 >= DAILY_REWARDS_COUNT)
                dailyRewards = await CalculateNewDailyRewards();
            else
                dailyRewards = result.Data;

        }

    #endregion
    
        
        
    #region Calculate New Offerts
    
        async static Task<DailyRewards> CalculateNewDailyRewards(bool isFirstDailyReward = false)
        {
            Random random = new Random((uint)new System.Random().Next(1, 100));

            Reward[] _rewards = new Reward[DAILY_REWARDS_COUNT];
            for (int i = 0; i < DAILY_REWARDS_COUNT; i++)
            {
                RewardObject[] _rewardsObjects = Array.Empty<RewardObject>();
                switch (i)
                {
                    case 0:
                        _rewardsObjects = AvaiableDailyRewards.rewards.Where(element => element.RewardRarity == RewardRarity.Common ).ToArray();
                        break;
                    case 1:
                        _rewardsObjects = AvaiableDailyRewards.rewards.
                            Where(element => element.RewardRarity == RewardRarity.Common || element.RewardRarity == (random.NextInt() % 20 == 0 ? RewardRarity.Common : RewardRarity.Uncommon) ).
                            ToArray();
                        break;
                    case 2:
                        _rewardsObjects = AvaiableDailyRewards.rewards.
                            Where(element => element.RewardRarity == RewardRarity.Common || element.RewardRarity == (random.NextInt() % 5 == 0 ? RewardRarity.Uncommon : RewardRarity.Common) ).
                            ToArray();
                        break;
                    case 3:
                        _rewardsObjects = AvaiableDailyRewards.rewards.
                            Where(element => element.RewardRarity == RewardRarity.Uncommon ).
                            ToArray();
                        break;
                    case 4:
                        _rewardsObjects = AvaiableDailyRewards.rewards.
                            Where(element => element.RewardRarity == RewardRarity.Uncommon || element.RewardRarity == (random.NextInt() % 5 == 0 ? RewardRarity.Rare : RewardRarity.Uncommon) ).
                            ToArray();
                        break;
                    case 5:
                        _rewardsObjects = AvaiableDailyRewards.rewards.
                            Where(element => element.RewardRarity == RewardRarity.Rare || element.RewardRarity == (random.NextInt() % 5 == 0 ? RewardRarity.Epic : RewardRarity.Rare) ).
                            ToArray();
                        break;
                    case 6:
                        _rewardsObjects = AvaiableDailyRewards.rewards.
                            Where(element => element.RewardRarity == RewardRarity.Epic || element.RewardRarity == (random.NextInt() % 10 == 0 ? RewardRarity.Legendary : RewardRarity.Epic) || element.RewardRarity == (random.NextInt() % 25 == 0 ? RewardRarity.Exclusive : RewardRarity.Epic) ).
                            ToArray();
                        break;
                }

                // RewardObject _rewardObject = _rewardsObjects[UnityEngine.Random.Range(0, _rewardsObjects.Length)];
                RewardObject _rewardObject = _rewardsObjects[new System.Random().Next(0, _rewardsObjects.Length)];

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
                LastClaimDateTicks = isFirstDailyReward ? ServerDate.SimulatedDateOnServerUTC().AddDays(-1).Ticks : ServerDate.SimulatedDateOnServerUTC().Ticks,
                LastCalimedRewardIndex = -1,
                Rewards = _rewards
            };

            
            string playerID = PlayerController.GetLocalPlayerData().ID;
            await Database.POST<DailyRewards>(rewards, playerID);
            

            return rewards;
        }
        
    #endregion
        
        
        
        public async void ClaimReward(int index)
        {
            DateTime createTimeUTC = new DateTime(dailyRewards.LastClaimDateTicks);
            TimeSpan timeToClaim = createTimeUTC.AddDays(1) - ServerDate.SimulatedDateOnServerUTC();
            
            bool canClaim = dailyRewards.LastCalimedRewardIndex + 1 == index && (timeToClaim.TotalSeconds <= 0 );
            
            if(!canClaim)
                return;

            dailyRewards.LastClaimDateTicks = ServerDate.SimulatedDateOnServerUTC().Ticks;
            dailyRewards.LastCalimedRewardIndex += 1;
            
            
            GiveDailyReward(dailyRewards.Rewards[dailyRewards.LastCalimedRewardIndex]);
            

            if (dailyRewards.LastCalimedRewardIndex + 1 >= DAILY_REWARDS_COUNT)
                dailyRewards = await CalculateNewDailyRewards();
            
            
            string playerID = PlayerController.GetLocalPlayerData?.Invoke()?.ID;
            await Database.POST<DailyRewards>(dailyRewards, playerID);



            UpdateDailyRewardsUI();

        }

        void GiveDailyReward(Reward reward)
        {
            
            switch (reward.Type)
            {
                case RewardType.Coins:
                    PlayerData.ChangeCoinsBalance((long)reward.CoinsBalance);
                    break;
                case RewardType.Experience:
                    PlayerData.ChangeExperience((long)reward.XP);
                    break;
            }
            
        }
        
        
        void UpdateDailyRewardsUI()
        {
            if (dailyRewards == null)
                return;
            
            
            for (int i = 0; i < dailyRewards.Rewards.Length; i++)
            {
                dalyRewardsPanels[i].UpdateUI(i, dailyRewards, dailyRewardsUIProperties);
            }
            
            
        }


        void UpdateNextDailyOffertsTimerUI()
        {
            if (dailyRewards == null)
            {
                nextDailyRewardTimerText.text = $"No Offerts";
                return;
            }

            DateTime createTimeUTC = new DateTime(dailyRewards.LastClaimDateTicks);
            TimeSpan timeToClaim = createTimeUTC.AddDays(1) - ServerDate.SimulatedDateOnServerUTC();
            if(timeToClaim.TotalMilliseconds <= 0)
                nextDailyRewardTimerText.text = $"Offert Ready to Claim";
            else
                nextDailyRewardTimerText.text = $"Next in: {timeToClaim.Hours}h {timeToClaim.Minutes}min";
            
        }


#endregion
        
        
        
#region Exchange Gems To Coins Offerts

        
        public async void ExchangeGemsToCoins(int offertIndex)
        {
            GemsExchange exchangeOffert = GemsExchangeOfferts[offertIndex];


            long balance = (long)PlayerData.GetGemsBalance?.Invoke();
            long price = (long)exchangeOffert.GemsPrice;
            if (balance < price)
            {
                // WarningSystem.ShowWarning(WarningSystem.WarningType.NotEnoughtGems);
                gemsExchangePanels[offertIndex].gameObject.GetComponent<NotEnoughtCurrencyInvoker>().ShowWarningPanel(price, balance);
                return;
            }
            
            
            
            this.gameObject.GetComponent<ConfirmationInvoker>().ShowConfirmation(
                $"Would You Like To Exchange {StringFormatter.GetGemsText(exchangeOffert.GemsPrice, true, "66%" )} For {StringFormatter.GetCoinsText(exchangeOffert.CoinsReward, true, "66%" )}",
                OnAccept );

            
            async Task OnAccept()
            {
                PlayerData.ChangeGemsBalance(-exchangeOffert.GemsPrice);
                PlayerData.ChangeCoinsBalance(exchangeOffert.CoinsReward);
                
                await Task.Yield();
                
                UpdateExchangeOffertsUI();
            }
            
        }


        void UpdateExchangeOffertsUI()
        {
            for (int i = 0; i < gemsExchangePanels.Length; i++)
            {
                gemsExchangePanels[i].UpdateUI(GemsExchangeOfferts[i]);
            }
            
        }
        
        
#endregion
        
        
        
#region Gems Offerts

        
        public void BuyGemsOffert(int offertIndex)
        {
            
        }


        void UpdateGemsOffertsUI()
        {
            
        }
        
        
#endregion

        
        
#region Battlepass Tickets Offerts

        
        public async void BuyTicketsOffert(int offertIndex)
        {
            BattlepassTicket ticketOffert = BattlepassTickets[offertIndex];

            long balance = (long)PlayerData.GetGemsBalance?.Invoke();
            long price = (long)ticketOffert.GemsPrice;
            if (balance < price)
            {
                // WarningSystem.ShowWarning(WarningSystem.WarningType.NotEnoughtGems);
                battlepassTicketsPanels[offertIndex].gameObject.GetComponent<NotEnoughtCurrencyInvoker>().ShowWarningPanel(price, balance);
                return;
            }

            
            // bool onCloseConfirmationPanel = false;
            // bool pausePayements = false;
            // Confirmation confirmation = Instantiate(ConfirmationOffertPrefab).GetComponent<Confirmation>();
            // confirmation.ShowOffert(
            //     $"Would You Like To Buy {StringFormatter.GetColoredText($"{ticketOffert.TiersCount} Battlepass Tickets", Color.white)} For {StringFormatter.GetGemsText(ticketOffert.GemsPrice, true, "66%" )}",
            //     () =>
            //     {
            //         onCloseConfirmationPanel = true;
            //         confirmation.StartLoadingAnimation();
            //     },
            //     () =>
            //     {
            //         onCloseConfirmationPanel = true;
            //         pausePayements = true;
            //     }
            //     );
            //
            // while (!onCloseConfirmationPanel)
            //     await Task.Yield();
            //
            // if (pausePayements)
            //     return;
            //         
            //
            //
            // PlayerData.ChangeGemsBalance(-ticketOffert.GemsPrice);
            // await BattlepassManager.AddBattlepassTierProgress(ticketOffert.TiersCount);
            //
            // await Task.Yield();
            //
            // confirmation.StopLoadingAnimation();
            //
            //
            // UpdateBattlepassTicketsOffertsUI();
            
            this.gameObject.GetComponent<ConfirmationInvoker>().ShowConfirmation(
                $"Would You Like To Buy {StringFormatter.GetColoredText($"{ticketOffert.TiersCount} Battlepass Tickets", Color.white)} For {StringFormatter.GetGemsText(ticketOffert.GemsPrice, true, "66%" )}",
                OnAccept);


            async Task OnAccept()
            {
                PlayerData.ChangeGemsBalance(-ticketOffert.GemsPrice);
                await BattlepassManager.AddBattlepassTierProgress(ticketOffert.TiersCount);

                UpdateBattlepassTicketsOffertsUI();
            }

        }


        void UpdateBattlepassTicketsOffertsUI()
        {

            for (int i = 0; i < battlepassTicketsPanels.Length; i++)
            {
                battlepassTicketsPanels[i].UpdateUI(BattlepassTickets[i]);
            }
            
        }
        
        
#endregion



#region Ad Offerts
        
        
        
    #region Get Data From Server
    
        async static Task GetAdsRewardsFromServerAsync()
        {
            string playerID = PlayerController.GetLocalPlayerData().ID;
         
            var result = await Database.GET<AdsRewards>(playerID);

            if (result.Status == DatabaseStatus.Error)
                adsRewards = await CalculateNewAdsRewards(); // Calculate new ads rewards
            else if ((ServerDate.SimulatedDateOnServerUTC() - new DateTime(result.Data.CreateDateUTCTicks)).TotalDays >= 1)
                adsRewards = await CalculateNewAdsRewards(); // Calculate new ads rewards
            else
                adsRewards = result.Data;
            
        }
        
    #endregion



    #region Calculate New Offerts

        async static Task<AdsRewards> CalculateNewAdsRewards()
        {
            Random random = new Random((uint)new System.Random().Next(1, 100));

            List<AdReward> avaiableAdsRewards = new List<AdReward>(AvaiableAdRewards.rewards);
            
            
            var createDateUTC = ServerDate.SimulatedDateOnServerUTC().AddHours(8 - ServerDate.SimulatedDateOnServerUTC().Hour).AddMinutes(-ServerDate.SimulatedDateOnServerUTC().Minute).AddSeconds(-ServerDate.SimulatedDateOnServerUTC().Second);
            if (ServerDate.SimulatedDateOnServerUTC().Hour < 8)
                createDateUTC = ServerDate.SimulatedDateOnServerUTC().AddDays(-1).AddHours(8 - ServerDate.SimulatedDateOnServerUTC().Hour).AddMinutes(-ServerDate.SimulatedDateOnServerUTC().Minute).AddSeconds(-ServerDate.SimulatedDateOnServerUTC().Second);


            AdsRewards _adsRewards = new AdsRewards()
            {
                CreateDateUTCTicks = createDateUTC.Ticks,
                rewards = new List<AdReward>(),
            };

            for (int i = 0; i < DAILY_ADS_LIMIT; i++)
            {
                List<AdReward> _avaiableAdsRewards = new List<AdReward>(avaiableAdsRewards);
                if (i < 2)
                    _avaiableAdsRewards = avaiableAdsRewards.Where(_reward => _reward.Amount < 10).ToList();
                else if (i < 8)
                    _avaiableAdsRewards = avaiableAdsRewards.Where(_reward => _reward.Amount < 25).ToList();
                else if(i < DAILY_ADS_LIMIT - 1)
                    _avaiableAdsRewards = avaiableAdsRewards.Where(_reward => _reward.Amount > 20 && _reward.Amount > 5).ToList();
                else 
                    _avaiableAdsRewards = avaiableAdsRewards.Where(_reward => _reward.Amount > 25).ToList();
                
                int randomIndex = random.NextInt(0, _avaiableAdsRewards.Count);

                _adsRewards.rewards.Add(_avaiableAdsRewards[randomIndex]);
            }

            
            string playerID = PlayerController.GetLocalPlayerData().ID;
            await Database.POST<AdsRewards>(_adsRewards, playerID);
            
            
            
            return _adsRewards;
        }

    #endregion
        
        
        
        public async void ShowAd()
        {
            if(adsRewards == null)
                return;
            
            if(adsRewards.rewards.Count <= 0)
                return;

            AdReward reward = adsRewards.rewards[0];
            
            
            GoogleAds.ShowAd(reward.Type,reward.Amount);
            GoogleAds.OnGetReward += OnGetAdReward;
        }

        async void OnGetAdReward()
        {
            GoogleAds.OnGetReward -= OnGetAdReward;
            
            adsRewards.rewards.RemoveAt(0);
            
            string playerID = PlayerController.GetLocalPlayerData().ID;
            await Database.POST<AdsRewards>(adsRewards, playerID);


            UpdateAdsRewardsOffertsUI();
        }
        

        public void UpdateAdsRewardsOffertsUI()
        {
            currentAdReward.gameObject.SetActive(false);
            for (int i = 0; i < adRewardsPanels.Length; i++)
            {
                adRewardsPanels[i].gameObject.SetActive(false);
            }
            
            
            if(adsRewards == null || adsRewards.rewards.Count <= 0)
                return;


            adsCounterText.text = $"Videos Watched: {DAILY_ADS_LIMIT-adsRewards.rewards.Count}/{DAILY_ADS_LIMIT}";
            
            currentAdReward.gameObject.SetActive(true);
            currentAdReward.UpdateUI(adsRewards.rewards[0], 0);
            
            for (int i = 0; i < adRewardsPanels.Length - 1; i++)
            {
                int rewardIndex = i + 1; 
                
                adRewardsPanels[i].gameObject.SetActive(rewardIndex < adsRewards.rewards.Count);
                if(rewardIndex >= adsRewards.rewards.Count)
                    continue;
                
                AdReward reward = adsRewards.rewards[rewardIndex];
                
                adRewardsPanels[i].UpdateUI(reward, rewardIndex);
            }
            
        }
        
        
#endregion
        
        
        
#endregion



        
    }
    
    
}