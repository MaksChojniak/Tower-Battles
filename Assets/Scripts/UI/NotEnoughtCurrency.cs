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
        public static ShowPanelDelegate ShowPanel;
        
        public delegate void ShowCoinsPanelDelegate(long price, long balance, Action onAccept);
        public static ShowCoinsPanelDelegate ShowCoinsPanel;
        
        public delegate void ShowGemsPanelDelegate(long price, long balance, Action onAccept);
        public static ShowGemsPanelDelegate ShowGemsPanel;


        [SerializeField] TMP_Text TittleText;
        [SerializeField] TMP_Text ContentText;
        
        [Space]
        [SerializeField] TMP_Text ButtonText;
        
        [Space]
        [SerializeField] Button OutsideButton; 
        [SerializeField] Button DeclineButton; 
        [SerializeField] Button AcceptButton;

        
        [Space]
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
            $"Coins", GlobalSettingsManager.GetGlobalSettings.Invoke().CoinsColor,
            $"{StringFormatter.GetSpriteText(new SpriteTextData(){SpriteName = $"{GlobalSettingsManager.GetGlobalSettings.Invoke().CoinsIconName}"})}",
            price, balance, onAccept);

        void OnShowGemsPanel(long price, long balance, Action onAccept) => OnShowPanel(
            $"Gems", GlobalSettingsManager.GetGlobalSettings.Invoke().GemsColor,
            $"{StringFormatter.GetSpriteText(new SpriteTextData(){SpriteName = $"{GlobalSettingsManager.GetGlobalSettings.Invoke().GemsIconName}"})}",
            price, balance, onAccept);

        
        void OnShowPanel(string currencyName, long price, long balance, Action onAccept) => OnShowPanel(currencyName, Color.white, "", price, balance, onAccept);
        
        
        async void OnShowPanel(string currencyName, Color currencyColor, string currencyIcon, long price, long balance, Action onAccept)
        {
            TittleText.text = $"You Need More {StringFormatter.GetColoredText($"{currencyName}", currencyColor)}";
            ContentText.text = $"Buy The Missing {StringFormatter.GetColoredText($"{price - balance} {currencyIcon}", currencyColor)}";

            ButtonText.text = $"Shop {currencyIcon}";
            
            OutsideButton.onClick.RemoveAllListeners();
            OutsideButton.onClick.AddListener(Close);
            
            
            DeclineButton.onClick.RemoveAllListeners();
            DeclineButton.onClick.AddListener(Close);
            
            
            AcceptButton.onClick.RemoveAllListeners();
            AcceptButton.onClick.AddListener(onAccept.Invoke);
            AcceptButton.onClick.AddListener(Close);
            
            
            OpenPanelAnimationUI.PlayAnimation();
            await OpenPanelAnimationUI.WaitAsync();
            //await Task.Delay( Mathf.RoundToInt(OpenPanelAnimationUI.animationLenght * 1000) );
        }
        
        
        
        
        public async void Close()
        {
            ClosePanelAnimationUI.PlayAnimation();
            await ClosePanelAnimationUI.WaitAsync();
            //await Task.Delay( Mathf.RoundToInt(ClosePanelAnimationUI.animationLenght * 1000) );
        }
        
        
    }
}
