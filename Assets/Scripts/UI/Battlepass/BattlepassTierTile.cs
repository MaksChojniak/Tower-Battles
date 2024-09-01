using System;
using UnityEngine;
using UnityEngine.UI;

namespace UI.Battlepass
{
    public class RewardUI
    {
        public GameObject Prefab;
        public Sprite Sprite;
    }
    
    public class BattlepassTierTile : MonoBehaviour
    {

        public delegate void SetImagesDelegate(RewardUI[] rewardsUI);
        public SetImagesDelegate SetFreeBattlepassImages;
        public SetImagesDelegate SetPremiumBattlepassImages;

        public delegate void SetLockedStateDelegate(bool lockState);
        public SetLockedStateDelegate SetFreeTileLockedState;
        public SetLockedStateDelegate SetPremiumTileLockedState;
        

        Transform _freeBattlepassContainer;
        Transform _premiumBattlepassContainer;
        

        void Awake()
        {
            RegisterHandlers();

            _freeBattlepassContainer = this.transform.GetChild(1);
            _premiumBattlepassContainer = this.transform.GetChild(2);
        }

        void OnDestroy()
        {
            UnregisterHandlers();
            
        }


        
#region Register & Unregister Handlers

        void RegisterHandlers()
        {
            SetFreeBattlepassImages += OnSetFreeBattlepassImages;
            SetPremiumBattlepassImages += OnSetPremiumBattlepassImages;

            SetFreeTileLockedState += OnSetFreeTileLockedState;
            SetPremiumTileLockedState += OnSetPremiumTileLockedState;

        }
        
        void UnregisterHandlers()
        {
            SetPremiumTileLockedState -= OnSetPremiumTileLockedState;
            SetFreeTileLockedState -= OnSetFreeTileLockedState;
            
            SetPremiumBattlepassImages -= OnSetPremiumBattlepassImages;
            SetFreeBattlepassImages -= OnSetFreeBattlepassImages;
            
        }

#endregion



        void OnSetFreeBattlepassImages(RewardUI[] rewardsUI) => SetImagesToContainer(_freeBattlepassContainer.GetChild(0), rewardsUI);
        
        void OnSetPremiumBattlepassImages(RewardUI[] rewardsUI) => SetImagesToContainer(_premiumBattlepassContainer.GetChild(0), rewardsUI);



        void SetImagesToContainer(Transform container, RewardUI[] rewardsUI)
        {
            foreach (var rewardUI in rewardsUI)
            {
                GameObject reward = Instantiate(rewardUI.Prefab, Vector3.zero, Quaternion.identity, container);
                
                Image image = reward.GetComponent<Image>();
                image.sprite = rewardUI.Sprite;
            }
            
        }
        
        
        
        
        void OnSetFreeTileLockedState(bool lockState) => SetTileLockState(_freeBattlepassContainer, lockState);
        
        void OnSetPremiumTileLockedState(bool lockState) => SetTileLockState(_freeBattlepassContainer, lockState);


        
        void SetTileLockState(Transform container, bool lockState)
        {
            
        }
        
        
        

    }
}
