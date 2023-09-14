using System;
using System.Collections;
using System.Collections.Generic;
using System.Net.Http.Headers;
using UnityEngine;
using PathCreation;
using UnityEngine.UI;

public class EnemyController : MonoBehaviour, IDamageable
{
    public Enemy component;
        
    public float speed;
    public int health;

    public float distanceTravelled;
    
    [SerializeField] PathCreator pathCreator;
    [SerializeField] Transform endPosition;

    RectTransform canvasHP;


    void Awake()
    {
        canvasHP = transform.GetChild(0).GetChild(0).GetComponent<RectTransform>();

        pathCreator = GameObject.FindGameObjectWithTag("Path").GetComponent<PathCreator>();
        endPosition = GameObject.FindGameObjectWithTag("EnemyEndLoopPosition").transform; 
    }

    private void Update()
    {
        if(health <= 0)
            WaveManager.destroyEnemy(this.gameObject);
        
        
        Move();
        DestroyEnemy();

        canvasHP.transform.GetChild(0).GetComponent<Image>().fillAmount = ((float)health / (float)component.health);
    }

    
    void Move()
    {
        distanceTravelled += speed * 2.5f * Time.deltaTime;
        transform.position = pathCreator.path.GetPointAtDistance(distanceTravelled);
        transform.rotation = pathCreator.path.GetRotationAtDistance(distanceTravelled);
    }
    
    
    void DestroyEnemy()
    {

        if (Vector3.Distance(this.transform.position, endPosition.position) < 1)
        {
            if(GamePlayerInformation.instance != null)
                GamePlayerInformation.changeHP(-health);
            
            WaveManager.destroyEnemy(this.gameObject);
        }
    }

    public void Damage(int value)
    {
        health -= value;
    }
}
