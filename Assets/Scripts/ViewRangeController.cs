using System;
using UnityEngine;
using UnityEngine.Experimental.Rendering;
using UnityEngine.UI;

namespace DefaultNamespace
{
    public class ViewRangeController: MonoBehaviour
    {
        [Header("UI Properties")]
        [SerializeField] LineRenderer LineRenderer;

        [Header("Properties")]
        public float radius;
        [SerializeField] Material ringMaterialExample;
        [SerializeField] float radiusOffset;

        [Header("Debug UI")]
        [SerializeField] int steps;
        
        
        Material ringMaterial;

        public void UpdateRadius(float _radius)
        {
            radius = _radius;

            UpdateSteps(radius);
            
            UpdateRing();
        }

        public void UpdateRingColor(Color color)
        {
            ringMaterial = new Material(ringMaterialExample);
            ringMaterial.SetVector("_Tilling", new Vector2(steps, 1) );
            ringMaterial.SetColor("_Color", color);
            LineRenderer.material = ringMaterial;
        }

        public void UpdateRing()
        {
            DrawRing(steps, radius - radiusOffset);
        }

        void UpdateSteps(float _radius)
        {
            steps = Mathf.RoundToInt( 4 *  2 * 2 * Mathf.PI * _radius);
        }
        
        void DrawRing(int _steps, float _radius)
        {
            LineRenderer.positionCount = _steps;

            for (int i = 0; i < _steps; i++)
            {
                float circumferenceProgress = (float)i / (float)_steps;

                float currentRadian = circumferenceProgress * 2 * Mathf.PI;

                float xScaled = Mathf.Cos(currentRadian);
                float zScaled = Mathf.Sin(currentRadian);

                float x = xScaled * _radius;
                float z = zScaled * _radius;

                Vector3 currentPosition = LineRenderer.transform.position + new Vector3(x, 0, z);
                
                LineRenderer.SetPosition(i, currentPosition);
            }
        }
        

    }
}
