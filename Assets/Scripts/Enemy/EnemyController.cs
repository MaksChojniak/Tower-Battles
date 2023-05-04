using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using PathCreation;

public class EnemyController : MonoBehaviour
{
    public PathCreator pathCreator;
    public Transform endPosition;

    public float speed;
    public int health;
    
    float distanceTravelled;

    private void Update()
    {
        Move();
        DestroyEnemy();
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
            GamePlayerInformation.changeHP(-health);
            WaveManager.destroyEnemy(this.gameObject);
        }
    }

}
