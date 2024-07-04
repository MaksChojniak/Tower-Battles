#if UNITY_EDITOR

using Towers;
using UnityEditor;


namespace Editor
{
    
    [CustomEditor(typeof(SoldierAnimation))]
    public class SoldierAnimationEditor : UnityEditor.Editor
    {

        
        public override void OnInspectorGUI()
        {
            serializedObject.Update();
            

            EditorGUILayout.Space();
            EditorGUILayout.LabelField("Animation Controllers", EditorStyles.boldLabel);
            EditorGUILayout.Space(5);
            InspectorTools.DrawUpgradableProperties(serializedObject, "AnimationControllers", "Animation Controllers");
            
            EditorGUILayout.Space();
            EditorGUILayout.LabelField("Animation Clips", EditorStyles.boldLabel);
            EditorGUILayout.Space(5);
            InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "LevelUpClip", Caption = "LevelUp Clip"});
            InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "RemoveTowerClip", Caption = "Remove Tower Clip"});
            // InspectorTools.PropertyField(serializedObject, "LevelUpClip", "LevelUp Clip");
            // InspectorTools.PropertyField(serializedObject, "RemoveTowerClip", "Remove Tower Clip");
            // InspectorTools.PropertyField(serializedObject, "ShootAnimationClip", "Shoot Clip");

            
            EditorGUILayout.Space(15);
            EditorGUILayout.LabelField("Prefabs for bullet & throw animations", EditorStyles.boldLabel);
            EditorGUILayout.Space(5);
            InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "FireStreamPrefab", Caption = "Fire Stream Prefab"});
            InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "ProjectileBeamPrefab", Caption = "Projectile Beam Prefab"});
            InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "ThrowPathPrefab", Caption = "Throw Path Prefab"});
            InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "ThrowedObjectPrefab", Caption = "Throwed Object Prefab"});
            // InspectorTools.PropertyField(serializedObject, "ProjectileBeamPrefab", "Projectile Beam Prefab");
            // InspectorTools.PropertyField(serializedObject, "ThrowPathPrefab", "Throw Path Prefab");
            // InspectorTools.PropertyField(serializedObject, "ThrowedObjectPrefab", "Throwed Object Prefab");
            
            EditorGUILayout.Space(15);
            EditorGUILayout.LabelField("Hands", EditorStyles.boldLabel);
            EditorGUILayout.Space(5);
            InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "RightMuzzle", Caption = "Right Muzzle", Hint = "Default Muzzle Side is Right" });
            InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "LeftMuzzle", Caption = "Left Muzzle"});
            // InspectorTools.PropertyField(serializedObject, "RightMuzzle", "Right Muzzle", "Default Muzzle Side is Right");
            // InspectorTools.PropertyField(serializedObject, "LeftMuzzle", "Left Muzzle");



            serializedObject.ApplyModifiedProperties();
            
            InspectorTools.EndContent();
        }

        
    }
}


#endif
