using System;
using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.UI;

public class TowerDeck : MonoBehaviour
{
    public static TowerDeck Instance;

    public static event Action<int> OnSelectSlot;

    public TowerDeckTileUI[] deckTiles;

    public Color isEquippedTileColor;
    public Color removeTileColor;
    public Color defaultTileColor;

    private void Awake()
    {
        Instance = this;

    }


    private void OnEnable()
    {
        StartCoroutine(UpdateDeckUI());
    }

    IEnumerator UpdateDeckUI()
    {
        yield return new WaitForEndOfFrame();

        for (int i = 0; i < PlayerTowerInventory.Instance.TowerDeck.Length; i++)
        {
            deckTiles[i].UpdatePrice(false, 0);

            if (PlayerTowerInventory.Instance.TowerDeck[i] != null)
            {
                Debug.Log("Update Tower Sprite onStart");
                deckTiles[i].UpdateSprite(PlayerTowerInventory.Instance.TowerDeck[i].TowerSprite);
                deckTiles[i].ChangeColor(true);

                deckTiles[i].UpdatePrice(true, PlayerTowerInventory.Instance.TowerDeck[i].GetPrice());
            }

        }
       
    }


    public void SelectSlot(int i)
    {
        //if (PlayerTowerInventory.Instance.towerDeck[i] != null)
        //{
        //    PlayerTowerInventory.Instance.towerDeck[i] = null;
        //    deckTiles[i].UpdateSprite(null);
        //    deckTiles[i].ChangeColor(false);
        //}

        OnSelectSlot?.Invoke(i);

    }

    [SerializeField] Color CurrentButtonLastcolor;
    public void OnPointerDown(int i)
    {
        CurrentButtonLastcolor = deckTiles[i].transform.parent.GetComponent<Image>().color;

        if (PlayerTowerInventory.Instance.TowerDeck[i] != null)
        {
            deckTiles[i].ChangeColorOnRemove(removeTileColor);
        }
       
    }

    public void OnPointerUp(int i)
    {
        if (CurrentButtonLastcolor == removeTileColor)
            CurrentButtonLastcolor = defaultTileColor;

        deckTiles[i].ChangeColorOnRemove(CurrentButtonLastcolor);
    }


}
