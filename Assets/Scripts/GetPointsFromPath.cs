using PathCreation;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.PlayerLoop;

public class GetPointsFromPath : MonoBehaviour
{
    [SerializeField] PathCreator path;
    [SerializeField] LineRenderer lineRenderer;
    [SerializeField] bool rotated;

    [SerializeField] bool Update;

    private void OnValidate()
    {
        if (Update)
        {
            Update = false;

            lineRenderer.positionCount = 0;

            List<Vector3> points = new List<Vector3>();

            for (int i = 0; i < path.bezierPath.NumPoints; i++)
            {
                Vector3 newPos = path.bezierPath.GetPoint(i) * (rotated ? -1f : 1f);

                if(points.Count >= 1 && Vector3.Distance(newPos, points[points.Count-1]) > 2f)
                    points.Add(newPos);
                else if (points.Count == 0)
                    points.Add(newPos);

            }

            lineRenderer.positionCount = points.Count;

            for (int i = 0; i < points.Count; i++)
            {
                points[i] += path.transform.position;
                // points[i] = new Vector3(points[i].x, 1f, points[i].z);
                lineRenderer.SetPosition(i, points[i]);

                Debug.Log(points[i].ToString());
            }
        }
    }
}
