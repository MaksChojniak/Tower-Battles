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
            MaxTowersCountPlaced
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
                    message = "Only 1 building of the booster type can be placed!";
                    break;
                case WarningType.NotEnoughtMoney:
                    message = "Not Enough Money!";
                    break;
                case WarningType.MaxTowersCountPlaced:
                    message = $"{TowerSpawner.MaxTowersCount}/{TowerSpawner.MaxTowersCount} Towers are Placed";
                    break;
                default:
                    message = "Error!!";
                    break;
                
            }

            Debug.Log($"warning - {message}");
            warningMessageText.text = message;
            
            StopAllCoroutines();
            StartCoroutine(ShowMessage());
        }

        IEnumerator ShowMessage()
        {
            warningMessagePanel.SetActive(true);

            yield return new WaitForSeconds(1.25f);

            warningMessagePanel.SetActive(false);
        }
    }
}
