using UnityEngine;
using TMPro;
using UnityEngine.UI;

public class CardUIHelper : MonoBehaviour
{
    [SerializeField] private TMP_Text nameText;
    [SerializeField] private TMP_Text descriptionText;
    [SerializeField] private TMP_Text durationText;
    [SerializeField] private TMP_Text EffectText;
    [SerializeField] private Button cardButton;
    [SerializeField] private Image cardIcon;
    [SerializeField] private Image cardBackground;

    private CardData currentCardData;
    private CommanderActiveAbilities manager;

    public void SetupCard(CardData data, CommanderActiveAbilities mainManager)
    {
        if (data == null)
        {
            ResetCard();
            return;
        }

        currentCardData = data;
        manager = mainManager;

        nameText.text = data.cardName;
        descriptionText.text = data.cardDescription;

        cardIcon.sprite = data.cardIcon;
        cardBackground.color = data.cardColor;

        durationText.text = $"Duration: {data.duration} s";
        EffectText.text = $"<color=#{ColorUtility.ToHtmlStringRGB(data.cardColor)}>{data.effectModifier}</color> {data.effectDescription}";

        cardButton.interactable = true;
        cardButton.onClick.RemoveAllListeners();
        cardButton.onClick.AddListener(() => manager.SelectCard(currentCardData));
    }

    public void ResetCard()
    {
        currentCardData = null;
        manager = null;

        nameText.text = string.Empty;
        descriptionText.text = string.Empty;
        durationText.text = string.Empty;
        EffectText.text = string.Empty;
        cardIcon.sprite = null;
        cardBackground.color = Color.white;

        cardButton.interactable = false;
        cardButton.onClick.RemoveAllListeners();
    }
}
