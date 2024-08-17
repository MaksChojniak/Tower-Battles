#if UNITY_EDITOR

using MMK.ScriptableObjects;
using UnityEditor;

namespace Editor
{
    [CustomEditor(typeof(Enemy))]
    public class EnemyEditor : UnityEditor.Editor
    {

        Enemy _target;
        
        public override void OnInspectorGUI()
        {
            _target = (Enemy)target;
            
            serializedObject.Update();


            EditorGUILayout.Space();
            
            InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "EnemyName", Caption = "Enemy Name"});
            InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "EnemySprite", Caption = "Enemy Sprite"});
            InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "EnemyPrefab", Caption = "Enemy Prefab"});
            
            EditorGUILayout.Space();
            
            InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "Health", Caption = "Health"});
            InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "Speed", Caption = "Speed"});
            InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "IsGhost", Caption = "Is Ghost"});
            
            EditorGUILayout.Space();
            
            InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "CanSpawnAfterDead", Caption = "Can Spawn After Dead"});

            if (_target.CanSpawnAfterDead)
            {
                EditorGUILayout.Space();
                
                InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "EnemiesToSpawn", Caption = "Enemies To Spawn"});
            }
            
            serializedObject.ApplyModifiedProperties();
            
            InspectorTools.EndContent();
        }
        
        
        
    }
}

#endif
