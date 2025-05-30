﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using MMK;
using MMK.ScriptableObjects;
using Player;
using Player.Database;
using UI;
using UI.Battlepass;
using UnityEngine;

namespace Promocodes
{
    [CreateAssetMenu(menuName = "Promocodes Generator", fileName = "Promocodes Generator")]
    public class PromocodesGenerator : ScriptableObject
    {


        [Header("Code Properties")]
        [SerializeField] string CustomName;
        [Range(1, 500)] [SerializeField] int CodesCount = 1;
        [Range(1, 30)] [SerializeField] int CodeLenght = 10;
        [Space]
        [Header("Promocode Properties")]
        [Range(1, 1000)] [SerializeField] int Uses = 1;
        [SerializeField] bool TimeLimitedCode = false;
        [SerializeField] ulong HoursDuration = 0;
        [Space]
        [Header("Promocode Reward")]
        [SerializeField] RewardType Type;
        [SerializeField] ulong Coins;
        [SerializeField] ulong Gems;
        [SerializeField] TowerSkin Skin;
        // PromocodeReward Reward()
        // {
        //     PromocodeReward reward = new PromocodeReward() {Type = Type};
        //         
        //     switch (Type)
        //     {
        //         case RewardType.Coins:
        //             reward.Coins = Coins;
        //             break;
        //         case RewardType.Coins_Gems:
        //             reward.Coins = Coins;
        //             reward.Gems = Gems;
        //             break;
        //         case RewardType.Coins_Skin:
        //             reward.Coins = Coins;
        //             reward.Skin = new TowerSkinSerializable(Skin);
        //             break;
        //         case RewardType.Gems:
        //             reward.Gems = Gems;
        //             break;
        //         case RewardType.Gems_Skin:
        //             reward.Gems = Gems;
        //             reward.Skin = new TowerSkinSerializable(Skin);
        //             break;
        //         case RewardType.Skin:
        //             reward.Skin = new TowerSkinSerializable(Skin);
        //             break;
        //         case RewardType.Coins_Gems_Skin:
        //             reward.Coins = Coins;
        //             reward.Gems = Gems;
        //             reward.Skin = new TowerSkinSerializable(Skin);;
        //             break;
        //         case RewardType.None:
        //             break;
        //     }
        //
        //     return reward;
        // }
        
        
        [Space(28)]
        [SerializeField] bool Generate;
        [Space(12)]
        [SerializeField] bool Clear;


        void OnValidate()
        {
            if (Generate)
            {
                Generate = false;
                
                GenerateCodes();
            }
            
            
            if (Clear)
            {
                Clear = false;

                ClearProperties();
            }
            
            
            
        }


        async void GenerateCodes()
        {
            string debugLog = "Promocodes \n";

            PromocodeReward reward = new PromocodeReward()
            {
                Type = Type,
                Coins = Coins,
                Gems = Gems,
                Skin = (Type == RewardType.Skin ? new TowerSkinSerializable(Skin) : new TowerSkinSerializable())
            };
            PromocodeProperties properties = new PromocodeProperties()
            {
                UsesLeft = Uses,
                TimeLimitedCode = TimeLimitedCode,
                HoursDuration = HoursDuration,
                CreateCodeDateUTC = ServerDate.SimulatedDateOnServerUTC().Ticks
            };

            Database.FilesName(Promocode.PROMOCODES_PATH, OnGetFilesName);

            async void OnGetFilesName(List<string> filesName)
            {
                if(!string.IsNullOrEmpty(CustomName) && !string.IsNullOrWhiteSpace(CustomName))
                {
                    if (filesName.WithoutExtension().Contains(CustomName))
                        throw new Exception("Code exist in database");
                    else
                    {
                        string code = CustomName;
                        Promocode promocode = new Promocode()
                        {
                            Reward = reward,
                            Properties = properties,
                        };

                        debugLog += $"code: {code}   |  reward: {reward.Type}" + "\n";

                        Database.POST($"{Promocode.PROMOCODES_PATH}/{code}.txt", promocode);
                    }
                }
                else
                {
                    for(int i = 0; i < CodesCount; i++)
                    {
                        string code = await PromocodeUtils.GenerateCodesAsync(filesName, CodeLenght);
                        Promocode promocode = new Promocode()
                        {
                            Reward = reward,
                            Properties = properties,
                        };

                        debugLog += $"code: {code}   |  reward: {reward.Type}" + "\n";

                        Database.POST($"{Promocode.PROMOCODES_PATH}/{code}.txt", promocode);
                    }
                }

                Debug.Log(debugLog);

                ClearProperties();

            }


        }


        

        void ClearProperties()
        {
            CustomName = "";
            
            CodesCount = 1;
            CodeLenght = 10;

            Uses = 1;
            TimeLimitedCode = false;
            HoursDuration = 0;
            
            Type = RewardType.None;
            Coins = 0;
            Gems = 0;
            Skin = null;

        }
        
        
        
        
        
        
        
    }
}
