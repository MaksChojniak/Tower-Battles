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
    
    public class NotEnoughtCurrencyInvoker : MonoBehaviour
    {

        [SerializeField] CurrencyType CurrencyType;

        [Space]
        [SerializeField] AnimationClip[] Clips;
        [SerializeField] List<(string name, float lenght)> ClipsInfo = new List<(string, float)>();
        [SerializeField] UnityEvent Events;


        void Awake()
        {
            foreach (var clip in Clips)
            {
                ClipsInfo.Add(new (clip.name, clip.length));
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
