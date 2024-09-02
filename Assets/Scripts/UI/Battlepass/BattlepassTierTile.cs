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
        
        public SetLockedStateDelegate SetPremiumBattlepassLockedState;
        

        
        Transform _freeBattlepass;
        Transform _freeBattlepassRewardContainer => _freeBattlepass.GetChild(0);
        Transform _freeBattlepassTierLockedMask => _freeBattlepass.GetChild(2);
        
        Transform _premiumBattlepass;
        Transform _premiumBattlepassRewardContainer => _premiumBattlepass.GetChild(0);
        Transform _premiumBattlepassTierLockedMask => _premiumBattlepass.GetChild(2);
        Transform _premiumBattlepassLockedMask => _premiumBattlepass.GetChild(3);
        

        void Awake()
        {
            RegisterHandlers();

            _freeBattlepass = this.transform.GetChild(1);
            _premiumBattlepass = this.transform.GetChild(2);
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

            SetPremiumBattlepassLockedState += OnSetPremiumBattlepassLockedState;

        }
        
        void UnregisterHandlers()
        {
            SetPremiumBattlepassLockedState -= OnSetPremiumBattlepassLockedState;
            
            SetPremiumTileLockedState -= OnSetPremiumTileLockedState;
            SetFreeTileLockedState -= OnSetFreeTileLockedState;
            
            SetPremiumBattlepassImages -= OnSetPremiumBattlepassImages;
            SetFreeBattlepassImages -= OnSetFreeBattlepassImages;
            
        }

#endregion



#region Set Rewards Images & Prefabs

        
        void OnSetFreeBattlepassImages(RewardUI[] rewardsUI) => SetImagesToContainer(_freeBattlepassRewardContainer, rewardsUI);
        
        void OnSetPremiumBattlepassImages(RewardUI[] rewardsUI) => SetImagesToContainer(_premiumBattlepassRewardContainer, rewardsUI);



        void SetImagesToContainer(Transform container, RewardUI[] rewardsUI)
        {
            foreach (var rewardUI in rewardsUI)
            {
                GameObject reward = Instantiate(rewardUI.Prefab, Vector3.zero, Quaternion.identity, container);
                
                Image image = reward.transform.GetChild(0).GetComponent<Image>();
                image.sprite = rewardUI.Sprite;
            }
            
        }
        
        
#endregion



#region Set Unlocked Tile State

        
        void OnSetFreeTileLockedState(bool lockState) => SetTileLockState(_freeBattlepassTierLockedMask, !lockState);
        
        void OnSetPremiumTileLockedState(bool lockState) => SetTileLockState(_premiumBattlepassTierLockedMask, !lockState);


        
        void SetTileLockState(Transform panel, bool lockState) => panel.gameObject.SetActive(lockState);
        
        
#endregion



#region Set Premium Battlepass Lockstate

        
        void OnSetPremiumBattlepassLockedState(bool lockState) => _premiumBattlepassLockedMask.gameObject.SetActive(!lockState);

        
#endregion


    }
}
