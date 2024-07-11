using System;
using UnityEngine;

namespace MMK.Camera
{
    [Serializable]
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

    [Serializable]
    public class Bounds
    {

        public Point TopLeft;
        public Point TopRight;
        public Point BottomLeft;
        public Point BottomRight;

        public Bounds()
        {
            TopLeft = new Point();
            TopRight = new Point();
            BottomLeft = new Point();
            BottomRight = new Point();
        }

        public Bounds(Vector3 TopLeftVector, Vector3 TopRightVector, Vector3 BottomLeftVector, Vector3 BottomRightVector)
        {
            TopLeft = new Point(TopLeftVector);
            TopRight = new Point(TopRightVector);
            BottomLeft = new Point(BottomLeftVector);
            BottomRight = new Point(BottomRightVector);
        }

        public Bounds(Point TopLeftPoint, Point TopRightPoint, Point BottomLeftPoint, Point BottomRightPoint)
        {
            TopLeft = TopLeftPoint;
            TopRight = TopRightPoint;
            BottomLeft = BottomLeftPoint;
            BottomRight = BottomRightPoint;
        }

        public void UpdateBounds(UnityEngine.Camera camera) {}

        // public bool IsInBounds(Bounds bounds)
        // {
        //     foreach (Point point in bounds.GetBoundsPoints())
        //     {
        //         if (!IsPointInPolygon(point, GetBoundsPoints()))
        //         {
        //             return false;
        //         }
        //     }
        //     
        //     return true;
        // }
        
        public bool IsInBounds(Bounds bounds)
        {
            if (!CheckSideBounds(bounds.TopLeft, BottomLeft, TopLeft))
                return false;
            
            if (!CheckSideBounds(bounds.TopLeft, TopLeft, TopRight))
                return false;
            
            if (!CheckSideBounds(bounds.BottomRight, TopRight, BottomRight))
                return false;
            
            if (!CheckSideBounds(bounds.BottomRight, BottomRight, BottomLeft))
                return false;
            
            return true;
        }

        bool CheckSideBounds(Point point, Point point_A, Point point_B)
        {
            return true;
        }
        
        Vector2[] GetBoundsVectors() => new Vector2[] {TopLeft.GetVector(), TopRight.GetVector(), BottomLeft.GetVector(), BottomRight.GetVector()};
        Point[] GetBoundsPoints() => new Point[] {TopLeft, TopRight, BottomLeft, BottomRight};
        
        
        
        // static bool IsPointInPolygon(Point point, Point[] polygon)
        // {
        //     int polygonLength = polygon.Length, i = 0;
        //     bool inside = false;
        //     float pointX = point.x, pointY = point.z;
        //     float startX, startZ, endX, endZ;
        //     Point endPoint = polygon[polygonLength - 1];
        //     endX = endPoint.x;
        //     endZ = endPoint.z;
        //     while (i < polygonLength)
        //     {
        //         startX = endX;
        //         startZ = endZ;
        //         endPoint = polygon[i++];
        //         endX = endPoint.x;
        //         endZ = endPoint.z;
        //         inside ^= (endZ > pointY) ^ (startZ > pointY) && (pointX - startX) < (endX - startX) * (pointY - startZ) / (endZ - startZ);
        //     }
        //     return inside;
        // }

        
        public static Bounds GetBounds(UnityEngine.Camera camera)
        {
            int screenWidth = Screen.width;
            int screenHeight = Screen.height;

            // Ustal współrzędne lewego górnego rogu w przestrzeni ekranowej
            Vector3 topLeftScreenPosition = new Vector3(0, screenHeight, camera.nearClipPlane);
            Vector3 topRightScreenPosition = new Vector3(screenWidth, screenHeight, camera.nearClipPlane);
            Vector3 bottomLeftScreenPosition = new Vector3(0, 0, camera.nearClipPlane);
            Vector3 bottomRightScreenPosition = new Vector3(screenWidth, 0, camera.nearClipPlane);

            // Przekształć współrzędne z przestrzeni ekranowej na przestrzeń światową
            return new Bounds(
                camera.ScreenToWorldPoint(topLeftScreenPosition),
                camera.ScreenToWorldPoint(topRightScreenPosition),
                camera.ScreenToWorldPoint(bottomLeftScreenPosition),
                camera.ScreenToWorldPoint(bottomRightScreenPosition));
        }
    }



    public class Zoom : MonoBehaviour
    {
        public delegate void ZoomInDelegate();
        event ZoomInDelegate ZoomIn;

        public delegate void ZoomOutDelegate();
        event ZoomOutDelegate ZoomOut;
        
        public delegate void MoveDelegate();
        event MoveDelegate Move;



        [SerializeField] Bounds startBounds;
        [SerializeField] Vector3 startPosition;
        
        
        [Space(18)]
        public float moveSpeed = 2.5f;
        public float zoomSpeed = 4f;
        public UnityEngine.Camera selectedCamera;
        
        [Space(18)]
        public float minTouchSpeed = 10.0f;
        public float varianceInDistances = 10.0f;
        
        float touchDelta = 0.0f;
        
        float touchSpeed_0 = 0.0f;
        float touchSpeed_1 = 0.0f;

        Vector2 previousDistance = Vector2.zero;
        Vector2 currentDistance = Vector2.zero;

        Vector2 moveDirection = Vector2.zero;
        

        void Awake()
        {
            ZoomIn += OnZoomIn;
            ZoomOut += OnZoomOut;
            Move += OnMove;
            
            selectedCamera = this.GetComponent<UnityEngine.Camera>();
            
        }

        void OnDestroy()
        {
            Move -= OnMove;
            ZoomOut -= OnZoomOut;
            ZoomIn -= OnZoomIn;

        }

        void Start()
        {
            startBounds = Bounds.GetBounds(selectedCamera);
            startPosition = selectedCamera.transform.position;
            
        }



        void Update()
        {
            if (Input.touchCount == 2 && Input.GetTouch(0).phase == TouchPhase.Moved && Input.GetTouch(1).phase == TouchPhase.Moved)
                PinchHandle();

            if (Input.touchCount == 1 && Input.GetTouch(0).phase == TouchPhase.Moved)
                MoveHandle();
            else
                moveDirection = Vector2.zero;

        }


        void PinchHandle()
        {
            currentDistance = Input.GetTouch(0).position - Input.GetTouch(1).position;                                                                                      //current distance between finger touches
            previousDistance = ((Input.GetTouch(0).position - Input.GetTouch(0).deltaPosition) - (Input.GetTouch(1).position - Input.GetTouch(1).deltaPosition));  //difference in previous locations using delta positions
            
            touchDelta = currentDistance.magnitude - previousDistance.magnitude;
            
            touchSpeed_0 = Input.GetTouch(0).deltaPosition.magnitude / Input.GetTouch(0).deltaTime;
            touchSpeed_1 = Input.GetTouch(1).deltaPosition.magnitude / Input.GetTouch(1).deltaTime;
            
            
            if ( touchDelta + varianceInDistances > 1 && touchSpeed_0 > minTouchSpeed && touchSpeed_1 > minTouchSpeed )
                ZoomIn?.Invoke();
            
            if ( touchDelta + varianceInDistances <= 1 && touchSpeed_0 > minTouchSpeed && touchSpeed_1 > minTouchSpeed )
                ZoomOut?.Invoke();

        }

        void MoveHandle()
        {
            moveDirection = ( Input.GetTouch(0).deltaPosition ).normalized;//(Input.GetTouch(0).deltaPosition - Input.GetTouch(0).position).normalized;
            
            Move?.Invoke();
        }



        void OnMove()
        {
            Vector3 cameraPosition = selectedCamera.transform.position; 
            
            selectedCamera.transform.position += ( (Vector3.forward * moveDirection.y) + (Vector3.right * moveDirection.x) ) * moveSpeed * 10f * Time.deltaTime;
            
            
            Bounds newBounds = Bounds.GetBounds(selectedCamera);
            
            if (!startBounds.IsInBounds(newBounds))
            {
                // selectedCamera.transform.position = cameraPosition;
                
            }
            
        }           



        void OnZoomIn()
        {
            Vector3 cameraPosition = selectedCamera.transform.position;

            selectedCamera.transform.position += selectedCamera.transform.forward * zoomSpeed * 10 * Time.deltaTime;

            
            Bounds newBounds = Bounds.GetBounds(selectedCamera);
            
            if (!startBounds.IsInBounds(newBounds))
            {
                // selectedCamera.transform.position = cameraPosition;
                // TODO set maximum zoom in
            }

        }


        void OnZoomOut()
        {
            Vector3 cameraPosition = selectedCamera.transform.position;

            selectedCamera.transform.position -= selectedCamera.transform.forward * zoomSpeed * 10 * Time.deltaTime;

            
            Bounds newBounds = Bounds.GetBounds(selectedCamera);
            
            if (!startBounds.IsInBounds(newBounds))
            {
                // selectedCamera.transform.position = cameraPosition;
                // TODO instead will be lerping to start position if only one bound is not correct
            }
            
        }








    }



}
