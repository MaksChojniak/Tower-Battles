using System;
using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.UI;

public class BuildingSpawner : MonoBehaviour
{
    [SerializeField] Building[] buildings;

    [SerializeField] GameObject selectedBuilidng;
    [SerializeField] bool posibilityOfPlace;

    void Awake()
    {
        
    }

    public void SpawnBuilding(int index)
    {
        if(buildings[index].price > GamePlayerInformation.instance.balance)
            return;
        
        selectedBuilidng = Instantiate(buildings[index].buildingPrefb, Input.GetTouch(0).position, Quaternion.identity, transform);
        selectedBuilidng.AddComponent<BuildingController>().component = buildings[index];
        selectedBuilidng.GetComponent<BuildingController>().SetRangeImageActive(true);

        BuildingController.ShowSpawnRange(selectedBuilidng, true);
    }

    public void MoveBuilding(int index)
    {
        if(buildings[index].price > GamePlayerInformation.instance.balance)
            return;
        
        if (Input.touchCount > 0)
        {
            Vector3 pos = Input.GetTouch(0).position;

            Ray ray = Camera.main.ScreenPointToRay(pos);
            RaycastHit hit;

            if (Physics.Raycast(ray, out hit, 1000)) //, 1 << 6))
            {
                posibilityOfPlace = hit.transform.gameObject.layer == 6;
                selectedBuilidng.transform.position = new Vector3(hit.point.x, 1f, hit.point.z);
            }
        }
    }

    public void PlaceBuilding(int index)
    {
        if (buildings[index].price > GamePlayerInformation.instance.balance)
            return;


        BuildingController.ShowSpawnRange(selectedBuilidng, false);

        
        if (GameManager.instance.isBuildingsCountMax)
        {
            Destroy(selectedBuilidng);
            selectedBuilidng = null;
            return;
        }


        if (posibilityOfPlace)
        {
            GamePlayerInformation.changeBalance(-buildings[index].price);
            
            selectedBuilidng.GetComponent<BuildingController>().SetRangeImageActive(false);
            selectedBuilidng.layer = LayerMask.NameToLayer("Building");
            selectedBuilidng.GetComponent<BuildingController>().isPlaced = true;
            
            posibilityOfPlace = false;
            selectedBuilidng = null;
        }
        else
        {
            Destroy(selectedBuilidng);
            selectedBuilidng = null;
        }
            
    }

}
