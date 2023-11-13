using System.Collections;
using System.Collections.Generic;
using System.Text.RegularExpressions;
using TMPro;
using UnityEngine;
using static UnityEngine.Rendering.DebugUI;

public class Quality : MonoBehaviour
{
    public enum QualityLevelsType
    {
        VeryLow,
        Low,
        Medium,
        High,
        VeryHigh,
        Ultra
    }

    [SerializeField] QualityLevelsType[] QualityLevels;
    [SerializeField] int CurrentQualityLevel;
    [SerializeField] TMP_Text QualityLevelText;

    [SerializeField] CanvasGroup LeftButton;
    [SerializeField] CanvasGroup RightButton;

    private void Awake()
    {
        CurrentQualityLevel = 2;
        OnQualityLevelChange();
    }


    void Update()
    {
        
    }

    public void ChangeQualityLevel(int direction)
    {

        if(CurrentQualityLevel + direction < QualityLevels.Length && CurrentQualityLevel + direction >= 0)
            CurrentQualityLevel += direction;

        OnQualityLevelChange();
    }

    void OnQualityLevelChange()
    {
        if (CurrentQualityLevel <= 0)
        {
            LeftButton.interactable = false;
            LeftButton.alpha = 0.7f;
        }
        else if (CurrentQualityLevel >= QualityLevels.Length - 1)
        {
            RightButton.interactable = false;
            RightButton.alpha = 0.7f;
        }
        else
        {
            LeftButton.interactable = true;
            RightButton.interactable = true;
            LeftButton.alpha = 1f;
            RightButton.alpha = 1f;
        }

        QualityLevelText.text = Regex.Replace(QualityLevels[CurrentQualityLevel].ToString(), "([a-z])([A-Z])", "$1 $2"); ;// QualityLevels[CurrentQualityLevel].ToString();

        QualitySettings.SetQualityLevel(CurrentQualityLevel);
    }

}
