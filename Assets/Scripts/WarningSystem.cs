using System;
using System.Collections;
using MMK;
using TMPro;
using UnityEngine;

namespace DefaultNamespace
{
    public class WarningSystem : MonoBehaviour
    {
        public enum WarningType
        {
            LockedTower,
            SecondBooster,
            NotEnoughtMoney,
            MaxTowersCountPlaced,
            DeckIsEmpty,
            NotEnoughtWins,
            MaxedOut,
            MapNotSelected
        }

        public static WarningSystem Instance;
        
        public static Action<WarningType> ShowWarning;

        [SerializeField] GameObject warningMessagePanel;
        
        
        void Awake()
        {
            if (Instance != null)
            {
                Destroy(this.gameObject);
                return;
            }
            else
            {
                Instance = this;
                DontDestroyOnLoad(this.gameObject);
            }
            
            ShowWarning += OnShowWarning;
        }

        void OnDestroy()
        {
            if (Instance.gameObject == this.gameObject)
            {
                ShowWarning -= OnShowWarning;
            }
        }

        void OnShowWarning(WarningType type)
        {
            TMP_Text warningMessageText = warningMessagePanel.transform.GetChild(0).GetComponent<TMP_Text>();
            warningMessageText.text = "";
            
            string message;

            switch (type)
            {
                case WarningType.LockedTower:
                    message = "Tower Is Locked!";
                    break;
                case WarningType.SecondBooster:
                    message = "Only 1 Booster Allowed!";
                    break;
                case WarningType.NotEnoughtMoney:
                    message = "Not Enough Coins!";
                    break;
                case WarningType.MaxTowersCountPlaced:
                    message = $"{GameSettingsManager.GetGameSettings().MaxTowersCount}/{GameSettingsManager.GetGameSettings().MaxTowersCount} Towers are Placed";
                    break;
                case WarningType.DeckIsEmpty:
                    message = $"Your Deck Is Empty!";
                    break;
                case WarningType.NotEnoughtWins:
                    message = "Not Enough Wins!";
                    break;
                case WarningType.MaxedOut:
                    message = "Tower Maxed Out!";
                    break;
                case WarningType.MapNotSelected:
                    message = "No Map Selected!";
                    break;
                default:
                    message = "Error!!";
                    break;
                
            }

            Debug.Log($"warning - {message}");
            warningMessageText.text = message;
            
            StopAllCoroutines();
            StartCoroutine(ShowMessage(GetTimeDelayFromText(message)));
        }

        float GetTimeDelayFromText(string message)
        {
            return message.Length * 0.07f;
        }

        IEnumerator ShowMessage(float timeDelay)
        {
            warningMessagePanel.SetActive(true);

            yield return new WaitForSeconds(timeDelay);

            warningMessagePanel.SetActive(false);
        }
    }
}
