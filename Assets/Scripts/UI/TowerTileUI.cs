using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class TowerTileUI : MonoBehaviour
{
    public Action<Sprite> UpdateSprite;
    public Action<string> UpdateName;

    [SerializeField] GameObject spriteObject;
    [SerializeField] TMP_Text buildingNameText;
    [SerializeField] GameObject lockStatePanel;

    private void Awake()
    {
        TowerInventory.OnSelectTile += OnSelectTile;
        UpdateSprite += OnUpdateSprite;
        UpdateName += OnUpdateName;
    }

    private void OnDestroy()
    {
        TowerInventory.OnSelectTile -= OnSelectTile;
        UpdateSprite -= OnUpdateSprite;
        UpdateName -= OnUpdateName;
    }

    void OnUpdateSprite(Sprite sprite)
    {
        spriteObject.GetComponent<Image>().sprite = sprite;
    }

    void OnUpdateName(string name)
    {
        buildingNameText.text = name;
    }

    void OnSelectTile(int index, GameObject selectedTile)
    {
        if (selectedTile != this.gameObject)
        {
            this.GetComponent<Image>().enabled = false;
            return; 
        }

        this.GetComponent<Image>().enabled = true;
    }


}
