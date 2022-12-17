using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using PathCreation;

public class Follower : MonoBehaviour
{
    public PathCreator pathCreator;
    public float speed = 5;
    float distanceTravelled;
    [SerializeField] Transform endPosition;

    private void Update()
    {
        distanceTravelled += speed * 5 * Time.deltaTime;
        transform.position = pathCreator.path.GetPointAtDistance(distanceTravelled);
        transform.rotation = pathCreator.path.GetRotationAtDistance(distanceTravelled);

        if(Vector3.Distance(this.transform.position, endPosition.position) < 1)
        {
            Debug.Log("End");
            Destroy(this.gameObject);
        }

    }

}
