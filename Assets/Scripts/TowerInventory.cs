using System;
using System.Linq;
using System.Collections.Generic;
using DefaultNamespace;
using MMK.ScriptableObjects;
using Unity.Collections;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using Org.BouncyCastle.Bcpg.OpenPgp;
using Player;
using UnityEngine.Events;

public class TowerInventory : MonoBehaviour
{
    // public static event Action<int, GameObject, bool> OnSelectTile;
    public delegate void OnSelectTileDelegate(int index, GameObject selectedTile, bool isUnlocked, Tower tower);
    public static event OnSelectTileDelegate OnSelectTile;
    
    public Action UpdateTiles;


    [SerializeField] int selectedTower;
    
    [ReadOnly] public AllTowerInventoryData BaseTowerData;
    public AllTowerInventoryData TowerData;
    
    private void Awake()
    {
        TowerData = new AllTowerInventoryData(BaseTowerData);
        
        NextTowerPageButton.OnChangePage += UpdateTileSprite;
        OnSelectTile += OnOnSelectTile;
        UpdateTiles += OnUpdateTiles;
    }

    private void OnDestroy()
    {
        NextTowerPageButton.OnChangePage -= UpdateTileSprite;
        OnSelectTile -= OnOnSelectTile;
        UpdateTiles -= OnUpdateTiles;
    }

    private void OnDisable()
    {
        TowerDeck.OnSelectSlot -= OnSelectDeckSlot;
    }


    private void OnEnable()
    {
        StartCoroutine(AfterOnEnable());
    }


    IEnumerator AfterOnEnable()
    {
        yield return new WaitForEndOfFrame();
        //yield return new WaitForEndOfFrame();
        //yield return new WaitForEndOfFrame();

        UpdateTiles();// UpdateTileSprite();

        SelectTower(0);
    }
    
    public void SelectTower(int i)
    {
        TowerDeck.OnSelectSlot -= OnSelectDeckSlot;

        //Debug.Log($"{i}");

        selectedTower = i;

        GameObject tile = TowerData.GetAllTowerInventoryData()[i].towerTileUI.gameObject;
        Tower tower = TowerData.GetAllTowerInventoryData()[i].towerSO;

        OnSelectTile?.Invoke(i, tile, tower.IsUnlocked(), tower);

        // Added
        if (tower.IsUnlocked())
        {
            TowerDeck.OnSelectSlot -= OnEquipLockedTower;

            TowerDeck.OnSelectSlot -= RemoveFromDeck;
            TowerDeck.OnSelectSlot += RemoveFromDeck;

            TowerDeck.OnSelectSlot += OnSelectDeckSlot;
            OnEquipping(); 
        }
        else
        {
            ChangeDeckTilesColor(false);

            TowerDeck.OnSelectSlot -= RemoveFromDeck;

            TowerDeck.OnSelectSlot -= OnEquipLockedTower;
            TowerDeck.OnSelectSlot += OnEquipLockedTower;
        }
    }


    void RemoveFromDeck(int index)
    {
        // if (PlayerTowerInventory.Instance.TowerDeck[index] != null)
        if (PlayerController.GetLocalPlayerData().Deck[index].Value != null)
        {
            // PlayerTowerInventory.Instance.TowerDeck[index] = null;
            PlayerController.GetLocalPlayerData().Deck[index].Value = null;
            TowerDeck.Instance.deckTiles[index].UpdateSprite(null);
            TowerDeck.Instance.deckTiles[index].ChangeColor(false);
            TowerDeck.Instance.deckTiles[index].UpdatePrice(false, 0);
        }
    }


    public void EquipTower()
    {
        //TowerDeck.OnSelectSlot += OnSelectDeckSlot;
        //OnEquipping();
    }

    void OnEquipLockedTower(int deckSlotIndex)
    {
        WarningSystem.ShowWarning(WarningSystem.WarningType.LockedTower);

        //TowerDeck.OnSelectSlot -= OnEquipLockedTower;
    }
    


    void OnSelectDeckSlot(int index)
    {

        //Debug.Log($"selected slot - {index}, seletced tower - {selectedTower}");

        // if (PlayerTowerInventory.Instance.TowerDeck.Contains(TowerData.GetAllTowerInventoryData()[selectedTower].towerSO))
        if (PlayerController.GetLocalPlayerData().Deck.Select(element => element.Value).ToArray().Contains(TowerData.GetAllTowerInventoryData()[selectedTower].towerSO))
        {
            // for (int i = 0; i < PlayerTowerInventory.Instance.TowerDeck.Length; i++)
            for (int i = 0; i < PlayerController.GetLocalPlayerData().Deck.Length; i++)
            {
                // if (PlayerTowerInventory.Instance.TowerDeck[i] == TowerData.GetAllTowerInventoryData()[selectedTower].towerSO)
                if (PlayerController.GetLocalPlayerData().Deck[i].Value == TowerData.GetAllTowerInventoryData()[selectedTower].towerSO)
                {
                    RemoveFromDeck(i);
                }
            }
        }

        // PlayerTowerInventory.Instance.TowerDeck[index] = TowerData.GetAllTowerInventoryData()[selectedTower].towerSO;
        PlayerController.GetLocalPlayerData().Deck[index].Value = TowerData.GetAllTowerInventoryData()[selectedTower].towerSO;
        TowerDeck.Instance.deckTiles[index].UpdateSprite(TowerData.GetAllTowerInventoryData()[selectedTower].towerSO.CurrentSkin.TowerSprite);
        // TowerDeck.Instance.deckTiles[index].UpdatePrice(true, PlayerTowerInventory.Instance.TowerDeck[index].GetPrice());
        TowerDeck.Instance.deckTiles[index].UpdatePrice(true, PlayerController.GetLocalPlayerData().Deck[index].Value.GetPrice());

        TowerDeck.OnSelectSlot -= OnSelectDeckSlot;

        ChangeDeckTilesColor(false);
    }



    void UpdateTileSprite()
    {
        if (TowerData == null)
            return;

        foreach (var buildingData in TowerData.GetAllTowerInventoryData())
        {
            try
            {
                buildingData.towerTileUI.UpdateSprite(buildingData.towerSO.CurrentSkin.TowerSprite);
                buildingData.towerTileUI.UpdateName(buildingData.towerSO.TowerName);
                buildingData.towerTileUI.UpdateLockedState(buildingData.towerSO.IsUnlocked());
            }
            catch(Exception exception)
            {
                Debug.Log(exception);
            }
        }
    }


    //Change the deck color to Green while equipping towers
    private void OnEquipping()
    {
        ChangeDeckTilesColor(true);
    }

    void ChangeDeckTilesColor(bool isEquipped)
    {
        foreach (var deckTower in TowerDeck.Instance.deckTiles)
        {
            deckTower.ChangeColor(isEquipped);
        }
    }


    void OnOnSelectTile(int index, GameObject selectedTile, bool isUnlocked, Tower tower)
    {
        UpdateTiles();
    }

    void OnUpdateTiles()
    {
        TowerData.SortAllTowersInventoryData(BaseTowerData);
        UpdateTileSprite();
    }
    
    
}

[Serializable]
public class AllTowerInventoryData
{
    public TowerInventoryData[] commonTowers;
    public TowerInventoryData[] rareTowers;
    public TowerInventoryData[] exclusiveTowers;
    public TowerInventoryData[] trophyTowers;

    public AllTowerInventoryData(AllTowerInventoryData baseData)
    {
        commonTowers = new TowerInventoryData[baseData.commonTowers.Length];
        baseData.commonTowers.CopyTo(commonTowers, 0);

        rareTowers = new TowerInventoryData[baseData.rareTowers.Length];
        baseData.rareTowers.CopyTo(rareTowers, 0);

        exclusiveTowers = new TowerInventoryData[baseData.exclusiveTowers.Length];
        baseData.exclusiveTowers.CopyTo(exclusiveTowers, 0);

        trophyTowers = new TowerInventoryData[baseData.trophyTowers.Length];
        baseData.trophyTowers.CopyTo(trophyTowers, 0);
    }

    public TowerInventoryData[] GetAllTowerInventoryData()
    {
        TowerInventoryData[] allData = new TowerInventoryData[commonTowers.Length + rareTowers.Length + exclusiveTowers.Length + trophyTowers.Length];

        for (int i = 0; i < allData.Length; i++)
        {
            if (i < commonTowers.Length)
            {
                allData[i] = commonTowers[i];
            }
            else if (i < commonTowers.Length + rareTowers.Length)
            {
                allData[i] = rareTowers[i - commonTowers.Length];
            }
            else if (i < rareTowers.Length + commonTowers.Length + exclusiveTowers.Length)
            {
                allData[i] = exclusiveTowers[i - rareTowers.Length - commonTowers.Length];
            }
            else
            {
                allData[i] = trophyTowers[i - (commonTowers.Length + rareTowers.Length + exclusiveTowers.Length)];
            }
        }

        return allData;
    }

    public void SortAllTowersInventoryData(AllTowerInventoryData baseAllTowerInventoryData)
    {
        AllTowerInventoryData baseData = new AllTowerInventoryData(baseAllTowerInventoryData);
        
        SortTowersInventoryData(baseData.commonTowers, ref commonTowers);
        SortTowersInventoryData(baseData.rareTowers, ref rareTowers);
        SortTowersInventoryData(baseData.exclusiveTowers, ref exclusiveTowers);
        SortTowersInventoryData(baseData.trophyTowers, ref trophyTowers);
    }

    public void SortTowersInventoryData(TowerInventoryData[] baseTowersData, ref TowerInventoryData[] actuallyTowersData)
    {
        TowerInventoryData[] sortedTowers = new TowerInventoryData[baseTowersData.Length];
        List<TowerInventoryData> unlockedTowers = new List<TowerInventoryData>();
        List<TowerInventoryData> lockedTowers = new List<TowerInventoryData>();

        for (int i = 0; i < baseTowersData.Length; i++)
        {
            // if(baseTowersData[i].towerSO.IsUnlocked() && baseTowersData[i].towerSO.IsRequiredWinsCount(PlayerTowerInventory.Instance.GetWinsCount()))
            if(baseTowersData[i].towerSO.IsUnlocked() && baseTowersData[i].towerSO.IsRequiredWinsCount(PlayerController.GetLocalPlayerData().PlayerGamesData.WinsCount))
                unlockedTowers.Add(baseTowersData[i]);
            else
                lockedTowers.Add(baseTowersData[i]);
        }

        for (int i = 0; i < unlockedTowers.Count; i++)
        {
            sortedTowers[i] = new TowerInventoryData(unlockedTowers[i].towerSO, baseTowersData[i].towerTileUI) ;
        }

        for (int i = 0; i < lockedTowers.Count; i++)
        {
            int index = i + unlockedTowers.Count;
            sortedTowers[index] = new TowerInventoryData(lockedTowers[i].towerSO, baseTowersData[index].towerTileUI);
        }

        actuallyTowersData = sortedTowers;
    }

}

[Serializable]
public class TowerInventoryData
{
    public Tower towerSO;
    public TowerTileUI towerTileUI;

    public TowerInventoryData(Tower towerSO, TowerTileUI towerTileUI)
    {
        this.towerSO = towerSO;
        this.towerTileUI = towerTileUI;
    }
}


