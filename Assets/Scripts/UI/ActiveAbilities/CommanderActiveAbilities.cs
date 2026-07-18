using UnityEngine;
using UnityEngine.UI;
using System;
using DefaultNamespace;
using System.Collections.Generic;
using TMPro;
using UI.Animations;

public class CommanderActiveAbilities : MonoBehaviour
{
    [Header("UI References")]
    // [SerializeField] private GameObject selectionPanel; // Cały panel przyciemniający ekran
    [SerializeField] private List<CardUIHelper> uiCards; // Referencje do 3 kart na ekranie (skrypt pomocniczy)
    [SerializeField] private TMP_Text abilityTimerText; // Tekst wyświetlający czas trwania aktywnej mocy
    [Header("UI Animations")]
    [SerializeField] private UIAnimation openPanelAnimation; // Animacja otwierania panelu wyboru kart
    [SerializeField] private UIAnimation closePanelAnimation; // Animacja zamykania panelu wyboru kart

    [Header("Card Pool")]
    [SerializeField] private List<CardData> allAvailableCards; // Tutaj w inspektorze wrzucasz swoje 6 kart

    private CardData activeBuff;
    private float buffTimer = 0f;
    private bool isCardSelectionOpen = false;

    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
        
    }
    void Awake()
    {
        // if (selectionPanel != null) selectionPanel.SetActive(false);
        if (abilityTimerText != null) abilityTimerText.text = "";
    }
    void OnEnable()
    {
        GameInformations.OnAbilityReady += ActivateCardSelection;
    }
    void OnDisable()
    {
        GameInformations.OnAbilityReady -= ActivateCardSelection;
    }

    // Update is called once per frame
    void Update()
    {
        // Obsługa czasu trwania aktywnego buffa
        if (buffTimer > 0f)
        {
            if (activeBuff == null)
            {
                buffTimer = 0f;
                abilityTimerText.text = "";
                return;
            }

            abilityTimerText.text = $"<color=#{ColorUtility.ToHtmlStringRGB(activeBuff.cardColor)}>{activeBuff.cardName}</color>: {buffTimer:F0} s";
            buffTimer -= Time.deltaTime; // Pamiętaj, że Time.deltaTime dostosowuje się do Time.timeScale!
            if (buffTimer <= 0f)
            {
                EndActiveBuff();
                abilityTimerText.text = "";
            }
        }
    }

    // Wywoływane przez Twój Event, gdy pasek ma 100%
    void ActivateCardSelection()
    {
        if (isCardSelectionOpen)
        {
            Debug.LogWarning("Card selection is already open; skipping duplicate activation.");
            return;
        }

        Debug.Log("Pasek pełen! Otwieram wybór kart.");
        isCardSelectionOpen = true;
        
        // Cancel any ongoing tower placement
        TowerSpawner ts = TowerSpawner.Instance;
        if (ts != null)
        {
            ts.CancelPlacingTower();
        }

        // 1. Zatrzymujemy grę
        Time.timeScale = 0f;

        // 2. Losujemy 3 unikalne karty
        List<CardData> drawnCards = DrawUniqueCards(3);

        // 3. Przekazujemy dane do UI i włączamy panel
        for (int i = 0; i < uiCards.Count; i++)
        {
            if (i < drawnCards.Count)
            {
                uiCards[i].SetupCard(drawnCards[i], this);
            }
            else
            {
                uiCards[i].ResetCard();
            }
        }

        // selectionPanel.SetActive(true);
        if (openPanelAnimation != null) openPanelAnimation.PlayAnimation();
    }

    // Losowanie bez powtórek
    private List<CardData> DrawUniqueCards(int count)
    {
        List<CardData> poolCopy = new List<CardData>(allAvailableCards);
        List<CardData> result = new List<CardData>();

        for (int i = 0; i < count; i++)
        {
            if (poolCopy.Count == 0) break;

            int randomIndex = UnityEngine.Random.Range(0, poolCopy.Count);
            result.Add(poolCopy[randomIndex]);
            poolCopy.RemoveAt(randomIndex); // Kluczowy krok: usunięcie z puli losowania
        }

        return result;
    }

    public void SelectCard(CardData selectedDescription)
    {
        if (selectedDescription == null)
        {
            isCardSelectionOpen = false;
            // if (selectionPanel != null) selectionPanel.SetActive(false);
            if (closePanelAnimation != null) closePanelAnimation.PlayAnimation();
            return;
        }

        isCardSelectionOpen = false;

        // if (selectionPanel != null) selectionPanel.SetActive(false);
        if (closePanelAnimation != null) closePanelAnimation.PlayAnimation();
        
        // Przywracamy prędkość gry (pobieramy z FastForwardController)
        var ff = FastForwardController.Instance;
        Time.timeScale = (ff != null) ? ff.GetGameSpeed() : 1f;

        ApplyBuff(selectedDescription);
    }

    void ApplyBuff(CardData card)
    {
        if (card == null)
        {
            return;
        }

        activeBuff = card;
        buffTimer = card.duration;
        Debug.Log($"Aktywowano: {card.cardName} na {card.duration}s");

        if (ActiveBuffManager.Instance != null)
        {
            ActiveBuffManager.Instance.EnableGlobalBuff(card.abilityType);
        }
    }

    void EndActiveBuff()
    {
        if (activeBuff == null)
        {
            buffTimer = 0f;
            abilityTimerText.text = "";
            return;
        }

        Debug.Log($"Moc {activeBuff.cardName} dobiegła końca.");
        // TUTAJ: Wyłącz modyfikatory wieżyczek, np.:
        if (ActiveBuffManager.Instance != null)
        {
            ActiveBuffManager.Instance.DisableGlobalBuff();
        }
        activeBuff = null;
    }
}
