using MMK;
using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class TowersBarTile : MonoBehaviour
{
    public Action<Sprite> UpdateSprite;
    public Action<bool, long> UpdatePrice;

    private void Awake()
    {
        UpdateSprite += OnUpdateSprite;
        UpdatePrice += OnUpdatePrice;
    }

    private void OnDestroy()
    {
        UpdatePrice -= OnUpdatePrice;
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

    void OnUpdatePrice(bool state, long price)
    {
        GameObject pricePanel = this.transform.GetChild(1).gameObject;
        TMP_Text priceText = pricePanel.GetComponent<TMP_Text>();

        pricePanel.SetActive(state);
        priceText.text = $"{price} {StringFormatter.GetSpriteText(new SpriteTextData() { SpriteName = GameSettingsManager.GetGameSettings().CashIconName })}";

    }
}
