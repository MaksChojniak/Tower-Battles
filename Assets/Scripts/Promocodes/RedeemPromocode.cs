using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;
using System.Threading.Tasks;
using MMK;
using MMK.ScriptableObjects;
using Player;
using Player.Database;
using TMPro;
using UI;
using UI.Animations;
using UI.Battlepass;
using UnityEngine;

namespace Promocodes
{
    
    public class RedeemPromocode : MonoBehaviour
    {
        [SerializeField] UIAnimation StartLoadingAnimation;
        [Space]
        [SerializeField] UIAnimation CompleteAnimation;
        [SerializeField] UIAnimation ErrorAnimation;
        [Space]
        [SerializeField] UIAnimation ClosePanelAnimation;


        string code;


        
        void Awake()
        {

        }


        public void UpdateCode(string text) => code = text;
        
        
        
        public async void RedeemCode()
        {
            var playerID = PlayerController.GetLocalPlayerData?.Invoke().ID;

            if (string.IsNullOrEmpty(code))
                return;
            
            StartLoadingAnimation.PlayAnimation();
            await StartLoadingAnimation.WaitAsync();

            Database.FilesName(Promocode.PROMOCODES_PATH, OnGetFilesName);


            async void OnGetFilesName(IEnumerable<string> filesName)
            {
                if (filesName.Count() <= 0)
                {
                    await OnRedeemError();
                    return;
                }

                if (!filesName.WithoutExtension().Contains(code))
                {
                    await OnRedeemError();
                    return;
                }

                string fileName = filesName.WithoutExtension().First(name => name == code);
                string filePath = $"{Promocode.PROMOCODES_PATH}/{fileName}.txt";

                Database.GET<Promocode>(filePath, OnGetData);

                async void OnGetData(GET_Callback<Promocode> result)
                {
                    if (result.Status != DatabaseStatus.Success)
                    {
                        await OnRedeemError();
                        return;
                    }

                    Promocode promocode = result.Data;

                    if (!promocode.Properties.CodeIsValid(ServerDate.SimulatedDateOnServerUTC()))
                    {
                        Database.DELETE(filePath);

                        await OnRedeemError();

                        return;
                    }

                    if (promocode.Properties.IsPlayersRedeemedCode(playerID))
                    {
                        await OnRedeemError();

                        return;
                    }
                    promocode.Properties.PlayersRedeemedCode.Add(playerID);


                    PromocodeReward[] rewards = promocode.Reward.GetSplittedRewards();

                    List<MessageProperty> messageProperties = new List<MessageProperty>();

                    foreach (PromocodeReward reward in rewards)
                    {
                        switch (reward.Type)
                        {
                            case RewardType.Coins:
                                PlayerData.ChangeCoinsBalance?.Invoke((long)reward.Coins);
                                messageProperties.Add(new MessageProperty() { Name = $"{reward.Type}", Value = $"{StringFormatter.GetCoinsText((long)reward.Coins, true, "66%")}", });
                                break;
                            case RewardType.Gems:
                                PlayerData.ChangeGemsBalance?.Invoke((long)reward.Gems);
                                messageProperties.Add(new MessageProperty() { Name = $"{reward.Type}", Value = $"{StringFormatter.GetGemsText((long)reward.Gems, true, "66%")}", });
                                break;
                            case RewardType.Skin:
                                TowerSkin skin = TowerSkin.GetTowerSkinByID(reward.Skin.ID);
                                Tower tower = Tower.GetTowerBySkinID(skin.ID);
                                skin.UnlockSkin();
                                messageProperties.Add(new MessageProperty() { Name = $"{reward.Type}", Value = $"{StringFormatter.GetSkinText(skin)} {StringFormatter.GetTowerText(tower)}", });
                                break;
                        }

                    }

                    if (!promocode.Properties.TimeLimitedCode)
                    {
                        promocode.Properties.UsesLeft -= 1;
                        if (promocode.Properties.UsesLeft <= 0)
                            Database.DELETE(filePath);
                        else
                            Database.POST(filePath, promocode);
                    }
                    else
                        Database.POST(filePath, promocode);

                    await OnRedeemComplete();

                    MessageQueue.AddMessageToQueue?.Invoke(new Message()
                    {
                        MessageType = MessageType.Normal,
                        Tittle = "Promocode Rewards",
                        Properties = messageProperties,
                    });

                }

            }
    
        }


        
        async Task OnRedeemError()
        {
            ErrorAnimation.PlayAnimation();
            //await ErrorAnimation.WaitAsync();
            await Task.Delay( Mathf.RoundToInt(ErrorAnimation.animationLenght * 1000) );
            // throw new Exception("promocode not exist");

            ClosePanel();
            
        }
        
        
        async Task OnRedeemComplete()
        {
            CompleteAnimation.PlayAnimation();
            //await CompleteAnimation.WaitAsync();
            await Task.Delay( Mathf.RoundToInt(CompleteAnimation.animationLenght * 1000) );

            ClosePanel();
        }



        public async void ClosePanel()
        {
            ClosePanelAnimation.PlayAnimation();
            //await ClosePanelAnimation.WaitAsync();
            await Task.Delay( Mathf.RoundToInt(ClosePanelAnimation.animationLenght * 1000) );
            
            Destroy(this.gameObject);
            
        }


    }
    
}
