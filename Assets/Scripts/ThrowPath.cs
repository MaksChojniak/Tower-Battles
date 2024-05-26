using PathCreation;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ThrowPath : MonoBehaviour
{
    public GameObject bezierPathPrefab;
    public GameObject itemPrefab;

    public Transform startObject;

    const float height = 2.5f;

    public void ThrowObject(Transform target)
    {
        StartCoroutine(ThrowObjectProcess(target));

    }

    IEnumerator ThrowObjectProcess(Transform target)
    {
        Debug.Log($"<color=red> Throw Process </color>");

        GameObject bezierObject = Instantiate(bezierPathPrefab, Vector3.zero, Quaternion.identity);
        bezierObject.transform.position = Vector3.zero;

        GameObject itemObject = Instantiate(itemPrefab, Vector3.zero, Quaternion.identity);

        PathCreator pathCreator = bezierObject.GetComponent<PathCreator>();
        BezierPath bezierPath = pathCreator.bezierPath;

        Vector3 startPos = startObject.position;

        Vector3 heightPos = (startPos + target.position) / 2;
        heightPos += new Vector3(0, height, 0);

        Debug.Log($"<color=red> {bezierPath.NumPoints} </color>");
        bezierPath.SetPoint(0, startPos);  // start point
        bezierPath.SetPoint(3, heightPos); // highest Point
        bezierPath.SetPoint(6, target.position); // end Point

        bezierPath.ControlPointMode = BezierPath.ControlMode.Aligned;

        yield return new WaitForEndOfFrame();

        bezierPath.ControlPointMode = BezierPath.ControlMode.Automatic;

        pathCreator.TriggerPathUpdate();

        yield return new WaitForEndOfFrame();


        float distanceTravelled = 0;

        float distance = pathCreator.path.length;
        float time = 0.3f;
        float velocity = distance / time;

        while (distanceTravelled < pathCreator.path.length)
        {
            distanceTravelled += velocity / 100f;
            itemObject.transform.position = pathCreator.path.GetPointAtDistance(distanceTravelled);
            itemObject.transform.rotation = Quaternion.Euler(itemObject.transform.eulerAngles + new Vector3(Time.deltaTime * 10, 0, Time.deltaTime * 30));


            if (target != null)
                bezierPath.SetPoint(6, target.position);

            yield return new WaitForSeconds(1f / 100f);

            pathCreator.TriggerPathUpdate();

        }

        Destroy( itemObject );
        Destroy( bezierObject );
    }
}
