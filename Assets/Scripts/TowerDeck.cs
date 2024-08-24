using System;
using System.Collections;
using System.Collections.Generic;
using Player;
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

        // for (int i = 0; i < PlayerTowerInventory.Instance.TowerDeck.Length; i++)
        for (int i = 0; i < PlayerController.GetLocalPlayerData().Deck.Length; i++)
        {
            deckTiles[i].UpdatePrice(false, 0);
            deckTiles[i].ChangeColor(false);

            // if (PlayerTowerInventory.Instance.TowerDeck[i] != null)
            if (PlayerController.GetLocalPlayerData().Deck[i].Value != null)
            {
                Debug.Log("Update Tower Sprite onStart");
                // deckTiles[i].UpdateSprite(PlayerTowerInventory.Instance.TowerDeck[i].CurrentSkin.TowerSprite);
                deckTiles[i].UpdateSprite(PlayerController.GetLocalPlayerData().Deck[i].Value.CurrentSkin.TowerSprite);
                deckTiles[i].ChangeColor(true);

                // deckTiles[i].UpdatePrice(true, PlayerTowerInventory.Instance.TowerDeck[i].GetPrice());
                deckTiles[i].UpdatePrice(true, PlayerController.GetLocalPlayerData().Deck[i].Value.GetPrice());
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

        // if (PlayerTowerInventory.Instance.TowerDeck[i] != null)
        if (PlayerController.GetLocalPlayerData().Deck[i].Value != null)
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
