#if UNITY_EDITOR

using System.Linq;
using MMK;
using MMK.ScriptableObjects;
using MMK.Settings;
using UnityEditor;
using UnityEngine;

namespace Editor
{
    
    [CustomEditor(typeof(GlobalSettings))]
    public class GlobaSettingsEditor : UnityEditor.Editor
    {

        GlobalSettings _target;
        
        
        bool showGlobalSettings = false;
        bool showIconSettings = false;
        bool showColorSettings = false;
        bool showAudioSettings = false;
        bool showScenesSettings = false;
        bool showFontsSettings = false;
        bool showLanguageSettings = false;

        
        
        public override void OnInspectorGUI() 
        {
            serializedObject.Update();

            _target = (GlobalSettings)target;
            

#region Global Settings

            // Global Settings
            EditorGUILayout.Space();
            
            showGlobalSettings = EditorGUILayout.Foldout(showGlobalSettings, "Global Settings");
            if (showGlobalSettings)
            {
                GUI.enabled = false;
                InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "MaxTowersCount", Caption = "Max Towers Count"});
                InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "MaxUpgradeLevel", Caption = "Max Upgrade Level"});
                GUI.enabled = true;
            }
            
#endregion


            
#region Icons Settings

            // Icon Settings
            EditorGUILayout.Space();
            
            showIconSettings = EditorGUILayout.Foldout(showIconSettings, "Icon Settings");
            if (showIconSettings)
            {
                GUI.enabled = false;
                InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "CashIconName", Caption = "Cash Icon Name"});
                InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "CoinsIconName", Caption = "Coins Icon Name"});
                InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "GemsIconName", Caption = "Gems Icon Name"});
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
                GUI.enabled = true;
            }
            
#endregion


            
#region Colors Settings

            // Color Settings
            EditorGUILayout.Space();
            
            showColorSettings = EditorGUILayout.Foldout(showColorSettings, "Color Settings");
            if (showColorSettings)
            {
                InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "NormalColor", Caption = "Normal Color"});
                
                EditorGUILayout.Space();
                
                InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "NextValueColor", Caption = "Next Value Color"});
                
                EditorGUILayout.Space();
                
                InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "CashColor", Caption = "Cash Color"});
                InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "CoinsColor", Caption = "Coins Color"});
                
                EditorGUILayout.Space();
                
                InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "TrophyColor", Caption = "Trophy Color"});
                InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "LosesColor", Caption = "Loses Color"});
                
                EditorGUILayout.Space();
                
                InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "TargettingButtonBaseColor", Caption = "Targetting Button Base Color"});
                InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "TargettingButtonSelectedColor", Caption = "Targetting Button Selected Color"});
                
                EditorGUILayout.Space();
                
                InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "MaxedOutColor", Caption = "Maxed Out Color"});
                
                EditorGUILayout.Space();
                
                InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "LockedColor", Caption = "Locked Color"});
                InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "SelectedColor", Caption = "Selected Color"});
                InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "UnselectedColor", Caption = "Unselected Color"});
                
                EditorGUILayout.Space();
                
                InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "CommonColor", Caption = "Common Rarity Color"});
                InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "RareColor", Caption = "Rare Rarity Color"});
                InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "EpicColor", Caption = " Epic Rarity Color"});
                InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "ExclusiveColor", Caption = "Exclusive Rarity Color"});
            }
            
  #endregion

            
            
#region Audio Settings

            // Audio Settings
            EditorGUILayout.Space();
            
            showAudioSettings = EditorGUILayout.Foldout(showAudioSettings, "Audio Settings");
            if (showAudioSettings)
            {
                InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "ButtonAudioClip", Caption = "Button Audio Clip"});
            }
            
#endregion


            
#region Scenes Settings

            // Scenes Settings
            EditorGUILayout.Space();
            
            showScenesSettings = EditorGUILayout.Foldout(showScenesSettings, "Scenes Settings");
            if (showScenesSettings)
            {
                GUI.enabled = false;
                InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "loadingScene", Caption = "Loading Scene Index"});
                InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "mainMenuScene", Caption = "Main Menu Scene Index"});
                InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "vetoScene", Caption = "Veto Scene Index"});
                InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "gameScenes", Caption = "Game Scenes Indexes"});
                GUI.enabled = true;
            }
            
#endregion



#region Fonts Settings

            // Audio Settings
            EditorGUILayout.Space();
            
            showFontsSettings = EditorGUILayout.Foldout(showFontsSettings, "Fonts Settings");
            if (showFontsSettings)
            {
                InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "FontAssets", Caption = "Font Assets"});
            }
            
#endregion
 

            
#region Language Settings

            // Audio Settings
            EditorGUILayout.Space();
            
            showLanguageSettings = EditorGUILayout.Foldout(showLanguageSettings, "Language Settings");
            if (showLanguageSettings)
            {
                GUI.enabled = false;
                for (int i = 0; i < _target.Languages.Count; i++)
                {
                    EditorGUILayout.BeginHorizontal();
                    
                    float fieldWidth = ( EditorGUIUtility.currentViewWidth * 0.9f ) / 2;
                    
                    LanguageType key = _target.Languages.Keys.ToList()[i];
                    string value = _target.Languages[key];

                    EditorGUILayout.LabelField($"{key}", $"{value}", GUILayout.Width(fieldWidth) );
                    
                    EditorGUILayout.EndHorizontal();
                }
                GUI.enabled = true;
            }
            
#endregion



#region Towers Settings

            // Towers Settings
            EditorGUILayout.Space();
            
            InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "Towers", Caption = "Towers Settings"});
            
#endregion


            
            serializedObject.ApplyModifiedProperties();
            
            InspectorTools.EndContent();
        }

        
        
            
        
    }
    
    
}



#endif