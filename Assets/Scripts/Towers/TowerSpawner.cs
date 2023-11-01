using System;
using System.Collections;
using System.Collections.Generic;
using DefaultNamespace;
using DefaultNamespace.ScriptableObjects;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.Rendering;
using UnityEngine.UI;
using TMPro;
using Unity.Burst.CompilerServices;

public class TowerSpawner : MonoBehaviour
{
    public static event Action OnPlaceTower;
    
    [SerializeField] Tower[] towers;
 
    [SerializeField] GameObject selectedBuilidng;
    [SerializeField] bool posibilityOfPlace;

    [SerializeField] GameObject cancelationTrashCan;

    public const int MaxTowersCount = 10;

    Vector2 offset;

    void Awake()
    {
        towers = PlayerTowerInventory.Instance.TowerDeck;

        offset = new Vector2(3 * (float)Screen.width, 2 * (float)Screen.height) * 1.5f / 100;
    }

    void Update()
    {
        cancelationTrashCan.SetActive(selectedBuilidng != null);
    }

    public void SpawnBuilding(int index)
    {
        if (towers[index] == null) return;

        foreach (var tower in GameObject.FindObjectsOfType<TowerController>())
        {
            tower.ShowTowerViewRange(false);
            tower.ShowTowerInformation(false);
        }

        if (towers[index].GetPrice() > GamePlayerInformation.Instance.GetBalance())
        {
            // ShowBuildingInformations.showNotEnoughMoneyMessage();
            WarningSystem.ShowWarning(WarningSystem.WarningType.NotEnoughtMoney);
            return;
        }

        if (GameObject.FindObjectsOfType<TowerController>().Length >= MaxTowersCount)
        {
            WarningSystem.ShowWarning(WarningSystem.WarningType.MaxTowersCountPlaced);
            return;
        }

        if (towers[index].Type == TypeOfBuildng.Booster)
        {
            bool boosterBuildingIsPlaced = GameObject.FindObjectsOfType<BoosterController>().Length > 0;
            
            if (boosterBuildingIsPlaced)
            {
                WarningSystem.ShowWarning(WarningSystem.WarningType.SecondBooster);
                return;
            }
        }

        selectedBuilidng = Instantiate(towers[index].TowerPrefab, Input.GetTouch(0).position, Quaternion.identity, transform);

        posibilityOfPlace = false;

        selectedBuilidng.GetComponent<TowerController>().ShowTowerViewRange(true);
        TowerController.ShowTowerSpawnRange(selectedBuilidng, true);

        Ground.UpdateGround(towers[index].PlacementType);
    }

    public void MoveBuilding(int index)
    {
        if (towers[index] == null) return;

        if (towers[index].GetPrice() > GamePlayerInformation.Instance.GetBalance())
            return;

        if (selectedBuilidng == null) return;

        if (Input.touchCount > 0)
        {
            Vector3 pos = Input.GetTouch(0).position;

            Ray ray = Camera.main.ScreenPointToRay(pos + (Vector3)offset);
            RaycastHit hit;

            if (Physics.Raycast(ray, out hit, 1000)) //, 1 << 6))
            {
                posibilityOfPlace = hit.transform.gameObject.TryGetComponent<Ground>(out var ground);

                selectedBuilidng.transform.position = new Vector3(hit.point.x, 1f, hit.point.z);


                if (posibilityOfPlace)
                    posibilityOfPlace = selectedBuilidng.GetComponent<TowerController>().SpawnRange.IsAble();

                selectedBuilidng.GetComponent<TowerController>().SpawnRange.SetState(posibilityOfPlace);
                selectedBuilidng.GetComponent<TowerController>().ViewRange.SetState(posibilityOfPlace);
            }
        }
    }

    public void PlaceBuilding(int index)
    {
        Ground.OnStopPlacingTower();
        
        if (towers[index] == null)
            return;
        
        if (towers[index].GetPrice() > GamePlayerInformation.Instance.GetBalance())
            return;
        
        if (selectedBuilidng == null)
            return;
        
        TowerController.ShowTowerSpawnRange(selectedBuilidng, false);
        

        if (posibilityOfPlace)
        {
            GamePlayerInformation.ChangeBalance(-towers[index].GetPrice());
            
            selectedBuilidng.GetComponent<TowerController>().ShowTowerViewRange(false);
            selectedBuilidng.GetComponent<TowerController>().PlaceTower();
            // StartCoroutine(SetBuildingValues(selectedBuilidng));
            
            posibilityOfPlace = false;
            selectedBuilidng = null;
            
            OnPlaceTower?.Invoke();
        }
        else
        {
            Destroy(selectedBuilidng);
            selectedBuilidng = null;
        }
            
    }


    public void CancelPlacingBuilding()
    {
        if(selectedBuilidng == null)
            return;
        
        Destroy(selectedBuilidng);
        posibilityOfPlace = false;
    }
}
