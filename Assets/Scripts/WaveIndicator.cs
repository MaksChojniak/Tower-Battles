using PathCreation;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WaveIndicator : MonoBehaviour
{
    [SerializeField] Transform[] points;
    [SerializeField] LineRenderer lineRenderer;

    private void OnValidate()
    {
        if (lineRenderer == null)
            return;


        lineRenderer.positionCount = points.Length;
        for (int i = 0; i < points.Length; i++)
        {
            lineRenderer.SetPosition(i, points[i].position);
        }

    }
}
