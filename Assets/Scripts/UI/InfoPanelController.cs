using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEditor.Rendering;
using UnityEngine;
using UnityEngine.UI;

public class InfoPanelController : MonoBehaviour
{
    public enum PanelType
    {
        UpdateLog,
        GameHelp,
        Other
    }

    [SerializeField] Color lightColor;
    [SerializeField] Color darkColor;

    [Space(8)]
    [SerializeField] Image logButton;
    [SerializeField] Image helpButton;
    [Space(8)]
    [SerializeField] TMP_Text logButtonText;
    [SerializeField] TMP_Text helpButtonText;
    [Space(8)]
    [SerializeField] GameObject logPanel;
    [SerializeField] GameObject helpPanel;

    private void Start()
    {

        OpenPanel(logPanel);
    }

    void OnPanelChanged(PanelType type)
    {
        if (type == PanelType.UpdateLog)
        {
            logButton.color = lightColor;
            logButtonText.color = new Color(darkColor.r, darkColor.g, darkColor.b, 1);
        }
        else
        {
            logButton.color = darkColor;
            logButtonText.color = lightColor;
        }

        if (type == PanelType.GameHelp)
        {
            helpButton.color = lightColor;
            helpButtonText.color = new Color(darkColor.r, darkColor.g, darkColor.b, 1);
        }
        else
        {
            helpButton.color = darkColor;
            helpButtonText.color = lightColor;
        }

        if (type == PanelType.Other)
        {

        }
        else
        {

        }


    }

    [Space(8)]
    [SerializeField] GameObject lastOpenedPanel;
    public void OpenPanel(GameObject panel)
    {
        PanelType type = PanelType.Other;

        if (panel == logPanel)
            type = PanelType.UpdateLog;
        else if (panel == helpPanel)
            type = PanelType.GameHelp;

        if (lastOpenedPanel != null)
            lastOpenedPanel.SetActive(false);

        panel.SetActive(true);
        lastOpenedPanel = panel;

        OnPanelChanged(type);
    }
}
