using System;
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
        int _cachedSliderDirection;

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
            float sliderValue = ((float)value / 100f);

            slider.value += sliderValue;
            
            Invoke(nameof(SetReadyInvoke), _interval);
        }

        void SetReadyInvoke() => readyToNextInvoke = true;

        void Update()
        {
            if (readyToNextInvoke)
            {
                readyToNextInvoke = false;

                if (_interval > 0.035f)
                    _interval -= Time.deltaTime * 2;
                
                onPointerHold?.Invoke(_cachedSliderDirection);
            }
        }
    }
}
