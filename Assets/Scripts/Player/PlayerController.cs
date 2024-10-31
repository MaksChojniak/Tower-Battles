using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using MMK;
using MMK.ScriptableObjects;
using Newtonsoft.Json;
using Player.Database;
using UnityEngine;

namespace Player
{
    
    public class PlayerController : MonoBehaviour
    {
        
        public delegate void SaveDelegate();
        public static event SaveDelegate Save;
        
        public delegate void LoadDelegate();
        public static event LoadDelegate Load;
        
        
        public delegate PlayerController GetLocalPlayerDelegate();
        public static GetLocalPlayerDelegate GetLocalPlayer;
        
        public delegate PlayerData GetLocalPlayerDataDelegate();
        public static GetLocalPlayerDataDelegate GetLocalPlayerData;
        

        public PlayerData PlayerData = new PlayerData();
        bool isLoggedIn => !string.IsNullOrEmpty(PlayerData.ID);


        
        public async Task Login()
        {
            
            LoginCallback callback;
            do
            {
                Login login = new Login();

                callback = await login.LoginProcess();

                await Task.Yield();
            } 
            while (callback.Status != LoginStatus.Success);

            
            PlayerData = callback.Data;
            Debug.Log($"Player LoggedIn Successfully at {callback.Date.ToString()}");

            this.gameObject.name = $"Player [ID:{PlayerData.ID}]";

            Load?.Invoke();
        }


        
        
        
        void Awake()
        {
            DontDestroyOnLoad(this.gameObject);
            
            this.gameObject.name = "Player [ID:Unknown]";

            GetLocalPlayer += OnGetLocalPlayer;
            GetLocalPlayerData += OnGetLocalPlayerData;
            
            Save += OnSave;
            Load += OnLoad;

        }
        
        void OnDestroy()
        {
            Load -= OnLoad;
            Save -= OnSave;

            GetLocalPlayerData -= OnGetLocalPlayerData;
            GetLocalPlayer -= OnGetLocalPlayer;
        }


        void OnApplicationQuit()
        {
            
#if UNITY_EDITOR
            Save?.Invoke();
#endif
            
        }

        void OnApplicationFocus(bool hasFocus)
        {
            if(!hasFocus)
                Save?.Invoke();
                
        }

       




        
        PlayerController OnGetLocalPlayer() => this;

        PlayerData OnGetLocalPlayerData()
        {
            PlayerController player = GetLocalPlayer?.Invoke();

            if (player == null)
                return new PlayerData();

            return player.PlayerData;
        }



#region Save & Load Data

        async void OnSave()
        {
            if (!isLoggedIn)
                return;
                    
            await Database.Database.POST<PlayerData>(PlayerData, PlayerData.ID);

        }

        async void OnLoad()
        {
            // PlayerData playerData = await Database.Database.GET<PlayerData>(PlayerData.ID);
            GET_Callback<PlayerData> playerDataCallback = await Database.Database.GET<PlayerData>(PlayerData.ID);

            PlayerData playerData = new PlayerData();
            
            if (playerDataCallback.Status == DatabaseStatus.Success)
                playerData = new PlayerData(playerDataCallback.Data);
  
            
            playerData.ID = PlayerData.ID;
            PlayerData = new PlayerData(playerData);

            await UpdateTowersLockstate();
            
        }
        
        
        
        async Task UpdateTowersLockstate()
        {
            foreach (Tower tower in  GlobalSettingsManager.GetGlobalSettings().Towers)
            {
                TowerSerializable unlockedTower = PlayerData.UnlockedTowers.FirstOrDefault(_tower => _tower.ID == tower.ID);
                bool towerIsUnlocked = unlockedTower != null;
                
                tower.BaseProperties.IsUnlocked = towerIsUnlocked;

                tower.SkinIndex = towerIsUnlocked ? unlockedTower.SkinIndex : 0;

                // for (int i = 0; i < tower.TowerSkins.Length; i++)
                // {
                //     TowerSkinSerializable skin = unlockedTower?.TowerSkins.FirstOrDefault(skin => skin.ID == tower.TowerSkins[i].ID);
                //     string skinID = tower.TowerSkins[i].ID.Substring(2, 2);
                //     tower.TowerSkins[i].IsUnlocked = skinID == "01" || (towerIsUnlocked && skin != null && skin.IsUnlocked);
                // }
                
                await Task.Yield();
            }
            
            
            foreach (TowerSkin skin in  GlobalSettingsManager.GetGlobalSettings().TowersSkins)
            {
                TowerSkinSerializable unlockedSkin = PlayerData.UnlockedTowersSkins.FirstOrDefault(_skin => _skin.ID == skin.ID);
                bool skinIsUnlocked = unlockedSkin != null;
                
                skin.IsUnlocked = skinIsUnlocked;

                await Task.Yield();
            }
            
            
        }

        
#endregion
        
    }
    
    
}
