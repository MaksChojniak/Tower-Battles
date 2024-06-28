#if UNITY_EDITOR

using MMK.Towers;
using UnityEditor;

namespace Editor
{
    
    [CustomEditor(typeof(SoldierController), false)]
    public class SoldierControllerEditor : UnityEditor.Editor
    {
            
        public override void OnInspectorGUI()
        {
            serializedObject.Update();
            
        
            EditorGUILayout.Space();
            EditorGUILayout.LabelField("Stats", EditorStyles.boldLabel);
            EditorGUILayout.Space(5);
            InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "SoldierData", Caption = "Soldier Data"});
            // InspectorTools.PropertyField(serializedObject, "SoldierData", "Soldier Data");
            EditorGUILayout.Space(3);
            InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "TargetMode", Caption = "Target Mode"});
            InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "Level", Caption = "Upgrade Level"});
            InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "IsPlaced", Caption = "Is Placed"});
            // InspectorTools.PropertyField(serializedObject, "TargetMode", "Target Mode");
            // InspectorTools.PropertyField(serializedObject, "Level", "Upgrade Level");
            // InspectorTools.PropertyField(serializedObject, "IsPlaced", "Is Placed");





            serializedObject.ApplyModifiedProperties();
            
            InspectorTools.EndContent();
        }
        
        
    }
    

}



#endif