using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MenuAnimations : MonoBehaviour
{

    [SerializeField] private GameObject menuPanel;
    [SerializeField] private GameObject towersPanel;

    [SerializeField] Animator animator;

    const float speedAnimation = 30f;


    //void Awake()
    //{
        //menuPanelIsCurrent = true;

        //menuSlideValue = 0;
        //towersSlideValue = 832f;
    //}


    private void Start()
    {
        
    }

    void FixedUpdate()
    {
       
    }


    IEnumerator OnSetActivePanel(bool openMenuPanel)
    {
        float oldPanelLimitValue = openMenuPanel ? 832f : -832f ;// 0 : -832f;
        float newPanelLimitValue = openMenuPanel ? 0f : 0f ;//832f : 0 ;

        RectTransform oldPanel = (openMenuPanel ? towersPanel : menuPanel).GetComponent<RectTransform>();
        RectTransform newPanel = (openMenuPanel ? menuPanel : towersPanel).GetComponent<RectTransform>();

        if (openMenuPanel)
        {
            while ( oldPanel.offsetMin.x < oldPanelLimitValue && newPanel.offsetMin.x < newPanelLimitValue)
            {
                float newSpeedAnimaion = Screen.width / 2532f;

                float oldOffsetX = oldPanel.offsetMin.x;
                if (oldPanel.offsetMin.x < oldPanelLimitValue)
                {
                    oldOffsetX += speedAnimation * newSpeedAnimaion;
                }
                else
                {
                    oldOffsetX = oldPanelLimitValue;
                }

                float newOffsetX = newPanel.offsetMin.x;
                if (newPanel.offsetMin.x < newPanelLimitValue)
                {
                    newOffsetX += speedAnimation * newSpeedAnimaion;
                }
                else
                {
                    newOffsetX = newPanelLimitValue;
                }

                oldPanel.offsetMin = new Vector2(oldOffsetX, oldPanel.offsetMin.y);
                oldPanel.offsetMax = new Vector2(oldOffsetX, oldPanel.offsetMax.y);

                newPanel.offsetMin = new Vector2(newOffsetX, newPanel.offsetMin.y);
                newPanel.offsetMax = new Vector2(newOffsetX, newPanel.offsetMax.y);


                yield return new WaitForSeconds(0.0005f);
            } 
        }
        else
        {
            while ( oldPanel.offsetMin.x > oldPanelLimitValue && newPanel.offsetMin.x > newPanelLimitValue )
            {
                float newSpeedAnimaion = Screen.width / 2532f;

                float oldOffsetX = oldPanel.offsetMin.x;
                if (oldPanel.offsetMin.x > oldPanelLimitValue)
                {
                    oldOffsetX -= speedAnimation * newSpeedAnimaion;
                }
                else
                {
                    oldOffsetX = oldPanelLimitValue;
                }

                float newOffsetX = newPanel.offsetMin.x;
                if (newPanel.offsetMin.x > newPanelLimitValue)
                {
                    newOffsetX -= speedAnimation * newSpeedAnimaion;
                }
                else
                {
                    newOffsetX = newPanelLimitValue;
                }

                oldPanel.offsetMin = new Vector2(oldOffsetX, oldPanel.offsetMin.y);
                oldPanel.offsetMax = new Vector2(oldOffsetX, oldPanel.offsetMax.y);
                
                newPanel.offsetMin = new Vector2(newOffsetX, newPanel.offsetMin.y);
                newPanel.offsetMax = new Vector2(newOffsetX, newPanel.offsetMax.y);


                //yield return new WaitForEndOfFrame();
                yield return new WaitForSeconds(0.0005f);
            }
        }

    }


    public void SetActivePanel(int i)
    {
        
        switch (i)
        {
            case 0:
                animator.SetBool("Tower", true);
                break;
            case 1:
                animator.SetBool("Tower", false);
                break;

            case 2:
                animator.SetBool("Settings", true);
                break;
            case 3:
                animator.SetBool("Settings", false);
                break;

            case 4:
                animator.SetBool("Info", true);
                break;
            case 5:
                animator.SetBool("Info", false);
                break;
            
            case 6:
                animator.SetBool("Lobby", true);
                break;
            case 7:
                animator.SetBool("Lobby", false);
                break;
            case 8:
                animator.SetBool("Battlepass", true);
                break;
            case 9:
                animator.SetBool("Battlepass", false);
                break;
        }

        
    }
}
