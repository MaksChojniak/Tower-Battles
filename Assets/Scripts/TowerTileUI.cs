using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TowerTileUI : MonoBehaviour
{
    public Action<Sprite> UpdateSprite;

    [SerializeField] GameObject lockStatePanel;

    private void Awake()
    {
        TowerInventory.OnSelectTile += OnSelectTile;
        UpdateSprite += OnUpdateSprite;
    }

    private void OnDestroy()
    {
        TowerInventory.OnSelectTile -= OnSelectTile;
        UpdateSprite -= OnUpdateSprite;
    }

    void OnUpdateSprite(Sprite sprite)
    {
        this.transform.GetChild(0).GetComponent<Image>().sprite = sprite;
    }

    void OnSelectTile(GameObject selectedTile)
    {
        if (selectedTile != this.gameObject)
        {
            this.GetComponent<Image>().enabled = false;
            return; 
        }

        this.GetComponent<Image>().enabled = true;
    }


}
