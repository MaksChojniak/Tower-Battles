using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using System.Threading.Tasks;
using Mirror;
using MMK;
using MMK.Extensions;
using MMK.ScriptableObjects;
using Newtonsoft.Json;
using UnityEditor.Rendering;
using UnityEngine;
using UnityEngine.Rendering;

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
        public ulong Balance;

        public Dictionary<ulong,string> Payements;
        public int PayementsCount => Payements != null ? Payements.Count : 0;
        
    }
    
    [Serializable]
    public struct PlayerGamesData
    {
        public ulong WinsCount;
        public ulong DefeatsCount;
        
        public ulong GamesCount => PVP_GamesCount + Survival_GamesCount;

        public ulong PVP_GamesCount => WinsCount + DefeatsCount;
        public ulong Survival_GamesCount;
        
        
    }
    
    [Serializable]
    public class PlayerData
    {
#region Events & Actions

        #region Balance Events

        public delegate void OnChangeBalanceDelegate(ulong value);
        public static OnChangeBalanceDelegate OnChangeBalance;   
        
        public delegate void ChangeBalanceDelegate(long value);
        public static ChangeBalanceDelegate ChangeBalance;

        public delegate ulong GetBalanceDelegate();
        public static GetBalanceDelegate GetBalance;
        
        #endregion


        
        #region Games Data Events
        
        public delegate void OnChangeWinsCountDelegate(ulong value);
        public static event OnChangeWinsCountDelegate OnChangeWinsCount;
        
        public delegate void OnChangeDefeatsCountDelegate(ulong value);
        public static event OnChangeDefeatsCountDelegate OnChangeDefeatsCount;
        
        public delegate void AddGameResultDelegate(GameResult result);
        public static AddGameResultDelegate AddGameResult;
        
        #endregion
        
#endregion
        
        public string ID = "0";
        public string Nickname = "Unknown";
        
        public uint Level = 0;
        public ulong ExperiencePoins = 0;

        public WalletData WalletData = new WalletData();

        public PlayerGamesData PlayerGamesData = new PlayerGamesData();

        public HashSet<TowerSerializable> UnlockedTowers = new HashSet<TowerSerializable>();

        public TowerSerializable[] DeckSerializable = new TowerSerializable[5] {new TowerSerializable(), new TowerSerializable(), new TowerSerializable(), new TowerSerializable(), new TowerSerializable()};

        [NonSerialized] public ObservableValue<Tower>[] Deck;



        public PlayerData()
        {

        }
        
        public PlayerData(PlayerData sourceData)
        {
            ID = sourceData.ID;
            Nickname = sourceData.Nickname;
            
            Level = sourceData.Level;
            ExperiencePoins = sourceData.ExperiencePoins;
            
            WalletData = sourceData.WalletData;
            
            PlayerGamesData = sourceData.PlayerGamesData;
            
            UnlockedTowers = sourceData.UnlockedTowers;
            
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

            RegisterEvents();
            
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
                };
                
            }
        }


#region Register Events

        void RegisterEvents()
        {
            RegisterWalletEvents();
            RegisterTowerUnlockEvent();
            RegisterWinsAndDefeatsEvents();
            
        }
        
        
        void RegisterWalletEvents()
        {
            ChangeBalance += (value) =>
            {
                WalletData.Balance = (ulong)((long)WalletData.Balance + value);
                
                OnChangeBalance?.Invoke(WalletData.Balance);
            };
            GetBalance += () => WalletData.Balance;

        }
        
        void RegisterTowerUnlockEvent()
        {
            Tower.OnUnlockTower += (tower) =>
            {
                if(UnlockedTowers.Any(unlockedTower => unlockedTower.ID == tower.ID))
                    return;
                
                UnlockedTowers.Add(new TowerSerializable(tower));
            };
            
        }

        void RegisterWinsAndDefeatsEvents()
        {
            AddGameResult += (result) =>
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
                
            };

            
        }

#endregion
       
        
        
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
