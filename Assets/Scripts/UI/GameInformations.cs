using MMK;
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
        [SerializeField] GameObject HealthBar;
        private Vector3 _basePos;
        private Vector3 _baseScale;
        private Coroutine _shakeCoroutine;

        [SerializeField] Image AbilityBarImage;
        [SerializeField] float AbilityBarFillSpeed = 0.2f;
        [SerializeField] private int totalDamageDealt = 0;
        [SerializeField] private int currentMaxDamage = 1000;
        private int previousMaxDamage = 1000;
        private Coroutine animationCoroutine;

        [SerializeField] TMP_Text BalanceText;

        [SerializeField] TMP_Text CountdownText;

        [SerializeField] Animator Animator;

        public static event Action OnAbilityReady;

        void Awake()
        {
            GamePlayerInformation.UpdateHealth += UpdateHealthInformation;
            GamePlayerInformation.UpdateBalance += UpdateBalanceInformation;
            
            WaveManager.UpdateCountdown += UpdateCountdown;
            WaveManager.UpdateWaveCount += UpdateWave;

            Health.OnAnyEnemyDamageTaken += UpdateAbilityInformation;

            AbilityBarImage.fillAmount = 0.0f;
            totalDamageDealt = 0;

            // Initialize health bar posiiton and scale
            _basePos = HealthBar.transform.localPosition;
            _baseScale = HealthBar.transform.localScale;
        }

        void OnDestroy()
        {
            GamePlayerInformation.UpdateHealth -= UpdateHealthInformation;
            GamePlayerInformation.UpdateBalance -= UpdateBalanceInformation;
            
            WaveManager.UpdateCountdown -= UpdateCountdown;
            WaveManager.UpdateWaveCount -= UpdateWave;

            Health.OnAnyEnemyDamageTaken -= UpdateAbilityInformation;
        }

        void UpdateBalanceInformation(long value)
        {
            BalanceText.text = $"{value} {StringFormatter.GetSpriteText(new SpriteTextData() { SpriteName = GlobalSettingsManager.GetGlobalSettings().CashIconName })}";
        }

        void UpdateHealthInformation(int value)
        {
            HealthText.text = $"{value} HP";
            StartCoroutine(HealthBarValueAnimation(0.5f, (float)value / 100) );

            if(value < 100)
            {
                Animator.SetTrigger("TakeDamage");
                StartShake(0.5f, 5f, 0.1f);
            }
        }
        public void StartShake(float duration, float posMagnitude, float scaleMagnitude)
        {
            // 1. Jeśli animacja trwa, przerwij ją
            if (_shakeCoroutine != null)
            {
                StopCoroutine(_shakeCoroutine);
            }

            // 2. Wymuszenie resetu do bazy przed startem nowej animacji
            // To naprawia problem "utknięcia" w ostatniej pozycji
            transform.localPosition = _basePos;
            transform.localScale = _baseScale;

            // 3. Start nowej
            _shakeCoroutine = StartCoroutine(ShakeCoroutine(duration, posMagnitude, scaleMagnitude));
        }

        private IEnumerator ShakeCoroutine(float duration, float posMagnitude, float scaleMagnitude)
        {
            float elapsed = 0.0f;

            while (elapsed < duration)
            {
                float percentComplete = elapsed / duration;
                // Płynne wygaszanie efektu (1 na początku, 0 na końcu)
                float fade = 1.0f - percentComplete;

                // 1. POZYCJA (X, Y) - drganie
                float x = UnityEngine.Random.Range(-1f, 1f) * posMagnitude * fade;
                float y = UnityEngine.Random.Range(-1f, 1f) * posMagnitude * fade;
                HealthBar.transform.localPosition = new Vector3(_basePos.x + x, _basePos.y + y, _basePos.z);

                // 2. SKALA (Y) - squash & stretch
                // Skala Y będzie oscylować wokół oryginalnej wartości
                float yScale = UnityEngine.Random.Range(-1f, 1f) * scaleMagnitude * fade;
                HealthBar.transform.localScale = new Vector3(_baseScale.x, _baseScale.y + yScale, _baseScale.z);

                //elapsed += Time.deltaTime;
                elapsed += Time.fixedDeltaTime;
                yield return null;
            }

            // Reset do wartości początkowych
            HealthBar.transform.localPosition = _basePos;
            HealthBar.transform.localScale = _baseScale;
            _shakeCoroutine = null; // Resetowanie referencji po zakończeniu animacji
        }
        void UpdateAbilityInformation(int value, Health.DamageCause damageCause)
        {
            if (damageCause != Health.DamageCause.Tower)
                return;

            totalDamageDealt += value;
            float targetFill = Mathf.Clamp01((float)totalDamageDealt / currentMaxDamage);
            
            // Sprawdzenie czy osiągnęliśmy 100%
            if (targetFill >= 1.0f)
            {
                OnAbilityReady?.Invoke();

                //Aktualizacja kolejnego progu ability
                int nextTarget = currentMaxDamage + previousMaxDamage;
                previousMaxDamage = currentMaxDamage;
                currentMaxDamage = nextTarget;
                
                // Resetowanie
                totalDamageDealt = 0;
                targetFill = 0.0f;
            }

            // Zarządzanie animacją: zatrzymaj starą, zacznij nową
            if (animationCoroutine != null)
            {
                StopCoroutine(animationCoroutine);
            }
            
            animationCoroutine = StartCoroutine(AbilityBarValueAnimation(AbilityBarFillSpeed, targetFill));
        }

        IEnumerator HealthBarValueAnimation(float speed, float targetHealthFillAmount)
        {
            while (Math.Abs(HealthBarImage.fillAmount - targetHealthFillAmount) > 0.01f)
            {
                HealthBarImage.fillAmount = Mathf.Lerp(HealthBarImage.fillAmount, targetHealthFillAmount, speed);

                yield return null;
            }
        }

        IEnumerator AbilityBarValueAnimation(float speed, float targetAbilityFillAmount)
        {
            // Używamy Mathf.Approximately zamiast Math.Abs dla większej precyzji w Unity
            while (!Mathf.Approximately(AbilityBarImage.fillAmount, targetAbilityFillAmount))
            {
                AbilityBarImage.fillAmount = Mathf.Lerp(AbilityBarImage.fillAmount, targetAbilityFillAmount, speed);
                yield return null;
            }

            // Ustawienie precyzyjnej wartości na końcu, żeby uniknąć błędów zaokrągleń
            AbilityBarImage.fillAmount = targetAbilityFillAmount;
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
