using System;
using System.Collections.Generic;
using System.Globalization;
using System.Linq;
using System.Net;
using System.Net.Http;
using UnityEngine;
using UnityEngine.UI;
using System.Threading.Tasks;
using MMK.Extensions;
using MMK.ScriptableObjects;
using Newtonsoft.Json;
using Player;
using Player.Database;
using TMPro;
using UI.Shop.Daily_Rewards;
using UI.Shop.Daily_Rewards.Scriptable_Objects;
using Unity.VisualScripting;
using DateTime = System.DateTime;
using Random = Unity.Mathematics.Random;


namespace UI.Shop
{

    [Serializable]
    public class SkinsForSaleUIProperties
    {
        public Color CommonColor;
        public Color RareColor;
        public Color EpicColor;
        public Color ExclusiveColor;

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
        public delegate void SaveDelegate();
        public SaveDelegate Save;

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
#if UNITY_EDITOR
            Save?.Invoke();
#endif
            
            UnregisterHandlers();

        }

        
        
        void OnEnable()
        {
            
        }

        void OnDisable()
        {
            Save?.Invoke();
        }


        
        void Update()
        {
            UpdateSkinsForSaleUI();
                
            UpdateDailyRewardsUI();

            UpdateCoinsOffertsUI();
        }

        
        

        void OnApplicationFocus(bool hasFocus)
        {

            if (hasFocus)
                GetDataFromServer();
            else
                Save?.Invoke();

        }



#region Register & Unregister Handlers

        void RegisterHandlers()
        {
            Save += OnSave;
        }

        void UnregisterHandlers()
        {
            Save -= OnSave;
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

            while (Mathf.Abs(scrollRect.verticalNormalizedPosition - targetPosition) >= 0.05f)
            {
                scrollRect.verticalNormalizedPosition = Mathf.Lerp(scrollRect.verticalNormalizedPosition, targetPosition, 0.05f);

                await Task.Yield();
            }

            scrollRect.verticalNormalizedPosition = targetPosition;
        }
        
#endregion



        async void OnSave()
        {
            await SaveDailyRewards();
            
            // Save Coins Offerts
            
        }
        
        
#region Get Offerts From Server
        
        
        async void GetDataFromServer()
        {

            List<Task> tasks = new List<Task>()
            {
                GetDateFromServerAsync(),
                GetSkinsForSaleFromServerAsync(),
                GetDailyRewardsFromServerAsync(),
                GetCoinsOffertsFromServerAsync()
            };
            await Task.WhenAll(tasks);
            
            Save?.Invoke();
            
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
            // else if (new DateTime(result.Data.LastClaimDateTicks) != simulateDateOnServer.DayOfWeek)
            //     skinsForSale = await CalculateNewSkinsForSale(result.Data);// Calculate new offerts
            else
                skinsForSale = result.Data;
            
        }


        void UpdateSkinsForSaleUI()
        {
            DateTime createTime = new DateTime(skinsForSale.LastClaimDateTicks);


            offertsTimerText.text = $"Next in: {24}h {0}min";
            
            for (int i = 0; i < skinsForSale.skinsForSale.Length; i++)
            {
                skinsForSalePanels[i].UpdateUI(skinsForSale.skinsForSale[i], skinsForSaleUIProperties);
            }
            
        }



        [ContextMenu(nameof(CalculateNewSkinsForSale))]
        async Task<SkinsForSale> CalculateNewSkinsForSale(SkinsForSale oldOfferts = null)
        {
            Random random = new Random((uint)UnityEngine.Random.Range(0, 100));
            
            SkinsForSale _skinsForSale = new SkinsForSale()
            {
                skinsForSale = new SkinOffert[SKINS_FOR_SALE_COUNT] {new SkinOffert(), new SkinOffert(), new SkinOffert()},
                LastClaimDateTicks = simulateDateOnServer.Ticks 
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
                foreach (var oldSkinOfferts in oldOfferts.skinsForSale)
                {
                    int index = offerts.FindIndex(element => JsonConvert.SerializeObject(element) == JsonConvert.SerializeObject(oldSkinOfferts) );
                    if(index >= 0)
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

            
            await Task.WhenAll(GetSkinsForSaleFromServerAsync());
            
            return skinsForSale;
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
        //     string playerID = PlayerController.GetLocalPlayerData().ID;
        //     await Database.POST<DailyRewards>(dailyRewards, playerID);
        // }
        
        
#endregion



#region Daily Rewards Offerts

        [SerializeField] RewardObject[] avaiableRewards;
        
        DateTime dateFromServer = new DateTime();
        TimeSpan localTimeOffset = new TimeSpan();
        DateTime simulateDateOnServer => DateTime.Now - localTimeOffset;
        
        
        
        #region Date/Time

        const string DATE_URL =  "http://www.google.com";
        
        void GetDateFromServer()
        {
            using (var response = 
                WebRequest.Create(DATE_URL).GetResponse())
                //string todaysDates =  response.Headers["date"];
                dateFromServer = DateTime.ParseExact(response.Headers["date"],
                    "ddd, dd MMM yyyy HH:mm:ss 'GMT'",
                    CultureInfo.InvariantCulture.DateTimeFormat,
                    DateTimeStyles.AssumeUniversal);    
            
            // dateFromServer = DateTime.UtcNow;
            localTimeOffset = DateTime.Now - dateFromServer;

        }
        
        async Task GetDateFromServerAsync()
        {
            using (var httpClient = new HttpClient())
            {
                HttpResponseMessage response = await httpClient.GetAsync(DATE_URL);
                response.EnsureSuccessStatusCode();
                
                var headers = response.Headers;
                
                if (!headers.TryGetValues("date", out var dateValues))
                    throw new Exception("Date header not found.");

                string dateHeader = dateValues.FirstOrDefault();
                if (string.IsNullOrEmpty(dateHeader))
                    throw new Exception("Date header not found.");
                
                dateFromServer = DateTime.ParseExact(dateHeader,
                    "ddd, dd MMM yyyy HH:mm:ss 'GMT'",
                    CultureInfo.InvariantCulture.DateTimeFormat,
                    DateTimeStyles.AssumeUniversal);
            }
            
            localTimeOffset = DateTime.Now - dateFromServer;

        }

        #endregion
        
        
        
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
                dalyRewardsPanels[i].UpdateUI(i, dailyRewards, dailyRewardsUIProperties, simulateDateOnServer);
            }
            
            
        }

        // void UpdateDailyRewardPanelUI(int index, RewardType type, ulong value)
        // {
        //     GameObject rewardPanel = dalyRewardsPanels[index];
        //     Image lockedBackground = rewardPanel.GetComponent<Image>();
        //
        //     Image rewardSprite = rewardPanel.transform.GetChild(0).GetComponent<Image>();
        //     TMP_Text rewardValue = rewardSprite.transform.GetChild(0).GetComponent<TMP_Text>();
        //     
        //     Image claimButton = rewardPanel.transform.GetChild(1).GetComponent<Image>();
        //     TMP_Text claimStateButtonText = claimButton.transform.GetChild(0).gameObject.GetComponent<TMP_Text>();
        //     GameObject claimStateCheckmark = claimButton.transform.GetChild(1).gameObject;
        //
        //     bool isClaimedReward = dailyRewards.LastCalimedRewardIndex >= index;
        //     bool isNextReward = dailyRewards.LastCalimedRewardIndex + 1 == index;
        //     TimeSpan timeToClaim = new DateTime(dailyRewards.LastClaimDateTicks).AddDays(1) - simulateDateOnServer;
        //     bool canClaim = dailyRewards.LastCalimedRewardIndex + 1 == index && ( timeToClaim.TotalSeconds <= 0 );
        //
        //     
        //     
        //     // Apply Image
        //     Sprite sprite = null;
        //     if (type == RewardType.Coins)
        //         sprite = dailyRewardsUIProperties.CoinsIcon;
        //     else if (type == RewardType.Experience)
        //         sprite = dailyRewardsUIProperties.ExerienceIcon;
        //     rewardSprite.sprite = sprite;
        //     
        //     Color rewardColor = new Color(0.5f, 0.5f, 0.5f, 0.65f);
        //     if(isClaimedReward || canClaim)
        //         rewardColor = new Color(1, 1, 1, 1);
        //     else if(isNextReward)
        //         rewardColor = new Color(0.75f, 0.75f, 0.75f, 0.75f);
        //     rewardSprite.color = rewardColor;
        //
        //     
        //     // Apply Image
        //     rewardValue.gameObject.SetActive(type != RewardType.None);
        //     rewardValue.text = $"{value}";
        //     
        //     
        //     // Apply Claim button Color
        //     Color buttonColor = dailyRewardsUIProperties.LockedColor;
        //     if (isClaimedReward)
        //         buttonColor = dailyRewardsUIProperties.ClaimedColor;
        //     else if (canClaim)
        //         buttonColor = dailyRewardsUIProperties.ClaimColor;
        //     claimButton.color = buttonColor;
        //     
        //     
        //     // Apply Claim Button Text
        //     string buttonText = $"Day {index + 1}";
        //     if (isClaimedReward)
        //         buttonText = "Claimed";
        //     else if (canClaim)
        //         buttonText = "Claim";
        //     else if (isNextReward)
        //         buttonText = $"{timeToClaim.Hours}:{timeToClaim.Minutes}:{timeToClaim.Seconds}";
        //     claimStateButtonText.text = buttonText;
        //
        //     
        //     // Apply Checkmark State
        //     claimStateCheckmark.SetActive(isClaimedReward);
        //
        // }
        
        
        public void ClaimReward(int index)
        {
            TimeSpan timeToClaim = new DateTime(dailyRewards.LastClaimDateTicks).AddDays(1) - simulateDateOnServer;
            bool canClaim = dailyRewards.LastCalimedRewardIndex + 1 == index && (timeToClaim.TotalSeconds <= 0 );
            
            if(!canClaim)
                return;

            dailyRewards.LastClaimDateTicks = simulateDateOnServer.Ticks;
            dailyRewards.LastCalimedRewardIndex += 1;

            if (dailyRewards.LastCalimedRewardIndex + 1 >= DAILY_REWARDS_COUNT)
                dailyRewards = CalculateNewDailyRewards();
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
                LastClaimDateTicks = isFirstDailyReward ? simulateDateOnServer.AddDays(-1).Ticks : simulateDateOnServer.Ticks,
                LastCalimedRewardIndex = -1,
                Rewards = _rewards
            };


            return rewards;
        }


        async Task SaveDailyRewards()
        {
            string playerID = PlayerController.GetLocalPlayerData?.Invoke()?.ID;
            await Database.POST<DailyRewards>(dailyRewards, playerID);
        }
        
        
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


        
        
        
        
        
        void OnGUI()
        {
            var rect = new Rect(50, 500, 500, 200);
            GUI.color = Color.white;
            GUI.backgroundColor = Color.black;
            GUI.TextArea(rect, $"{dateFromServer}\n{simulateDateOnServer}", new GUIStyle(){fontSize = 64});
        }

    }
    
    
}