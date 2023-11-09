using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEditor.Rendering;
using UnityEngine;
using UnityEngine.UI;

public class TowerPanelController : MonoBehaviour
{    
    public enum PanelType
    {
        Towers,
        Skins,
        Shop,
        Other
    }

    [SerializeField] Color lightColor;
    [SerializeField] Color darkColor;

    [Space(8)]
    [SerializeField] Image towerButton;
    [SerializeField] Image skinsButton;
    [SerializeField] Image shopButton;
    [Space(8)]
    [SerializeField] TMP_Text towerButtonText;
    [SerializeField] TMP_Text skinsButtonText;
    [SerializeField] TMP_Text shopButtonText;
    [Space(8)]
    [SerializeField] GameObject towerPanel;
    [SerializeField] GameObject skinsPanel;
    [SerializeField] GameObject shopPanel;

    private void Start()
    {

        OpenPanel(towerPanel);
    }

    void OnPanelChanged(PanelType type)
    {
        if(type == PanelType.Towers)
        {
            towerButton.color = lightColor;
            towerButtonText.color = new Color(darkColor.r, darkColor.g, darkColor.b, 1);
        }
        else
        {
            towerButton.color = darkColor;
            towerButtonText.color = lightColor;
        }

        if (type == PanelType.Skins)
        {
            skinsButton.color = lightColor;
            skinsButtonText.color = new Color(darkColor.r, darkColor.g, darkColor.b, 1);
        }
        else
        {
            skinsButton.color = darkColor;
            skinsButtonText.color = lightColor;
        }

        if (type == PanelType.Shop)
        {
            shopButton.color = lightColor;
            shopButtonText.color = new Color(darkColor.r, darkColor.g, darkColor.b, 1);
        }
        else
        {
            shopButton.color = darkColor;
            shopButtonText.color = lightColor;
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

        if (panel == towerPanel)
            type = PanelType.Towers;
        else if(panel == skinsPanel)
            type = PanelType.Skins;
        else if (panel == shopPanel)
            type = PanelType.Shop;

        if (lastOpenedPanel != null)
            lastOpenedPanel.SetActive(false);

        panel.SetActive(true);
        lastOpenedPanel = panel;

        OnPanelChanged(type);
    }
}
