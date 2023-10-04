using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class TowerPanelController : MonoBehaviour
{    

    [SerializeField] Color lightColor;
    [SerializeField] Color darkColor;

    [SerializeField] Image towerButton;
    [SerializeField] Image skinsButton;
    [SerializeField] TMP_Text towerButtonText;
    [SerializeField] TMP_Text skinsButtonText;
    [SerializeField] GameObject towerPanel;
    [SerializeField] GameObject skinsPanel;

    [SerializeField] bool isTowerPanel;

    private void Start()
    {
        isTowerPanel = true;
        OnPanelChanged();
    }

    void OnPanelChanged()
    {
        towerButton.color = isTowerPanel ? lightColor : darkColor ;
        skinsButton.color = isTowerPanel ? darkColor : lightColor ;
        towerButtonText.color = isTowerPanel ? new Color(darkColor.r, darkColor.g, darkColor.b, 1) : lightColor ;
        skinsButtonText.color = isTowerPanel ? lightColor : new Color(darkColor.r, darkColor.g, darkColor.b, 1);
        towerPanel.SetActive(isTowerPanel);
        skinsPanel.SetActive(!isTowerPanel);
    }

    public void OpenPanel(bool state)
    {
        isTowerPanel = state;
        OnPanelChanged();
    }
}
