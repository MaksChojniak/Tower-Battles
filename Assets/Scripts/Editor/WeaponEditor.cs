#if UNITY_EDITOR

using MMK.ScriptableObjects;
using UnityEditor;

namespace Editor
{
    [CustomEditor(typeof(Weapon))]
    public class WeaponEditor : UnityEditor.Editor
    {

        Weapon _target;
        
        public override void OnInspectorGUI()
        {
            _target = (Weapon)target;
            
            serializedObject.Update();


            EditorGUILayout.Space();
            
            InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "WeaponName", Caption = "Weapon Name"});
            
            EditorGUILayout.Space();
            
            InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "WeaponType", Caption = "Weapon Type"});
            InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "DamageType", Caption = "Damage Type"});
            InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "ShootingType", Caption = "Shooting Type"});
            
            EditorGUILayout.Space();
            
            InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "Damage", Caption = "Damage"});
            InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "firerate", Caption = "Firerate"});
            
            EditorGUILayout.Space();
            
            InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "SplashDamageSpread", Caption = "Splash Damage Spread"});
            InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "MaxEnemiesInSpread", Caption = "MaxEnemies In Spread"});

            if (_target.DamageType == DamageType.Fire)
            {
                EditorGUILayout.Space();
                
                InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "BurningTime", Caption = "Burning Time"});
                InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "BurningInterval", Caption = "Burning Interval"});
            }
            
            serializedObject.ApplyModifiedProperties();
            
            InspectorTools.EndContent();
        }
        
        
        
    }
}

#endif
