using System;
using TMPro;
using UnityEngine;
using UnityEngine.Tilemaps;
using UnityEngine.UI;

namespace UI.Battlepass
{
    public class RewardUI
    {
        public GameObject Prefab;
        public Sprite Sprite;
        public ulong Amount = 0;
        public bool IsClaimed;
    }
    
    public class BattlepassTierTile : MonoBehaviour
    {

        public delegate void SetImagesDelegate(RewardUI[] rewardsUI, Action<int> OnClickEvent);
        public SetImagesDelegate SetFreeBattlepassImages;
        public SetImagesDelegate SetPremiumBattlepassImages;

        public delegate void SetLockedStateDelegate(bool isUnlocked);
        public SetLockedStateDelegate SetFreeTileLockedState;
        public SetLockedStateDelegate SetPremiumTileLockedState;
        
        
        public delegate void SetBattlepassLockedStateDelegate(bool isUnlocked);
        public SetBattlepassLockedStateDelegate SetPremiumBattlepassLockedState;



        Transform _freeBattlepass;
        Transform _freeBattlepassRewardContainer => _freeBattlepass.GetChild(0);
        Transform _freeBattlepassTierLockedMask => _freeBattlepass.GetChild(2);
        
        Transform _premiumBattlepass;
        Transform _premiumBattlepassRewardContainer => _premiumBattlepass.GetChild(0);
        Transform _premiumBattlepassTierLockedMask => _premiumBattlepass.GetChild(2);
        Transform _premiumBattlepassLockedMask => _premiumBattlepass.GetChild(3);


        bool tierIsUnlocked;
        bool premiumBattlepassIsUnlocked;
        

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

        
        void OnSetFreeBattlepassImages(RewardUI[] rewardsUI, Action<int> OnClickEvent) => SetImagesToContainer(_freeBattlepassRewardContainer, rewardsUI, tierIsUnlocked, OnClickEvent);
        
        void OnSetPremiumBattlepassImages(RewardUI[] rewardsUI, Action<int> OnClickEvent) => SetImagesToContainer(_premiumBattlepassRewardContainer, rewardsUI, tierIsUnlocked && premiumBattlepassIsUnlocked, OnClickEvent);



        void SetImagesToContainer(Transform container, RewardUI[] rewardsUI, bool isUnlocked, Action<int> OnClickEvent)
        {
            for (int i = 0; i < container.childCount; i++)
            {
                Destroy(container.GetChild(i).gameObject);
            }

            for (int i = 0; i < rewardsUI.Length; i++)
            {
                int rewardIndex = i;
                RewardUI rewardUI = rewardsUI[rewardIndex];
                
                GameObject reward = Instantiate(rewardUI.Prefab, Vector3.zero, Quaternion.identity, container);
                
                Image image = reward.transform.GetChild(0).GetComponent<Image>();
                image.sprite = rewardUI.Sprite;

                TMP_Text amountText = reward.transform.GetChild(1).GetComponent<TMP_Text>();
                amountText.text = rewardUI.Amount > 0 ? $"{rewardUI.Amount}" : "";

                GameObject lockedMark = reward.transform.GetChild(3).gameObject;
                lockedMark.SetActive(!isUnlocked);
                GameObject unlockedMark = reward.transform.GetChild(4).gameObject;
                unlockedMark.SetActive(isUnlocked && rewardUI.IsClaimed);
                
                Button button = reward.GetComponent<Button>();
                button.onClick.AddListener(() => OnClickEvent?.Invoke(rewardIndex) );

                
            }
            
        }


        
        
#endregion



#region Set Unlocked Tile State

        
        void OnSetFreeTileLockedState(bool isUnlocked) => SetTileLockState(_freeBattlepassTierLockedMask, isUnlocked);
        
        void OnSetPremiumTileLockedState(bool isUnlocked) => SetTileLockState(_premiumBattlepassTierLockedMask, isUnlocked);



        void SetTileLockState(Transform mask, bool isUnlocked)
        {
            tierIsUnlocked = isUnlocked;
            
            mask.gameObject.SetActive(!tierIsUnlocked);
        }

#endregion



#region Set Premium Battlepass Lockstate


        void OnSetPremiumBattlepassLockedState(bool isUnlocked)
        {
            premiumBattlepassIsUnlocked = isUnlocked;
            
            _premiumBattlepassLockedMask.gameObject.SetActive(!premiumBattlepassIsUnlocked);
        }

#endregion


    }
}
