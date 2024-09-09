using System;
using System.Threading.Tasks;
using DefaultNamespace;
using MMK.ScriptableObjects;
using TMPro;
using UI.Animations;
using UnityEngine;
using UnityEngine.UI;

namespace UI
{
    public enum ConfirmationItemType
    {
        Offert,
        Tower,
        Skin,
    }
    
    public class Confirmation : MonoBehaviour
    {
        public delegate void ShowOffertDelegate(string content, Action onAccept, Action onDecline);
        public ShowOffertDelegate ShowOffert;
        
        public delegate void ShowSkinDelegate(string content, Action onAccept, Action onDecline, Tower tower, TowerSkin skin);
        public ShowSkinDelegate ShowSkin;
        
        public delegate void ShowTowerDelegate(string content, Action onAccept, Action onDecline, Tower tower);
        public ShowTowerDelegate ShowTower;



        public ConfirmationItemType Type;
        

        [SerializeField] TMP_Text ContentText;

        [SerializeField] RotateableTower RotateableTower;
        
        [SerializeField] Button OutsideButton; 
        [SerializeField] Button DeclineButton; 
        [SerializeField] Button AcceptButton;
        
        [SerializeField] UIAnimation StartLoadingAnimationUI;
        [SerializeField] UIAnimation EndLoadingAnimationUI;
        [SerializeField] UIAnimation ClosePanelAnimationUI;
        
        
        
        
        void Awake()
        {
            RegisterHandlers();
            
        }

        void OnDestroy()
        {
            UnregisterHandlers();
            
        }



#region Register & Unregister Handlers

        void RegisterHandlers()
        {
            ShowOffert += OnShow;
            ShowSkin += OnShow;
            ShowTower += OnShow;

        }
        
        void UnregisterHandlers()
        {
            ShowTower -= OnShow;
            ShowSkin -= OnShow;
            ShowOffert -= OnShow;

        }

#endregion


        void OnShow(string content, Action onAccept, Action onDecline)
        {
            
            ContentText.text = content;
            
            
            OutsideButton.onClick.RemoveAllListeners();
            OutsideButton.onClick.AddListener(onDecline.Invoke);
            OutsideButton.onClick.AddListener(OnClick);
            
            
            DeclineButton.onClick.RemoveAllListeners();
            DeclineButton.onClick.AddListener(onDecline.Invoke);
            DeclineButton.onClick.AddListener(OnClick);
            
            
            AcceptButton.onClick.RemoveAllListeners();
            AcceptButton.onClick.AddListener(onAccept.Invoke);

        }

        
        void OnShow(string content, Action onAccept, Action onDecline, Tower tower, TowerSkin skin)
        {
            if(RotateableTower != null)
                RotateableTower.SpawnTowerProcess(tower, skin);
            
            OnShow(content, onAccept, onDecline);
        }
        
        
        void OnShow(string content, Action onAccept, Action onDecline, Tower tower)
        {
            OnShow(content, onAccept, onDecline, tower, tower.CurrentSkin);
        }
        
        
        

        async void OnClick()
        {
            ClosePanelAnimationUI.PlayAnimation();
            await Task.Delay( Mathf.RoundToInt(ClosePanelAnimationUI.GetAnimationClip().length * 1000) );
            
            Destroy(this.gameObject);
        }


        public void StartLoadingAnimation() => StartLoadingAnimationUI.PlayAnimation();

        public async void StopLoadingAnimation()
        {
            EndLoadingAnimationUI.PlayAnimation();
            await Task.Delay( Mathf.RoundToInt(EndLoadingAnimationUI.GetAnimationClip().length * 1000) );

            await Task.Delay( 1000 );
            
            Destroy(this.gameObject);
        }


    }
    
}
