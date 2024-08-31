using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using MMK;
using Player;
using Player.Database;
using UI.Shop;
using UnityEngine;

namespace UI.Battlepass
{
    public class BattlepassManager : MonoBehaviour
    {

        
        BattlepassProgress playerProgress;
        

        public BattlepassRewards BattlepassRewards;


        
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
        }
        
        
        // if (TimeToEndBattlepass.TotalMilliseconds < 0)
        // {
        //     playerProgress = null;
        //     await Database.DELETE<BattlepassProgress>(playerID);
        // }
        
#endregion




    }
}
