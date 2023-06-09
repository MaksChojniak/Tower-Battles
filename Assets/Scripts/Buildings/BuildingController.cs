using PathCreation;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;


public class BuildingController : MonoBehaviour
{
    public static BuildingController instance;

    public static Action<GameObject, bool> ShowSpawnRange;
    public static Action GetFarmReward;

    public int currentUpgradeLevel;

    Farm farm;
    public Building component;
    public bool isPlaced;

    public float upgradeDiscountMultiplier;
    public float firerateBoostMultiplier;
    public float IntervalBoostMultiplier;
    public float IncomeBoostMultiplier;

    public int totalDamage;
    public int totalIncome;

    RectTransform viewRangeCanvas;
    GameObject spawnRangePlane;

    bool isShooting;
    double timeToDeploy;


    void Awake()
    {
        instance = this;

        currentUpgradeLevel = 0;
        
        ShowSpawnRange += SetSpawnRangePlaneVisibility;
        GetFarmReward += GetWaveFarmReward;

        viewRangeCanvas = transform.GetChild(transform.childCount - 2).GetComponent<RectTransform>();
        spawnRangePlane = transform.GetChild(transform.childCount - 1).gameObject;

        isShooting = false;
        isPlaced = false;
        timeToDeploy = 0;

        totalDamage = 0;
        totalIncome = 0;

        firerateBoostMultiplier = 1;
        upgradeDiscountMultiplier = 1;
        IntervalBoostMultiplier = 1;
        IncomeBoostMultiplier = 1;
    }

    void OnDestroy()
    {
        ShowSpawnRange -= SetSpawnRangePlaneVisibility;
        GetFarmReward -= GetWaveFarmReward;
    }

    void Update()
    {
        SetViewRange((float)component.GetViewRange(currentUpgradeLevel));

        if(!isPlaced)
            return;

        bool boosterBuildingIsPlaced = false;
        foreach (var building in GameObject.FindObjectsOfType<BuildingController>())
        {
            if (building.component.type == TypeOfBuildng.booster)
                boosterBuildingIsPlaced = true;
        }
        if(!boosterBuildingIsPlaced)
        {
            firerateBoostMultiplier = 1;
            upgradeDiscountMultiplier = 1;
            IntervalBoostMultiplier = 1;
            IncomeBoostMultiplier = 1;
        }

        Shooting();

        CheckInfo();

        SpawnVehicle();

        BoostTower();

        CurrentUpgradeModel();
    }


    //Shows the spacing barrier around the tower
    void SetSpawnRangePlaneVisibility(GameObject selectedBuilidng, bool value)
    {
        if (this.gameObject != selectedBuilidng)
            spawnRangePlane.SetActive(value);
    }
    
    //Shows the vievrange of the tower
    public void SetRangeImageActive(bool state)
    {
        viewRangeCanvas.gameObject.SetActive(state);
    }
    
    void SetViewRange(float value)
    {
        viewRangeCanvas.sizeDelta = new Vector2(value * 2, value * 2);
    }

    //Shows Stats of the Selected Tower
    void CheckInfo()
    {
        
        if (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began)
        {
            Vector3 pos = Input.GetTouch(0).position;

            GameObject UICOmponent = UIRaycast(ScreenPosToPointerData(pos));
            if (UICOmponent != null && UICOmponent.layer == LayerMask.NameToLayer("UI"))
                return;

            Ray ray = Camera.main.ScreenPointToRay(pos);
            RaycastHit hit;
            
            if (Physics.Raycast(ray, out hit, 1000))
            {
                if (hit.transform.gameObject.layer == LayerMask.NameToLayer("Building") && hit.transform.gameObject == this.gameObject)
                { 
                    SetRangeImageActive(true);
                    ShowBuildingInformations.checkInfo(this.gameObject, true);
                }
                else if (viewRangeCanvas.gameObject.activeSelf == true)
                {
                    SetRangeImageActive(false);
                    ShowBuildingInformations.checkInfo(this.gameObject, false);
                }

            }
        }
        
    }
    
    
    //Shooting of the "Soldier" tower type
    void Shooting()
    {
        if (component.type == TypeOfBuildng.soldier && !isShooting)
        {
            isShooting = true;
            Soldier soldierComponent = (component as Soldier);
            int damage = soldierComponent.GetDamage(currentUpgradeLevel);
            StartCoroutine(GiveDamage(component.GetViewRange(currentUpgradeLevel), damage, soldierComponent.GetFirerate(currentUpgradeLevel, firerateBoostMultiplier)));
        }
    }

    //Dealing damage to nearest enemies in viewrange
    IEnumerator GiveDamage(double viewRange, int damage, float firerate)
    {
        
        List<EnemyController> enemiesInViewRange = new List<EnemyController>();
        foreach (var enemy in GameObject.FindObjectsOfType<EnemyController>())
        {
            if(Vector3.Distance(this.transform.position, enemy.transform.position) <= viewRange)
                enemiesInViewRange.Add(enemy);
        }

        if (enemiesInViewRange.Count <= 0)
        {
            isShooting = false;
            yield break;
        }

        float maxDistanceTaveled = enemiesInViewRange[0].distanceTravelled;
        EnemyController currentEnemy = enemiesInViewRange[0];
        foreach (var enemy in enemiesInViewRange)
        {
            if (enemy.distanceTravelled > maxDistanceTaveled)
            {
                maxDistanceTaveled = enemy.distanceTravelled;
                currentEnemy = enemy;
            }
        }

        this.transform.GetChild(currentUpgradeLevel).LookAt(currentEnemy.transform.position);
        currentEnemy.GetComponent<IDamageable>().Damage(damage);
        totalDamage += damage;

        GamePlayerInformation.changeBalance(damage);

        yield return new WaitForSeconds(firerate);
        isShooting = false;
    }

    
    void SpawnVehicle()
    {
        if (component.type != TypeOfBuildng.spawner) return;

        Spawner spawnerComponent = component as Spawner;

        if(timeToDeploy <= 0)
        {
            GameObject vehicle = Instantiate(spawnerComponent.spawnedBuilding.buildingPrefab, this.transform);
            vehicle.AddComponent<VehicleController>().component = spawnerComponent.spawnedBuilding;
            vehicle.GetComponent<VehicleController>().currentUpgradeLevel = currentUpgradeLevel;

            timeToDeploy = spawnerComponent.spawnInterval * IntervalBoostMultiplier;
        }
        else
        {
            timeToDeploy -= Time.deltaTime;
        }
    }
    
    
    static GameObject UIRaycast (PointerEventData pointerData)
    {
        var results = new List<RaycastResult>();
        EventSystem.current.RaycastAll(pointerData, results);
 
        return results.Count < 1 ? null : results[0].gameObject;
    }
    
    static PointerEventData ScreenPosToPointerData (Vector2 screenPos)
        => new(EventSystem.current){position = screenPos};


    void GetWaveFarmReward()
    {
        if (component.type == TypeOfBuildng.farm)
        {
            Farm farmComponent = (component as Farm);

            GamePlayerInformation.changeBalance((int)(farmComponent.GetWaveReward(currentUpgradeLevel) * IncomeBoostMultiplier));
            totalIncome += (int)(farmComponent.GetWaveReward(currentUpgradeLevel) * IncomeBoostMultiplier);
        }
    }

    //Boost stats of nearby towers
    void BoostTower()
    {
        if (component.type != TypeOfBuildng.booster) return;

        Booster boosterComponent = (component as Booster);


        List<BuildingController> buildingsInViewRange = new List<BuildingController>();
        foreach (var building in GameObject.FindObjectsOfType<BuildingController>())
        {
            building.firerateBoostMultiplier = 1;
            building.upgradeDiscountMultiplier = 1;

            if (Vector3.Distance(this.transform.position, building.transform.position) <= boosterComponent.GetViewRange(currentUpgradeLevel))
                buildingsInViewRange.Add(building);
        }

        foreach(var building in buildingsInViewRange)
        {
            if (building.component.type != TypeOfBuildng.booster)
            {
                building.firerateBoostMultiplier = boosterComponent.GetFirerateBoost(currentUpgradeLevel);
                building.upgradeDiscountMultiplier = boosterComponent.GetUpgradeDiscount(currentUpgradeLevel);
                building.IntervalBoostMultiplier = boosterComponent.GetIntervalBoost(currentUpgradeLevel);
                building.IncomeBoostMultiplier = boosterComponent.GetIncomeBoost(currentUpgradeLevel);
            }
        }
    }

    //Shows current tower model accoding to its level
    void CurrentUpgradeModel()
    {
        for (int i = 0; i < 5; i++)
        {
            this.transform.GetChild(i).gameObject.SetActive(currentUpgradeLevel == i);
        }
    }
}

