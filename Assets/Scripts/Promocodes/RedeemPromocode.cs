using System;
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


        
        async void Awake()
        {

        }


        public void UpdateCode(string text) => code = text;
        
        
        
        public async void RedeemCode()
        {
            if(string.IsNullOrEmpty(code))
                return;
            
            StartLoadingAnimation.PlayAnimation();
            await Task.Delay( Mathf.RoundToInt(StartLoadingAnimation.animationLenght * 1000) );

            Dictionary<string, Promocode> promocodes = await PromocodeUtils.GetExistingCodes();
            string playerID =  PlayerController.GetLocalPlayerData?.Invoke().ID;

            if (!promocodes.Keys.Contains(code))
            {
                await OnRedeemError();
                
                return;
            }

            PromocodeProperties properties = promocodes[code].Properties;

            if (!properties.CodeIsValid(ServerDate.SimulatedDateOnServerUTC()))
            {
                promocodes.Remove(code);
                await Database.POST<Dictionary<string, Promocode>>(promocodes);
                
                await OnRedeemError();
                
                return;
            }
            
            if (properties.IsPlayersRedeemedCode(playerID))
            {
                await OnRedeemError();
                
                return;
            }
            
            
            PromocodeReward[] rewards = promocodes[code].Reward.GetSplittedRewards();

            List<MessageProperty> messageProperties = new List<MessageProperty>();   
            
            foreach (PromocodeReward reward in rewards)
            {
                switch (reward.Type)
                {
                    case RewardType.Coins:
                        PlayerData.ChangeCoinsBalance?.Invoke((long)reward.Coins);
                        messageProperties.Add(new MessageProperty() { Name = $"{reward.Type}", Value = $"{reward.Coins}", });
                        break;
                    case RewardType.Gems:
                        PlayerData.ChangeGemsBalance?.Invoke((long)reward.Gems);
                        messageProperties.Add(new MessageProperty() { Name = $"{reward.Type}", Value = $"{reward.Gems}", });
                        break;
                    case RewardType.Skin:
                        TowerSkin skin = TowerSkin.GetTowerSkinByID(reward.Skin.ID);
                        Tower tower = Tower.GetTowerBySkinID(skin.ID);
                        skin.UnlockSkin();
                        messageProperties.Add(new MessageProperty() { Name = $"{reward.Type}", Value = $"{StringFormatter.GetSkinText(skin)} {StringFormatter.GetTowerText(tower)}", }); 
                        break;       
                }

            }

            
            // promocodes.Remove(code);
            promocodes[code].Properties.PlayersRedeemedCode.Add(playerID);
            if (!promocodes[code].Properties.TimeLimitedCode)
            {
                promocodes[code].Properties.UsesLeft -= 1;
                if (promocodes[code].Properties.UsesLeft <= 0)
                    promocodes.Remove(code);
            }
            
            await Database.POST<Dictionary<string, Promocode>>(promocodes);

            await OnRedeemComplete();
            
            MessageQueue.AddMessageToQueue?.Invoke(new Message()
            {
                Tittle = "Promocode Rewards",
                Properties = messageProperties,
            });
            
            ClosePanel();
            
        }


        
        async Task OnRedeemError()
        {
            ErrorAnimation.PlayAnimation();
            await Task.Delay( Mathf.RoundToInt(ErrorAnimation.animationLenght * 1000) );
            // throw new Exception("promocode not exist");

            ClosePanel();
            
        }
        
        
        async Task OnRedeemComplete()
        {
            CompleteAnimation.PlayAnimation();
            await Task.Delay( Mathf.RoundToInt(CompleteAnimation.animationLenght * 1000) );
            
        }



        public async void ClosePanel()
        {
            ClosePanelAnimation.PlayAnimation();
            await Task.Delay( Mathf.RoundToInt(ClosePanelAnimation.animationLenght * 1000) );
            
            Destroy(this.gameObject);
            
        }


    }
    
}
