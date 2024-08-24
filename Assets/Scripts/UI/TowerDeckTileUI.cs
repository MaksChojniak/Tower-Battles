using MMK.ScriptableObjects;
using MMK;
using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class TowerDeckTileUI : MonoBehaviour
{
    public Action<bool, long> UpdatePrice;
    public Action<Sprite> UpdateSprite;
    public Action<bool> ChangeColor;
    public Action<Color> ChangeColorOnRemove;

    
    
    private void Awake()
    {
        UpdateSprite += OnUpdateSprite;
        ChangeColor += OnChangeColor;
        ChangeColorOnRemove += OnChangeColorOnRemove;
        UpdatePrice += OnUpdatePrice;
    }

    private void OnDestroy()
    {
        UpdatePrice -= OnUpdatePrice;
        UpdateSprite -= OnUpdateSprite;
        ChangeColor -= OnChangeColor;
        ChangeColorOnRemove -= OnChangeColorOnRemove;
    }

    void OnUpdateSprite(Sprite sprite)
    {
        Image tileImage = this.GetComponent<Image>();

        Debug.Log("Update Tower Sprit");

        tileImage.sprite = sprite;
    }

    void OnChangeColor(bool isEquipped)
    {
        Color newColor = isEquipped ? TowerDeck.Instance.isEquippedTileColor : TowerDeck.Instance.defaultTileColor;

        Image tileImage = this.transform.parent.GetComponent<Image>();
        Color newTileColor = newColor;

        Image tileSpriteImage = this.GetComponent<Image>();
        Color newTileSpriteColor = tileSpriteImage.color;


        if (tileSpriteImage.sprite == null)
           newTileSpriteColor.a = 0f;
        else
            newTileSpriteColor.a = 1f;

        tileSpriteImage.color = newTileSpriteColor;


        //newTileColor.a = 181/255f;
        tileImage.color = newTileColor;

    }

    void OnChangeColorOnRemove(Color color) 
    {
        Image tileImage = this.transform.parent.GetComponent<Image>();

        tileImage.color = color;
    }

    void OnUpdatePrice(bool state, long price)
    {
        GameObject pricePanel = this.transform.GetChild(0).gameObject;
        TMP_Text priceText = pricePanel.GetComponent<TMP_Text>();

        pricePanel.SetActive(state);
        priceText.text = $"{price} {StringFormatter.GetSpriteText(new SpriteTextData() { SpriteName = GlobalSettingsManager.GetGlobalSettings().CashIconName })}";

    }
}
