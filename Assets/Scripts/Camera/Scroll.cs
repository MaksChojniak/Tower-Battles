using UnityEngine;

namespace MMK.Camera
{
    public class Point
    {
        public float x;
        public float z;

        public Point()
        {
            x = 0;
            z = 0;
        }

        public Point(Vector3 position)
        {
            x = position.x;
            z = position.z;
        }

        public Vector2 GetVector()
        {
            return new Vector2(x, z);
        }
        
    }
    
    public struct Bounds
    {
        public Point TopLeft;
        public Point TopRight;
        public Point BottomLeft;
        public Point BottomRight;


        public void UpdateBounds(UnityEngine.Camera camera)
        {
            
        }

        public bool IsInBounds(Bounds bounds)
        {
            return false;
        }
    }



    public class Scroll : MonoBehaviour
    {
#if UNITY_IOS || UNITY_ANDROID
        public UnityEngine.Camera Camera;
        public bool Rotate;
        protected Plane Plane;

        // Granice dla kamery
        public Vector2 minBounds;
        public Vector2 maxBounds;
        public float minZoom = 2.0f;
        public float maxZoom = 10.0f;
        private Vector3 initialPosition;
        private float initialOrthographicSize;

        private void Awake()
        {
            if (Camera == null)
                Camera = UnityEngine.Camera.main;

            initialPosition = Camera.transform.position;
            initialOrthographicSize = Camera.orthographicSize;
        }

        private void Update()
        {
            // Update Plane
            if (Input.touchCount >= 1)
                Plane.SetNormalAndPosition(transform.up, transform.position);

            var Delta1 = Vector3.zero;
            var Delta2 = Vector3.zero;

            // Scroll
            if (Input.touchCount >= 1)
            {
                Delta1 = PlanePositionDelta(Input.GetTouch(0));
                if (Input.GetTouch(0).phase == TouchPhase.Moved)
                {
                    Vector3 newPosition = Camera.transform.position + Delta1;

                    // Zastosowanie ograniczeń
                    newPosition.x = Mathf.Clamp(newPosition.x, minBounds.x, maxBounds.x);
                    newPosition.y = Mathf.Clamp(newPosition.y, minBounds.y, maxBounds.y);

                    Camera.transform.position = newPosition;
                }
            }

            // Pinch
            if (Input.touchCount >= 2)
            {
                var pos1 = PlanePosition(Input.GetTouch(0).position);
                var pos2 = PlanePosition(Input.GetTouch(1).position);
                var pos1b = PlanePosition(Input.GetTouch(0).position - Input.GetTouch(0).deltaPosition);
                var pos2b = PlanePosition(Input.GetTouch(1).position - Input.GetTouch(1).deltaPosition);

                // Calculate zoom
                var zoom = Vector3.Distance(pos1, pos2) / Vector3.Distance(pos1b, pos2b);

                // Edge case
                if (zoom == 0 || zoom > 10)
                    return;

                // Move cam amount the mid ray
                Vector3 midPoint = (pos1 + pos2) / 2;
                float newOrthographicSize = Camera.orthographicSize / zoom;

                // Zastosowanie ograniczeń przybliżenia
                newOrthographicSize = Mathf.Clamp(newOrthographicSize, minZoom, maxZoom);
                Camera.orthographicSize = newOrthographicSize;

                // Aktualizacja granic po zmianie przybliżenia
                float vertExtent = Camera.orthographicSize;
                float horzExtent = vertExtent * Screen.width / Screen.height;

                minBounds = new Vector2(initialPosition.x - horzExtent, initialPosition.y - vertExtent);
                maxBounds = new Vector2(initialPosition.x + horzExtent, initialPosition.y + vertExtent);

                // Move camera to keep it within bounds
                Vector3 newPosition = Vector3.LerpUnclamped(midPoint, Camera.transform.position, 1 / zoom);
                newPosition.x = Mathf.Clamp(newPosition.x, minBounds.x, maxBounds.x);
                newPosition.y = Mathf.Clamp(newPosition.y, minBounds.y, maxBounds.y);

                Camera.transform.position = newPosition;

                if (Rotate && pos2b != pos2)
                    Camera.transform.RotateAround(midPoint, Plane.normal, Vector3.SignedAngle(pos2 - pos1, pos2b - pos1b, Plane.normal));
            }
        }

        protected Vector3 PlanePositionDelta(Touch touch)
        {
            // Not moved
            if (touch.phase != TouchPhase.Moved)
                return Vector3.zero;

            // Delta
            var rayBefore = Camera.ScreenPointToRay(touch.position - touch.deltaPosition);
            var rayNow = Camera.ScreenPointToRay(touch.position);
            if (Plane.Raycast(rayBefore, out var enterBefore) && Plane.Raycast(rayNow, out var enterNow))
                return rayBefore.GetPoint(enterBefore) - rayNow.GetPoint(enterNow);

            // Not on plane
            return Vector3.zero;
        }

        protected Vector3 PlanePosition(Vector2 screenPos)
        {
            // Position
            var rayNow = Camera.ScreenPointToRay(screenPos);
            if (Plane.Raycast(rayNow, out var enterNow))
                return rayNow.GetPoint(enterNow);

            return Vector3.zero;
        }

        private void OnDrawGizmos()
        {
            Gizmos.DrawLine(transform.position, transform.position + transform.up);
        }
#endif
    }


}
