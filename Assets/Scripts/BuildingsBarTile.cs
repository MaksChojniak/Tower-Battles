using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class BuildingsBarTile : MonoBehaviour
{
    public Action<Sprite> UpdateSprite;

    private void Awake()
    {
        UpdateSprite += OnUpdateSprite;
    }

    private void OnDestroy()
    {
        UpdateSprite -= OnUpdateSprite;
    }

    void OnUpdateSprite(Sprite sprite)
    {
        this.transform.GetChild(0).GetComponent<Image>().sprite = sprite;
    
        if(sprite == null)
        {
            Image tileImage = this.transform.GetChild(0).GetComponent<Image>();
            tileImage.color = new Color(tileImage.color.r, tileImage.color.g, tileImage.color.b, 0);
        }
    
    }
}
