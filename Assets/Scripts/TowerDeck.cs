using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TowerDeck : MonoBehaviour
{
    public static TowerDeck Instance;

    public static event Action<int> OnSelectSlot;

    public TowerDeckTileUI[] deckTiles;

    public Color isEquippedTileColor;
    public Color defaultTileColor;

    private void Awake()
    {
        Instance = this;
    }

    public void SelectSlot(int i)
    {
        if (PlayerTowerInventory.Instance.towerDeck[i] != null)
        {
            PlayerTowerInventory.Instance.towerDeck[i] = null;
            deckTiles[i].UpdateSprite(null);
            deckTiles[i].ChangeColor(false);
        }

        OnSelectSlot?.Invoke(i);
    }
}
