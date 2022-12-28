using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using PathCreation;

public class Follower : MonoBehaviour
{
    public PathCreator pathCreator;
    public Transform endPosition;


    public float speed;
    public int health;


    float distanceTravelled;

    private void Update()
    {
        DestroyEnemy();

    }

    public void DestroyEnemy()
    {
        distanceTravelled += speed * 2.5f * Time.deltaTime;
        transform.position = pathCreator.path.GetPointAtDistance(distanceTravelled);
        transform.rotation = pathCreator.path.GetRotationAtDistance(distanceTravelled);

        if (Vector3.Distance(this.transform.position, endPosition.position) < 1)
        {
            GameManager.instance.health -= health ;
            GameManager.instance.enemies.Remove(this.gameObject);

            Destroy(this.gameObject);
        }
    }

}
