#if UNITY_EDITOR

using MMK.Towers;
using UnityEditor;

namespace Editor
{
    
    [CustomEditor(typeof(FarmController))]
    public class FarmControllerEditor : UnityEditor.Editor
    {
            
        public override void OnInspectorGUI()
        {
            serializedObject.Update();
            
        
            EditorGUILayout.Space();
            EditorGUILayout.LabelField("Stats", EditorStyles.boldLabel);
            EditorGUILayout.Space(5);
            InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "FarmData", Caption = "Farm Data"});
            EditorGUILayout.Space(3);
            InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "Level", Caption = "Upgrade Level"});
            InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "IsPlaced", Caption = "Is Placed"});

            
            
            serializedObject.ApplyModifiedProperties();
            
            InspectorTools.EndContent();
        }
        
        
    }
    

}

#endif