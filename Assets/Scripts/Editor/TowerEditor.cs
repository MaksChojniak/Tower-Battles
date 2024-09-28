#if UNITY_EDITOR

using MMK.ScriptableObjects;
using UnityEditor;

namespace Editor
{
    
    [CustomEditor(typeof(Tower), true)]
    public class TowerEditor : UnityEditor.Editor
    {
        
    
        bool showBaseProperties = false;
        bool showUpgrades = false;
        
        
        public override void OnInspectorGUI() 
        {
            serializedObject.Update();
            
            
            EditorGUILayout.Space();
            
            InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "ID", Caption = "ID"});
            InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "TowerName", Caption = "Tower Name"});
            
            InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "Rarity", Caption = "Rarity"});
            
            InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "TowerSkins", Caption = "Tower Skins"});
            InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "SkinIndex", Caption = "Skin Index"});
            // InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "TowerSprite", Caption = "Tower Sprite"});
            // InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "TowerPrefab", Caption = "Tower Prefab"});
            
            EditorGUILayout.Space();
            
            InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "PlacementType", Caption = "Placement Type"});
            InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "OriginPointOffset", Caption = "Origin Point Offset"});
            
            EditorGUILayout.Space();
            
            SerializedProperty baseProperties = serializedObject.FindProperty("BaseProperties");
            showBaseProperties = EditorGUILayout.Foldout(showBaseProperties, "Base Properties");
            if (showBaseProperties)
            {
                InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, Property = baseProperties.FindPropertyRelative("UnlockPrice"), Caption = "Unlock Price"});
                InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, Property = baseProperties.FindPropertyRelative("RequiredLevel"), Caption = "Required Level"});
                InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, Property = baseProperties.FindPropertyRelative("IsUnlocked"), Caption = "Is Unlocked"});
            }
            
            
            EditorGUILayout.Space(18);
            
            // EditorGUILayout.LabelField("Upgarde Datas", EditorStyles.boldLabel);
            showUpgrades = EditorGUILayout.Foldout(showUpgrades, "Upgrades");
            if (showUpgrades)
            {
                // InspectorTools.DrawUpgradableProperties(serializedObject, "UpgradeIcon", "Upgrade Icon");
                InspectorTools.DrawUpgradableProperties(serializedObject, "UpgradePrice", "Upgrade Price (first value is price for tower)");
            }
            
    
    
            
            
            serializedObject.ApplyModifiedProperties();
            
            InspectorTools.EndContent();
        }
    
        
        
            
        
    }
    
    
}


#endif
