using System;
using System.Collections;
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
            NotEnoughtWins
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
                    message = "First You Need to Buy This Tower";
                    break;
                case WarningType.SecondBooster:
                    message = "Only 1 Building of the Booster Type Can be Placed!";
                    break;
                case WarningType.NotEnoughtMoney:
                    message = "Not Enough Money!";
                    break;
                case WarningType.MaxTowersCountPlaced:
                    message = $"{TowerSpawner.MaxTowersCount}/{TowerSpawner.MaxTowersCount} Towers are Placed";
                    break;
                case WarningType.DeckIsEmpty:
                    message = $"Before Starting, Create Your Deck. Click the 'Towers' Button to Open up Your Inventory";
                    break;
                case WarningType.NotEnoughtWins:
                    message = "Not Enough Wins!";
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
