using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using UI.Animations;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.Events;

namespace UI
{
    public enum CurrencyType
    {
        Coins, 
        Gems,
    }

    [Serializable]
    public class AnimationClipExtended
    {
        public AnimationClip Clip;
        public bool IsReversed;
        
        public string GetName() => Clip.name + (IsReversed ? "_Reversed" : "");
        public float GetLenght() => Clip.length;
    }
    
    public class NotEnoughtCurrencyInvoker : MonoBehaviour
    {

        [SerializeField] CurrencyType CurrencyType;

        [Space]
        [SerializeField] AnimationClipExtended[] Clips;
        [SerializeField] List<(string name, float lenght)> ClipsInfo = new List<(string, float)>();
        [SerializeField] UnityEvent Events;


        void Awake()
        {
            foreach (var clip in Clips)
            {
                ClipsInfo.Add(new (clip.GetName(), clip.GetLenght()));
            }
        }

        public void ShowWarningPanel(long price, long balance)
        {

            switch (CurrencyType)
            {
                case CurrencyType.Coins:
                    NotEnoughtCurrency.ShowCoinsPanel?.Invoke(price, balance, GetClickActions);
                    break;
                case CurrencyType.Gems:
                    NotEnoughtCurrency.ShowGemsPanel?.Invoke(price, balance, GetClickActions);
                    break;
                default:
                    NotEnoughtCurrency.ShowPanel?.Invoke("Unknown", price, balance, GetClickActions);
                    break;
            }
            
        }

        async void GetClickActions()
        {
            Events?.Invoke();

            if (!this.transform.root.TryGetComponent<Animator>(out var animator))
                return;
            
            foreach (var clipInfo in ClipsInfo)
            {
                animator.Play(clipInfo.name);
                await Task.Delay(Mathf.RoundToInt(clipInfo.lenght * 1000));
            }

        }



    }
    
}
