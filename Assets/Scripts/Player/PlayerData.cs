﻿using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using System.Threading.Tasks;
using Mirror;
using MMK;
using MMK.Extensions;
using MMK.ScriptableObjects;
using Newtonsoft.Json;
using UI;
using UI.Battlepass;
using UnityEditor.Rendering;
using UnityEngine;
using UnityEngine.Rendering;
using static UnityEngine.Rendering.DebugUI;

namespace Player
{
    public enum GameResult
    {
        Survival,
        PVP_Win,
        PVP_Defeat
    }
    
    [Serializable]
    public struct WalletData
    {
        public ulong Coins;
        public ulong Gems;

        public Dictionary<string,string> Payements;
        public int PayementsCount => Payements != null ? Payements.Count : 0;
        public WalletData(ulong Coins, ulong Gems)
        {
            this.Coins = Coins;
            this.Gems = Gems;

            Payements = new Dictionary<string,string>();
        }

    }

    [Serializable]
    public struct PlayerGamesData
    {
        public ulong WinsCount;
        public ulong DefeatsCount;

        public ulong GamesCount => PVP_GamesCount + Survival_GamesCount;

        public ulong PVP_GamesCount => WinsCount + DefeatsCount;
        public ulong Survival_GamesCount;
        
        public ulong MaxWaveCount;
    }
    
    [Serializable]
    public class PlayerData
    {
#region Events & Actions

        #region Balance Events

        public delegate void OnChangeCoinsBalanceDelegate(ulong value);
        public static event OnChangeCoinsBalanceDelegate OnChangeCoinsBalance;   
        
        public delegate void ChangeCoinsBalanceDelegate(long value);
        public static ChangeCoinsBalanceDelegate ChangeCoinsBalance;

        public delegate ulong GetCoinsBalanceDelegate();
        public static GetCoinsBalanceDelegate GetCoinsBalance;

        #endregion

        #region Payements Events

        public delegate void AddPayementDataDelegate(string transactionID, string itemID);
        public static AddPayementDataDelegate AddPayementData;

        #endregion

        #region Gems Events

        public delegate void OnChangeGemsBalanceDelegate(ulong value);
        public static event OnChangeGemsBalanceDelegate OnChangeGemsBalance;   
        
        public delegate void ChangeGemsBalanceDelegate(long value);
        public static ChangeGemsBalanceDelegate ChangeGemsBalance;

        public delegate ulong GetGemsBalanceDelegate();
        public static GetGemsBalanceDelegate GetGemsBalance;
        
        #endregion
        
        
        #region XP Events

        public delegate void OnLevelUpDelegate(uint Lvl);
        public static event OnLevelUpDelegate OnLevelUp;   
        
        public delegate void OnChangeExperienceDelegate(ulong XP, ulong Lvl);
        public static event OnChangeExperienceDelegate OnChangeExperience;   
        
        public delegate void ChangeExperienceDelegate(long value);
        public static ChangeExperienceDelegate ChangeExperience;

        public delegate ulong GetExperienceDelegate();
        public static GetExperienceDelegate GetExperience;
        
        #endregion


        
        #region Games Data Events
        
        public delegate void OnChangeWinsCountDelegate(ulong value);
        public static event OnChangeWinsCountDelegate OnChangeWinsCount;
        
        public delegate void OnChangeDefeatsCountDelegate(ulong value);
        public static event OnChangeDefeatsCountDelegate OnChangeDefeatsCount;
        
        public delegate void AddGameResultDelegate(GameResult result);
        public static AddGameResultDelegate AddGameResult;
        
        #endregion


        #region Deck Events

        public delegate void OnDeckChangedDelegate(TowerSerializable[] deckSerializable);
        public static event OnDeckChangedDelegate OnDeckChanged;
        
        #endregion
        
#endregion
        
        public string ID = "0";
        public string Nickname = "Enter name...";
        
        public uint Level => GetLevelByTotalXP(TotalExperiencePoins);
        public uint XP => GetXPByTotalXP(TotalExperiencePoins);
        public ulong TotalExperiencePoins = 0;

        public WalletData WalletData = new WalletData(100, 30);

        public PlayerGamesData PlayerGamesData = new PlayerGamesData();

        public HashSet<TowerSerializable> UnlockedTowers = new HashSet<TowerSerializable>();
        public HashSet<TowerSkinSerializable> UnlockedTowersSkins = new HashSet<TowerSkinSerializable>();

        public TowerSerializable[] DeckSerializable = new TowerSerializable[5] {new TowerSerializable(), new TowerSerializable(), new TowerSerializable(), new TowerSerializable(), new TowerSerializable()};

        [NonSerialized] public ObservableValue<Tower>[] Deck;


        public PlayerData()
        {


            if (GlobalSettingsManager.GetGlobalSettings?.Invoke() != null)
            {
                foreach (var skin in GlobalSettingsManager.GetGlobalSettings.Invoke().TowersSkins)
                {
                    if (skin.Rarity == SkinRarity.Default)
                    {
                        TowerSkinSerializable skinSerializable = new TowerSkinSerializable(skin);
                        UnlockedTowersSkins.Add(skinSerializable);
                    }
                }
            }

            Tower baseTower = Tower.GetTowerBySkinID("0001");
            if (baseTower != null)
            {
                // baseTower.UnlockTower();
                TowerSerializable towerSerializable = new TowerSerializable(baseTower);
                UnlockedTowers.Add(towerSerializable);
            }

            InitDeck();

            Deck[0].Value = baseTower;
        }
        
        public PlayerData(PlayerData sourceData)
        {
            ID = sourceData.ID;
            Nickname = sourceData.Nickname;
            
            TotalExperiencePoins = sourceData.TotalExperiencePoins;
            
            WalletData = sourceData.WalletData;
            
            PlayerGamesData = sourceData.PlayerGamesData;
            
            UnlockedTowers = sourceData.UnlockedTowers;
            
            UnlockedTowersSkins = sourceData.UnlockedTowersSkins;
            
            DeckSerializable = sourceData.DeckSerializable;


            InitDeck();

            foreach (var tower in GlobalSettingsManager.GetGlobalSettings?.Invoke().Towers)
            {
                if (DeckSerializable.Any(deckTower => deckTower.ID == tower.ID))
                {
                    // Deck.Add(tower);
                    int index = Array.FindIndex(DeckSerializable, element => element.ID == tower.ID);
                    
                    if (index >= 0)
                        Deck[index].Value = tower;
                }
            }
            
        }


        ~PlayerData()
        {
            Debug.Log("Destroy Old Data");
        }


        void InitDeck()
        {
            Deck = new ObservableValue<Tower>[5];
            for (int i = 0; i < Deck.Length; i++)
            {
                Deck[i] = new ObservableValue<Tower>();
                
                ObservableValue<Tower> DeckTowerObservable = Deck[i];
                DeckTowerObservable.PropertyChanged += (sender, args) =>
                {
                    var observable = sender as ObservableValue<Tower>;
                    Tower value = observable?.Value;
                    int index = Array.FindIndex(Deck, elemet => elemet == observable);
                    if(index < 0)
                        Debug.LogError("index of xd is lower than 0");
                    DeckSerializable[index] = value == null ? new TowerSerializable() : new TowerSerializable(value);
                    
                    OnDeckChanged?.Invoke(DeckSerializable);
                };
                
            }
        }


#region Register Events

        public void RegisterEvents()
        {
            RegisterWalletEvents();
            RegisterExperienceEvents();
            RegisterTowerUnlockEvent();
            RegisterSkinUnlockEvent();
            RegisterWinsAndDefeatsEvents();
            
        }

        public void UnRegisterEvents()
        {
            UnRegisterWalletEvents();
            UnRegisterExperienceEvents();
            UnRegisterTowerUnlockEvent();
            UnRegisterSkinUnlockEvent();
            UnRegisterWinsAndDefeatsEvents();

        }



        void RegisterExperienceEvents()
        {
            ChangeExperience += OnExperienceChanged;
            GetExperience += OnGetExperience;
        }
        void UnRegisterExperienceEvents()
        {
            ChangeExperience -= OnExperienceChanged;
            GetExperience -= OnGetExperience;
        }
        async void OnExperienceChanged(long value)
        {
            uint oldLevel = Level;

            TotalExperiencePoins = (ulong)((long)TotalExperiencePoins + value);

            if (Level > oldLevel)
                OnLevelUp?.Invoke(Level);
            OnChangeExperience?.Invoke(Level, XP);

            await BattlepassManager.AddBattlepassExperienceProgress(value);
        }
        ulong OnGetExperience() => TotalExperiencePoins;


        void RegisterWalletEvents()
        {
            ChangeCoinsBalance += OnCoinsBalanceChanged;
            GetCoinsBalance += OnGetCoinsBalance;


            ChangeGemsBalance += OnGemsBalanceChanged;
            GetGemsBalance += OnGetGemsBalance;

            AddPayementData += OnAddPayementData;

        }
        void UnRegisterWalletEvents()
        {
            ChangeCoinsBalance -= OnCoinsBalanceChanged;
            GetCoinsBalance -= OnGetCoinsBalance;


            ChangeGemsBalance -= OnGemsBalanceChanged;
            GetGemsBalance -= OnGetGemsBalance;

            AddPayementData -= OnAddPayementData;

        }
        void OnAddPayementData(string transactionID, string itemID) 
        {
            if (!this.WalletData.Payements.TryAdd(transactionID, itemID))
                Debug.LogError("this payement id is exist");
        }

        void OnCoinsBalanceChanged(long value)
        {
            Debug.Log("Change Balance");
            WalletData.Coins = (ulong)((long)WalletData.Coins + value);

            OnChangeCoinsBalance?.Invoke(WalletData.Coins);
        }
        ulong OnGetCoinsBalance() => WalletData.Coins;

        void OnGemsBalanceChanged(long value)
        {
            WalletData.Gems = (ulong)((long)WalletData.Gems + value);

            OnChangeGemsBalance?.Invoke(WalletData.Gems);
        }
        ulong OnGetGemsBalance() => WalletData.Gems;


        void RegisterTowerUnlockEvent()
        {
            Tower.OnUnlockTower += OnTowerUnlocked;
        }
        void UnRegisterTowerUnlockEvent()
        {
            Tower.OnUnlockTower -= OnTowerUnlocked;
        }
        void OnTowerUnlocked(Tower tower)
        {
            UnlockedTowers.RemoveWhere(_tower => _tower.ID == tower.ID);

            UnlockedTowers.Add(new TowerSerializable(tower));
        }
        

        void RegisterSkinUnlockEvent()
        {
            TowerSkin.OnUnlockSkin += OnSkinUnlocked;
        }
        void UnRegisterSkinUnlockEvent()
        {
            TowerSkin.OnUnlockSkin -= OnSkinUnlocked;
        }
        void OnSkinUnlocked(TowerSkin skin)
        {
            UnlockedTowersSkins.RemoveWhere(_skin => _skin.ID == skin.ID);

            UnlockedTowersSkins.Add(new TowerSkinSerializable(skin));
        }
        

        void RegisterWinsAndDefeatsEvents()
        {
            AddGameResult += OnGameResult;
        }
        void UnRegisterWinsAndDefeatsEvents()
        {
            AddGameResult -= OnGameResult;
        }
        void OnGameResult(GameResult result)
        {
            switch (result)
            {
                case GameResult.Survival:
                    PlayerGamesData.Survival_GamesCount += 1;
                    break;
                case GameResult.PVP_Win:
                    PlayerGamesData.DefeatsCount += 1;
                    OnChangeDefeatsCount?.Invoke(PlayerGamesData.DefeatsCount);
                    break;
                case GameResult.PVP_Defeat:
                    PlayerGamesData.WinsCount += 1;
                    OnChangeWinsCount?.Invoke(PlayerGamesData.WinsCount);
                    break;
            }
        }

#endregion







        public static uint GetLevelByTotalXP(ulong Experience)
        {
            int x = (int)(( -70 + Mathf.Sqrt(4900 + (20 * Experience)) ) / 10f);
            
            return (uint)x;
        }
        
        
        public static uint GetXPByLevel(uint level)
        {
            int levelExperience = (int)(75f + ((level - 1) * 10) );

            return (uint)levelExperience;
        }
        
        public static uint GetXPByTotalXP(ulong Experience)
        {
            int level = (int)GetLevelByTotalXP(Experience);
            int levelExperience = (int)( (5f * level) * (level + 14f) ); 
            
            return (uint)((long)Experience - levelExperience);
        }
        
        
        
        
        
    }



    
    
    public static class CustomReadWrite 
    {
        public static void WritePlayerData(this NetworkWriter writer, PlayerData value)
        {
            writer.WriteString(JsonConvert.SerializeObject(value));
        }

        public static PlayerData ReadPlayerData(this NetworkReader reader)
        {
            return new PlayerData(JsonConvert.DeserializeObject<PlayerData>(reader.ReadString()));
        }
    }
    
    


    
    
}
