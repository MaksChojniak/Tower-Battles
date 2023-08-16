using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MenuAnimations : MonoBehaviour
{

    [SerializeField] private GameObject menuPanel;
    [SerializeField] private GameObject towersPanel;


    [SerializeField] private bool menuPanelIsCurrent;
    [SerializeField] private bool towersPanelIsCurrent;

    float menuSlideValue;
    float towersSlideValue;

    float speedAnimation = 1500f;


    void Awake()
    {
        menuPanelIsCurrent = true;

        menuSlideValue = 0;
        towersSlideValue = 832f;
    }

    void FixedUpdate()
    {
        if (menuPanelIsCurrent)
        {

            if (menuSlideValue < 0)
            {
                menuSlideValue += Time.deltaTime * speedAnimation;
            }
            else
            {
                menuSlideValue = 0;
                towersPanel.SetActive(false);
            }
            if (towersSlideValue < 832f)
            {
                menuPanel.SetActive(true);
                towersSlideValue += Time.deltaTime * speedAnimation;
            }
            else
            {
                towersSlideValue = 832f;
            }
            menuPanel.GetComponent<RectTransform>().offsetMin = new Vector2(menuSlideValue, menuPanel.GetComponent<RectTransform>().offsetMin.y);
            menuPanel.GetComponent<RectTransform>().offsetMax = new Vector2(menuSlideValue, menuPanel.GetComponent<RectTransform>().offsetMax.y);

            towersPanel.GetComponent<RectTransform>().offsetMin = new Vector2(towersSlideValue, towersPanel.GetComponent<RectTransform>().offsetMin.y);
            towersPanel.GetComponent<RectTransform>().offsetMax = new Vector2(towersSlideValue, towersPanel.GetComponent<RectTransform>().offsetMax.y);


            //menuPanel.GetComponent<RectTransform>().offsetMin = new Vector2(0, menuPanel.GetComponent<RectTransform>().offsetMin.y);
            //menuPanel.GetComponent<RectTransform>().offsetMax = new Vector2(0, menuPanel.GetComponent<RectTransform>().offsetMax.y);

            //towersPanel.GetComponent<RectTransform>().offsetMin = new Vector2(832f, towersPanel.GetComponent<RectTransform>().offsetMin.y);
            //towersPanel.GetComponent<RectTransform>().offsetMax = new Vector2(832f, towersPanel.GetComponent<RectTransform>().offsetMax.y);

        }
        else if (towersPanelIsCurrent)
        {

            if (menuSlideValue > -832f)
            {
                menuSlideValue -= Time.deltaTime * speedAnimation;
            }
            else
            {
                menuSlideValue = -832f;
                menuPanel.SetActive(false);
            }
            if (towersSlideValue > 0)
            {
                towersPanel.SetActive(true);
                towersSlideValue -= Time.deltaTime * speedAnimation;
            }
            else
            {
                towersSlideValue = 0;
            }


            menuPanel.GetComponent<RectTransform>().offsetMin = new Vector2(menuSlideValue, menuPanel.GetComponent<RectTransform>().offsetMin.y);
            menuPanel.GetComponent<RectTransform>().offsetMax = new Vector2(menuSlideValue, menuPanel.GetComponent<RectTransform>().offsetMax.y);

            towersPanel.GetComponent<RectTransform>().offsetMin = new Vector2(towersSlideValue, towersPanel.GetComponent<RectTransform>().offsetMin.y);
            towersPanel.GetComponent<RectTransform>().offsetMax = new Vector2(towersSlideValue, towersPanel.GetComponent<RectTransform>().offsetMax.y);


        }
                }


                public void SetActivePanel(int i)
                {
                    switch (i)
                    {
                        case 0:
                            menuPanelIsCurrent = true;
                            towersPanelIsCurrent = false;
                            break;
                        case 1:
                            menuPanelIsCurrent = false;
                            towersPanelIsCurrent = true;
                            break;
                    }
                }
            }
