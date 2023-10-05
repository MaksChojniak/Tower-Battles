using System;
using UnityEngine;

namespace DefaultNamespace
{
    public class MenuBackground : MonoBehaviour
    {
        [Serializable]
        class PointData
        {
            public Transform transform;
            public float lerpValue;
            public float delayedStart;
        }

        [SerializeField] Camera Camera;
        
        [SerializeField] PointData[] points;
        [SerializeField] int actuallyPointIndex;


        void Awake()
        {
            actuallyPointIndex = 0;
            currentDelayTime = 0;
        }

        void LateUpdate()
        {

            MoveAnimation();
        }

        float currentDelayTime;
        void MoveAnimation()
        {
            Transform cameraTransform = Camera.transform;
            cameraTransform.position = Vector3.Slerp( cameraTransform.position,  points[actuallyPointIndex].transform.position,  points[actuallyPointIndex].lerpValue * Time.fixedDeltaTime );
            cameraTransform.rotation = Quaternion.Slerp( cameraTransform.rotation,  points[actuallyPointIndex].transform.rotation,  points[actuallyPointIndex].lerpValue * Time.fixedDeltaTime );

            if (Vector3.Distance(cameraTransform.position, points[actuallyPointIndex].transform.position) < 0.1f)
            {
                currentDelayTime += Time.fixedDeltaTime;

                int nextIndex = actuallyPointIndex + 1 < points.Length ? actuallyPointIndex + 1 : 0;
                if (currentDelayTime >= points[nextIndex].delayedStart)
                {
                    actuallyPointIndex = nextIndex;
                    currentDelayTime = 0;
                }
            }
        }
    }
}
