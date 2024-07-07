#if UNITY_EDITOR

using System.Linq;
using MMK;
using MMK.ScriptableObjects;
using UnityEditor;

namespace Editor
{
    
    [CustomEditor(typeof(GameSettings)), CanEditMultipleObjects]
    public class GameSettingsEditor : UnityEditor.Editor
    {
        
        
        bool showGlobalSettings = false;
        bool showIconSettings = false;
        bool showColorSettings = false;
        bool showAudioSettings = false;
        
        
        public override void OnInspectorGUI() 
        {
            serializedObject.Update();
            
            
            
            // Global Settings
            EditorGUILayout.Space();
            
            showGlobalSettings = EditorGUILayout.Foldout(showGlobalSettings, "Global Settings");
            if (showGlobalSettings)
            {
                InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "MaxTowersCount", Caption = "Max Towers Count"});
                InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "MaxUpgradeLevel", Caption = "Max Upgrade Level"});
            }
            
            
            
            // Icon Settings
            EditorGUILayout.Space();
            
            showIconSettings = EditorGUILayout.Foldout(showIconSettings, "Icon Settings");
            if (showIconSettings)
            {
                InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "CashIconName", Caption = "Cash Icon Name"});
                InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "CoinsIconName", Caption = "Coins Icon Name"});
                InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "HeartIconName", Caption = "Heart Icon Name"});
                InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "FirerateIconName", Caption = "Firerate Icon Name"});
                InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "RadarIconName", Caption = "Radar Icon Name"});
                InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "HiddenIconName", Caption = "Hidden Icon Name"});
                InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "DamageIconName", Caption = "Damage Icon Name"});
                InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "ExclamationIconName", Caption = "Exclamation Icon Name"});
                InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "ArrowRightIconName", Caption = "Arrow Right Icon Name"});
                InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "CheckedIconName", Caption = "Checked Icon Name"});
                InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "UncheckedIconName", Caption = "Unchecked Icon Name"});
                InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "DiscordIconName", Caption = "Discord Icon Name"});
            }
            
            
            
            // Color Settings
            EditorGUILayout.Space();
            
            showColorSettings = EditorGUILayout.Foldout(showColorSettings, "Color Settings");
            if (showColorSettings)
            {
                InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "NormalColor", Caption = "Normal Color"});
                InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "NextValueColor", Caption = "Next Value Color"});
                InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "CashColor", Caption = "Cash Color"});
                InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "CoinsColor", Caption = "Coins Color"});
                InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "TrophyColor", Caption = "Trophy Color"});
                InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "LosesColor", Caption = "Loses Color"});
                InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "TargettingButtonBaseColor", Caption = "Targetting Button Base Color"});
                InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "TargettingButtonSelectedColor", Caption = "Targetting Button Selected Color"});
                InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "MaxedOutColor", Caption = "Maxed Out Color"});
            }
            
            
            
            // Audio Settings
            EditorGUILayout.Space();
            
            showAudioSettings = EditorGUILayout.Foldout(showAudioSettings, "Audio Settings");
            if (showAudioSettings)
            {
                InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "ButtonAudioClip", Caption = "Button Audio Clip"});
            }
            

            
            
            serializedObject.ApplyModifiedProperties();
            
            InspectorTools.EndContent();
        }

        
        
            
        
    }
    
    
}



#endif