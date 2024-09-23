using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LineAnimator : MonoBehaviour
{
    [SerializeField] private float AnimationDuration;

    private LineRenderer lineRenderer;

    private void Start()
    {
        lineRenderer = GetComponent<LineRenderer>();

        StartCoroutine(AnimateLine());

    }
    private IEnumerator AnimateLine()
    {
        float startTime = Time.time;

        Vector3 startPosition = lineRenderer.GetPosition(0);
        Vector3 endPosition = lineRenderer.GetPosition(1);

        Vector3 pos = startPosition;
        while (pos != endPosition)
        {
            float t = (Time.time - startTime)/AnimationDuration;
            pos = Vector3.Lerp(startPosition, endPosition, t);
            lineRenderer.SetPosition(1, pos);
            yield return null;
        }

    }
}
