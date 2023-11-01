using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class ButtonExtension : MonoBehaviour
{
    public static ButtonExtension Singleton;
    
    public Color normalColor = Color.black;
    public Color highlightedColor = Color.white;


    void Awake()
    {
        if (Singleton != null)
        {
            Destroy(this.gameObject);
            return;
        }
        
        DontDestroyOnLoad(this.gameObject);

        Singleton = this;
    }

    void OnDestroy()
    {
        if (Singleton == this)
        {
            
        }
    }


    

    public void PointerUpBorderColor(GameObject button)
    {
        button.TryGetComponent<CanvasGroup>(out var buttonCanvasGroup);
        buttonCanvasGroup.alpha = 1;
        
        button.transform.GetChild(button.transform.childCount-1).TryGetComponent<Image>(out var borderImage);
        borderImage.color = normalColor;
    }
    
    public void PointerDownBorderColor(GameObject button)
    {
        button.TryGetComponent<CanvasGroup>(out var buttonCanvasGroup);
        buttonCanvasGroup.alpha = 0.85f;
        
        button.transform.GetChild(button.transform.childCount-1).TryGetComponent<Image>(out var borderImage);
        borderImage.color = highlightedColor;
    }

}
