using System;
using UnityEngine;
using UnityEngine.UI;

namespace Screen_Scaler
{
    
#if UNITY_EDITOR
    [ExecuteInEditMode]
#endif
    public class CanvasScalerExtension : MonoBehaviour
    {

        [SerializeField] Vector2 MinimumAspectRatio = new Vector2(4,3); // 4:3
        float minScreenAspectRatio => MinimumAspectRatio.x / MinimumAspectRatio.y;
        
        [SerializeField] Vector2 MaximumAspectRatio = new Vector2(22, 10); // 22:10
        float maxScreenAspectRatio => MaximumAspectRatio.x / MaximumAspectRatio.y;
        
        
        CanvasScaler _canvasScaler;

        
        [ContextMenu(nameof(UpdateRatio))]
        void UpdateRatio()
        {
            CalculateCanvasScalerMatch();
            
        }


        void OnValidate()
        {
#if UNITY_EDITOR
            UnityEditor.EditorApplication.update += () => CalculateCanvasScalerMatch();
#endif


        }



        void Awake()
        {
            CalculateCanvasScalerMatch();
            
        }



#if UNITY_EDITOR

        Vector2 GetScreenSize()
        {
            System.Type T = System.Type.GetType("UnityEditor.GameView,UnityEditor");
            System.Reflection.MethodInfo GetSizeOfMainGameView = T.GetMethod("GetSizeOfMainGameView",System.Reflection.BindingFlags.NonPublic | System.Reflection.BindingFlags.Static);
            System.Object Res = GetSizeOfMainGameView.Invoke(null,null);
            return (Vector2)Res;
        }
        
#endif


        void CalculateCanvasScalerMatch()
        {
            // if(_canvasScaler == null)
            //     _canvasScaler = this.GetComponent<CanvasScaler>();
        
            if(this == null || this.gameObject == null || !this.TryGetComponent<CanvasScaler>(out _canvasScaler) )
                return;
        
        
            float screenWidth = Screen.width;
            float screenHeight = Screen.height;
            
#if UNITY_EDITOR
            screenWidth = GetScreenSize().x;
            screenHeight = GetScreenSize().y;
#endif
            
            // Debug.Log($"Screen Resolution [{screenWidth}/{screenHeight}]");
            
            float actualScreenAspectRatio = screenWidth / screenHeight;


            float offset = actualScreenAspectRatio - minScreenAspectRatio;
            float multiplier = offset / (maxScreenAspectRatio - minScreenAspectRatio);

            float calculatedScreenAspectRatio = Mathf.Clamp(multiplier, 0, 1);
            _canvasScaler.matchWidthOrHeight = calculatedScreenAspectRatio;
            
            // Debug.Log($"Match value: {calculatedScreenAspectRatio}");
        }
        
        
    }
}
