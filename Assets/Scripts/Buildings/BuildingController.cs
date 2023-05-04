using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class BuildingController : MonoBehaviour
{
    public static Action<GameObject, bool> ShowSpawnRange;
    
    public Building component;
    public bool isPlaced;
    
    RectTransform viewRangeCanvas;
    GameObject spawnRangePlane;
    bool isShooting;

    void Awake()
    {
        ShowSpawnRange += SetSpawnRangePlaneVisibility;
        viewRangeCanvas = transform.GetChild(0).GetComponent<RectTransform>();
        spawnRangePlane = transform.GetChild(1).gameObject;

        isShooting = false;
        isPlaced = false;
    }

    void OnDestroy()
    {
        ShowSpawnRange -= SetSpawnRangePlaneVisibility;
    } 
    
    
    void Update()
    {
        SetViewRange((float)component.GetViewRange());

        if(!isPlaced)
            return;

        Shooting();

        // CheckInfo();
    }


    void SetSpawnRangePlaneVisibility(GameObject selectedBuilidng, bool value)
    {
        if (this.gameObject != selectedBuilidng)
            spawnRangePlane.SetActive(value);
    }
    
    public void SetRangeImageActive(bool state)
    {
        viewRangeCanvas.gameObject.SetActive(state);
    }
    
    void SetViewRange(float value)
    {
        viewRangeCanvas.sizeDelta = new Vector2(value * 2, value * 2);
    }


    void CheckInfo()
    {
        
        if (Input.touchCount > 0)
        {
            Vector3 pos = Input.GetTouch(0).position;

            Ray ray = Camera.main.ScreenPointToRay(pos);
            RaycastHit hit;

            if (Physics.Raycast(ray, out hit, 1000))
            {
                if (hit.transform.gameObject.layer == LayerMask.NameToLayer("Building") && hit.transform.gameObject == this.gameObject)
                {
                    print("xdxdxdxdxdxd");
                    SetRangeImageActive(true);
                }

            }
        }
        
    }
    
    
    void Shooting()
    {
        if (component.type == TypeOfBuildng.soldier && !isShooting)
        {
            isShooting = true;
            Soldier soldierComponent = (component as Soldier);
            int damage = soldierComponent.GetDamage();
            StartCoroutine(GiveDamage(component.GetViewRange(), damage, soldierComponent.GetFirerate()));
        }
    }

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
        
        currentEnemy.GetComponent<IDamageable>().Damage(damage);

        yield return new WaitForSeconds(firerate);
        isShooting = false;
    }

    
}

