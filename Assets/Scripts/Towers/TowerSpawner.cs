using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using DefaultNamespace;
using MMK;
using MMK.ScriptableObjects;
using MMK.Towers;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.Rendering;
using UnityEngine.UI;
using TMPro;
using Towers;

public class TowerSpawner : MonoBehaviour
{
    public delegate void OnStartPlacingTowerDelegate(TowerController Tower);
    public static event OnStartPlacingTowerDelegate OnStartPlacingTower;
    
    public delegate void OnPlaceTowerDelegate(TowerController Tower, bool CanBePlaced);
    public static event OnPlaceTowerDelegate OnPlacingTower;
    
    public delegate void OnTowerPlacedDelegate(TowerController Tower);
    public static event OnTowerPlacedDelegate OnTowerPlaced;
    
    
    [Header("Deck")]
    [SerializeField] Tower[] Deck;
 
    [Space(12)]
    [Header("Stats")]
    [SerializeField] TowerController SelectedBuilidng;
    [SerializeField] bool PosibilityOfPlace;

    [Space(12)]
    [Header("Properties UI")]
    [SerializeField] GameObject cancelationTrashCan;

    
    int offsetDirection = 1;
    Vector2 offset;


    TowerController[] towers;
    // ViewRange[] viewRanges;
    // SpawnRange[] spawnRanges;
    
    

    void Awake()
    {
        Deck = PlayerTowerInventory.Instance.TowerDeck;
    }

    void OnDestroy()
    {
        
    }

    void Start()
    {
        
    }

    void Update()
    {
        cancelationTrashCan.SetActive(SelectedBuilidng != null);

        offsetDirection = SettingsManager.Instance.SettingsData.HandMode == Assets.Scripts.Settings.HandModeType.Right ? -1 : 1;
        offset = new Vector2(offsetDirection * 3 * (float)Screen.width, 2 * (float)Screen.height) * 1.5f / 100;
        
    }

    void FixedUpdate()
    {
        
    }



#region Spawnig Tower

    
    public void StartPlacingTower(int Index)
    {
        if (Deck[Index] == null) return;

        // Initialize towers
        towers = GameObject.FindObjectsOfType<TowerController>();
        // viewRanges = towers.Select(tower => tower.ViewRangeComponent ).ToArray();
        // spawnRanges = towers.Select(tower => tower.SpawnRangeComponent ).ToArray();

        
        if(!CanBuyMoreTowers(Index))
            return;

        
        SelectedBuilidng = Instantiate(Deck[Index].TowerPrefab, Input.GetTouch(0).position, Quaternion.identity, transform)
            .GetComponent<TowerController>();

        PosibilityOfPlace = false;

        // selectedBuilidng.GetComponent<TowerController>().ShowTowerViewRange(true);
        // TowerController.ShowTowerSpawnRange(selectedBuilidng, true);
        
        OnStartPlacingTower?.Invoke(SelectedBuilidng);

        Ground.UpdateGround(Deck[Index].PlacementType);
        
    }
    

    public void PlacingTower(int index)
    {
        if (SelectedBuilidng == null)
            return;

        if (DetectGround(index, SelectedBuilidng, out PosibilityOfPlace, out var Position))
        {
            SelectedBuilidng.transform.position = Position;

            // selectedBuilidng.GetComponent<TowerController>().SpawnRangeComponent.SetState(posibilityOfPlace);
            // selectedBuilidng.GetComponent<TowerController>().ViewRangeComponent.SetState(posibilityOfPlace);
        }

        // if (Input.touchCount > 0)
        // {
        //     Vector3 pos = Input.GetTouch(0).position;
        //
        //     Ray ray = Camera.main.ScreenPointToRay(pos + (Vector3)offset);
        //     RaycastHit hit;
        //
        //     if (Physics.Raycast(ray, out hit, 1000)) //, 1 << 6))
        //     {
        //         posibilityOfPlace = hit.transform.gameObject.TryGetComponent<Ground>(out var ground) && ground.groundType == deck[index].PlacementType;
        //
        //         selectedBuilidng.transform.position = new Vector3(hit.point.x, hit.point.y + 1f, hit.point.z);
        //
        //         if (posibilityOfPlace)
        //             posibilityOfPlace = selectedBuilidng.GetComponent<TowerController>().SpawnRangeComponent;
        //
        //         // selectedBuilidng.GetComponent<TowerController>().SpawnRangeComponent.SetState(posibilityOfPlace);
        //         // selectedBuilidng.GetComponent<TowerController>().ViewRangeComponent.SetState(posibilityOfPlace);
        //     }
        // }
        
        OnPlacingTower?.Invoke(SelectedBuilidng, PosibilityOfPlace);
    }

    
    public void PlaceTower(int index)
    {
        Ground.OnStopPlacingTower();
        
        if (SelectedBuilidng == null)
            return;
        
        // TowerController.ShowTowerSpawnRange(selectedBuilidng, false);
        

        if (PosibilityOfPlace)
        {
            GamePlayerInformation.ChangeBalance(-Deck[index].GetPrice());
            
            // selectedBuilidng.GetComponent<TowerController>().ShowTowerViewRange(false);
            // selectedBuilidng.GetComponent<TowerController>().PlaceTower();

            OnTowerPlaced?.Invoke(SelectedBuilidng);
            
            PosibilityOfPlace = false;
            SelectedBuilidng = null;
        }
        else
        {
            Destroy(SelectedBuilidng.gameObject);
            SelectedBuilidng = null;
        }
            
    }

    
#endregion
    
    
    
    
    public void CancelPlacingTower()
    {
        if(SelectedBuilidng == null)
            return;

        // TowerController.ShowTowerSpawnRange(null, false);
        
        Destroy(SelectedBuilidng);
        PosibilityOfPlace = false;
    }






    

    bool CanBuyMoreTowers(int Index)
    {
        if (Deck[Index].GetPrice() > GamePlayerInformation.GetBalance())
        {
            WarningSystem.ShowWarning(WarningSystem.WarningType.NotEnoughtMoney);
            return false;
        }

        if (towers.Length >= GameSettings.MAX_TOWERS_COUNT)
        {
            WarningSystem.ShowWarning(WarningSystem.WarningType.MaxTowersCountPlaced);
            return false;
        }

        if (Deck[Index].Type == TypeOfBuildng.Booster)
        {
            bool boosterBuildingIsPlaced = towers.Where(tower => tower.TryGetComponent<Booster>(out var booster) ).ToArray().Length > 0;
            
            if (boosterBuildingIsPlaced)
            {
                WarningSystem.ShowWarning(WarningSystem.WarningType.SecondBooster);
                return false;
            }
        }

        return true;
    }


    bool DetectGround(int Index, TowerController Tower, out bool posibilityOfPlace, out Vector3 Position)
    {
        posibilityOfPlace = false;
        Position = Vector3.zero;

        if (Input.touchCount > 0)
        {
            Vector3 pos = Input.GetTouch(0).position;

            Ray ray = Camera.main.ScreenPointToRay(pos + (Vector3)offset);
            RaycastHit hit;

            if (Physics.Raycast(ray, out hit, 1000)) //, 1 << 6))
            {
                posibilityOfPlace = hit.transform.gameObject.TryGetComponent<Ground>(out var ground) && ground.groundType == Deck[Index].PlacementType;
                if (posibilityOfPlace)
                    posibilityOfPlace = Tower.SpawnRangeComponent.CanBePlaced();

                Position = new Vector3(hit.point.x, hit.point.y + 1f, hit.point.z);

                return true;
            }
        }

        return false;

    }
    
    
    
}
