#if UNITY_EDITOR

using System.Linq;
using MMK.ScriptableObjects;
using UnityEditor;

namespace Editor
{
    
    [CustomEditor(typeof(Soldier))]
    public class SoldierEditor : UnityEditor.Editor
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
                //InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, Property = baseProperties.FindPropertyRelative("RequiredWinsCount"), Caption = "Required Wins Count"});
                InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, Property = baseProperties.FindPropertyRelative("IsUnlocked"), Caption = "Is Unlocked"});
            }
            
            
            EditorGUILayout.Space(18);
            
            // EditorGUILayout.LabelField("Upgarde Datas", EditorStyles.boldLabel);
            showUpgrades = EditorGUILayout.Foldout(showUpgrades, "Upgrades");
            if (showUpgrades)
            {
                // base
                // InspectorTools.DrawUpgradableProperties(serializedObject, "UpgradeIcon", "Upgrade Icon");
                InspectorTools.DrawUpgradableProperties(serializedObject, "UpgradePrice", "Upgrade Price (first value is price for tower)");
                // additional
                InspectorTools.DrawUpgradableProperties(serializedObject, "UpgradeWeapons", "Upgrade Weapons");
                InspectorTools.DrawUpgradableProperties(serializedObject, "ViewRanges", "View Ranges");
                InspectorTools.DrawUpgradableProperties(serializedObject, "HasBinoculars", "Has Binoculars");
            }
            


            
            
            serializedObject.ApplyModifiedProperties();
            
            InspectorTools.EndContent();
        }

        
        
            
        
    }
    
    
}



#endif