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
        public delegate void ShowOffertDelegate(string content, Action<Func<Task>> onAccept);
        public static ShowOffertDelegate ShowOffert;
        
        public delegate void ShowSkinDelegate(string content, Action<Func<Task>> onAccept, Tower tower, TowerSkin skin);
        public static ShowSkinDelegate ShowSkin;
        
        public delegate void ShowTowerDelegate(string content, Action<Func<Task>> onAccept, Tower tower);
        public static ShowTowerDelegate ShowTower;



        public ConfirmationItemType Type;
        

        [SerializeField] TMP_Text ContentText;

        [SerializeField] RotateableTower RotateableTower;
        
        [SerializeField] Button OutsideButton; 
        [SerializeField] Button DeclineButton; 
        [SerializeField] Button AcceptButton;
        
        [SerializeField] UIAnimation StartLoadingAnimationUI;
        [SerializeField] UIAnimation EndLoadingAnimationUI;
        [SerializeField] UIAnimation OpenPanelAnimationUI;
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
            switch (Type)
            {
                case ConfirmationItemType.Offert:
                    ShowOffert += OnShow;
                    break;
                case ConfirmationItemType.Skin:
                    ShowSkin += OnShow;
                    break;
                case ConfirmationItemType.Tower:
                    ShowTower += OnShow;
                    break;
            }

        }
        
        void UnregisterHandlers()
        {

            switch (Type)
            {
                case ConfirmationItemType.Offert:
                    ShowOffert -= OnShow;
                    break;
                case ConfirmationItemType.Skin:
                    ShowSkin -= OnShow;
                    break;
                case ConfirmationItemType.Tower:
                    ShowTower -= OnShow;
                    break;
            }

        }

#endregion


        async void OnShow(string content, Action<Func<Task>> onAccept)
        {
            
            ContentText.text = content;
            
            
            OutsideButton.onClick.RemoveAllListeners();
            OutsideButton.onClick.AddListener(Close);
            
            
            DeclineButton.onClick.RemoveAllListeners();
            DeclineButton.onClick.AddListener(Close);
            
            
            AcceptButton.onClick.RemoveAllListeners();
            AcceptButton.onClick.AddListener(StartLoadingAnimation);
            // AcceptButton.onClick.AddListener( () => onAccept?.Invoke(StopLoadingAnimation()));
            AcceptButton.onClick.AddListener(() => onAccept.Invoke(StopLoadingAnimation));


            OpenPanelAnimationUI.PlayAnimation();
            await Task.Delay( Mathf.RoundToInt(OpenPanelAnimationUI.animationLenght * 1000) );

            void xd()
            {
                Debug.Log("Hello World 0");
                onAccept?.Invoke(StopLoadingAnimation);
            }
        }


        
        void OnShow(string content, Action<Func<Task>> onAccept, Tower tower, TowerSkin skin)
        {
            if(RotateableTower != null)
                RotateableTower.SpawnTowerProcess?.Invoke(tower, skin);
            
            OnShow(content, onAccept);
        }
        
        
        void OnShow(string content, Action<Func<Task>> onAccept, Tower tower)
        {
            OnShow(content, onAccept, tower, tower.CurrentSkin);
        }
        
        
        

        async void Close()
        {
            ClosePanelAnimationUI.PlayAnimation();
            await Task.Delay( Mathf.RoundToInt(ClosePanelAnimationUI.animationLenght * 1000) );
            
            // Destroy(this.gameObject); 
        }

        DateTime startTime;
        public void StartLoadingAnimation()
        {
            startTime = DateTime.Now;

            StartLoadingAnimationUI.PlayAnimation();
        }

        async Task StopLoadingAnimation()
        {
            while( (DateTime.Now - startTime).TotalSeconds < 0.75f )
                await Task.Yield();
            
            EndLoadingAnimationUI.PlayAnimation();
            await Task.Delay( Mathf.RoundToInt(EndLoadingAnimationUI.animationLenght * 1000) );

            await Task.Delay( 500 );

            Close();
        }


    }
    
}
