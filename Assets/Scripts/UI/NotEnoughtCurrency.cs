using System;
using System.Globalization;
using System.Threading.Tasks;
using MMK;
using TMPro;
using UI.Animations;
using UnityEngine;
using UnityEngine.UI;

namespace UI
{
    public class NotEnoughtCurrency : MonoBehaviour
    {
        public delegate void ShowPanelDelegate(string currencyName, long price, long balance, Action onAccept);
        public ShowPanelDelegate ShowPanel;
        
        public delegate void ShowCoinsPanelDelegate(long price, long balance, Action onAccept);
        public ShowCoinsPanelDelegate ShowCoinsPanel;
        
        public delegate void ShowGemsPanelDelegate(long price, long balance, Action onAccept);
        public ShowGemsPanelDelegate ShowGemsPanel;


        [SerializeField] TMP_Text TittleText;
        [SerializeField] TMP_Text ContentText;
        
        [Space]
        [SerializeField] Button OutsideButton; 
        [SerializeField] Button DeclineButton; 
        [SerializeField] Button AcceptButton;
        
        [Space]
        [SerializeField] UIAnimation ClosePanelAnimationUI;
        
        

        void Awake()
        {
            RegisterHandlers();
            
        }

        void OnDestroy()
        {
            UnregisterHandlers();
            
        }

        
        void Start()
        {
            
        }
        
        void Update()
        {
            
            
        }



#region Register & Unregister Handlers

        void RegisterHandlers()
        {
            ShowPanel += OnShowPanel;

            ShowCoinsPanel += OnShowCoinsPanel;
            ShowGemsPanel += OnShowGemsPanel;

        }
        
        void UnregisterHandlers()
        {
            ShowGemsPanel -= OnShowGemsPanel;
            ShowCoinsPanel -= OnShowCoinsPanel;

            ShowPanel -= OnShowPanel;

        }
        
#endregion

        

        void OnShowCoinsPanel(long price, long balance, Action onAccept) => OnShowPanel(
            $"{StringFormatter.GetSpriteText(new SpriteTextData(){SpriteName = $"{GlobalSettingsManager.GetGlobalSettings.Invoke().CoinsIconName}"})}",
            GlobalSettingsManager.GetGlobalSettings.Invoke().CoinsColor,
            price, balance, onAccept);

        void OnShowGemsPanel(long price, long balance, Action onAccept) => OnShowPanel(
            $"{StringFormatter.GetSpriteText(new SpriteTextData(){SpriteName = $"{GlobalSettingsManager.GetGlobalSettings.Invoke().GemsIconName}"})}", 
            GlobalSettingsManager.GetGlobalSettings.Invoke().GemsColor,
            price, balance, onAccept);

        
        void OnShowPanel(string currencyName, long price, long balance, Action onAccept) => OnShowPanel(currencyName, Color.white, price, balance, onAccept);
        
        
        void OnShowPanel(string currencyName, Color currencyColor, long price, long balance, Action onAccept)
        {
            TittleText.text = $"You Need More {currencyName}";
            ContentText.text = $"Buy The Missing {StringFormatter.GetColoredText($"{price - balance}", currencyColor)} {currencyName}";
            
            OutsideButton.onClick.RemoveAllListeners();
            OutsideButton.onClick.AddListener(Close);
            
            
            DeclineButton.onClick.RemoveAllListeners();
            DeclineButton.onClick.AddListener(Close);
            
            
            AcceptButton.onClick.RemoveAllListeners();
            AcceptButton.onClick.AddListener(onAccept.Invoke);
            AcceptButton.onClick.AddListener(Close);
            
        }
        
        
        
        
        public async void Close()
        {
            ClosePanelAnimationUI.PlayAnimation();
            await Task.Delay( Mathf.RoundToInt(ClosePanelAnimationUI.animationLenght * 1000) );
            
            Destroy(this.gameObject); 
        }
        
        
    }
}
