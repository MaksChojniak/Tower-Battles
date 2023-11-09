using System;
using System.Collections;
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

        [SerializeField] Animator Animator;

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
            BalanceText.text = $"{value}";
        }

        void UpdateHealthInformation(int value)
        {
            HealthText.text = $"{value} HP";
            StartCoroutine(HealthBarValueAnimation(0.5f, (float)value / 100) );

            if(value < 100)
                Animator.SetTrigger("TakeDamage");
        }

        IEnumerator HealthBarValueAnimation(float speed, float targetHealthFillAmount)
        {
            while (Math.Abs(HealthBarImage.fillAmount - targetHealthFillAmount) > 0.01f)
            {
                HealthBarImage.fillAmount = Mathf.Lerp(HealthBarImage.fillAmount, targetHealthFillAmount, speed);

                yield return new WaitForSeconds(0.01f);
            }
        }



        void UpdateCountdown(int value)
        {
            CountdownText.gameObject.SetActive(value >= 0);
            CountdownText.text = $"{value}";
        }
        
        void UpdateWave(int value)
        {
            WaveCountText.text = $"Wave {value + 1}";
        }

    }
}
