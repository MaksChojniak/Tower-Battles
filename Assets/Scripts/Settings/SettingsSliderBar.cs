using System;
using System.Threading.Tasks;
using UnityEditor;
using UnityEngine;
using UnityEngine.Rendering;
using UnityEngine.UI;

namespace DefaultNamespace
{
    public class SettingsSliderBar : MonoBehaviour
    {
        public delegate void OnPointerHold(int value);
        public event OnPointerHold onPointerHold;

        // public event Action<int> onPointerHold;
        const float interval = 0.25f;
        
        public Slider slider;

        [SerializeField] float _interval;
        bool readyToNextInvoke;
        [SerializeField] int _cachedSliderDirection;

        public void OnBeginHold(int value)
        {
            _interval = interval;
            readyToNextInvoke = true;
            
            _cachedSliderDirection = value;
            
            onPointerHold += OnHold;
        }

        public void OnEndHold()
        {
            _interval = interval;
            readyToNextInvoke = false;
            
            _cachedSliderDirection = 0;
            
            onPointerHold -= OnHold;
        }

        void OnHold(int value)
        {
            // float sliderValue = (value / 100f);

            slider.value += value;
            
            // Invoke(nameof(SetReadyInvoke), _interval);
            SetReadyInvoke(_interval);
        }

        async void SetReadyInvoke(float delay = 0)
        {
            await Task.Delay( Mathf.RoundToInt(delay * 1000) );
            
            readyToNextInvoke = true;
        }



        void Update()
        {
            if (readyToNextInvoke)
            {
                readyToNextInvoke = false;

                if (_interval > 0.035f)
                    _interval -= Time.unscaledDeltaTime * 2;
                
                onPointerHold?.Invoke(_cachedSliderDirection);
            }
        }
        
    }
}
