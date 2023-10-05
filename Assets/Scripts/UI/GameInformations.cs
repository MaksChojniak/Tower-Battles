using System;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace DefaultNamespace
{
    public class GameInformations : MonoBehaviour
    {

        [SerializeField] TMP_Text WaveCountText;
        [SerializeField] TMP_Text HealthText;
        [SerializeField] Image HealthBarImage;
        [SerializeField] TMP_Text BalanceText;

        [SerializeField] TMP_Text CountdownText;

        void Awake()
        {
            GamePlayerInformation.UpdateHealth += UpdateHealthInformation;
            GamePlayerInformation.UpdateBalance += UpdateBalanceInformation;
            
            WaveManager.UpdateCountdown += UpdateCountdown;
            WaveManager.UpdateWaveCount += UpdateWave;
        }

        void OnDestroy()
        {
            GamePlayerInformation.UpdateHealth -= UpdateHealthInformation;
            GamePlayerInformation.UpdateBalance -= UpdateBalanceInformation;
            
            WaveManager.UpdateCountdown -= UpdateCountdown;
            WaveManager.UpdateWaveCount -= UpdateWave;
        }

        void UpdateBalanceInformation(long value)
        {
            BalanceText.text = $"{value} $";
        }
        
        void UpdateHealthInformation(int value)
        {
            HealthText.text = $"{value} HP";
            HealthBarImage.fillAmount = (float)value / 100;
        }
        
        void UpdateCountdown(int value)
        {
            CountdownText.gameObject.SetActive(value >= 0);
            CountdownText.text = $"{value}";
        }
        
        void UpdateWave(int value)
        {
            WaveCountText.text = $"Wave {value}";
        }

    }
}
