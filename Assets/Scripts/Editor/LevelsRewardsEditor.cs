#if UNITY_EDITOR

using MMK;
using MMK.ScriptableObjects;
using UI;
using UnityEditor;
using UnityEngine;

namespace Editor
{
    [CustomEditor(typeof(LevelsRewards))]
    public class LevelsRewardsEditors : UnityEditor.Editor
    {
        LevelsRewards _target;
        
        public override void OnInspectorGUI()
        { 
            serializedObject.Update();

            
            _target = (LevelsRewards)target;

            
            EditorGUILayout.Space();
            
            EditorGUILayout.LabelField("Rewards", EditorStyles.boldLabel);

            EditorGUILayout.Space(8);
                
                
            InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "EditMode", Caption = "EditMode"});
            
            
            SerializedProperty rewards = serializedObject.FindProperty("Rewards");
            
            GUI.enabled = _target.EditMode;
            for (int i = 0; i < rewards.arraySize; i++)
            {
                GUIStyle coloredBoxStyle = new GUIStyle(GUI.skin.box);
                coloredBoxStyle.normal.background = MakeTexture(2, 2, new Color(40/255f, 40/255f, 40/255f));
                EditorGUILayout.BeginVertical(coloredBoxStyle);

                SerializedProperty element = rewards.GetArrayElementAtIndex(i);
                
                // EditorGUILayout.LabelField($"Level {_target.Rewards[i].Level}", EditorStyles.boldLabel);
           
                InspectorTools.PropertyField(new PropertFieldData() {Property = element.FindPropertyRelative("Level"), Caption = $"Level"});
                
                
                EditorGUILayout.LabelField($"Rewards: ");

                EditorGUILayout.BeginHorizontal();
                GUI.color = GlobalSettings.Color("#FFB700");
                if(_target.EditMode || _target.Rewards[i].CoinsRewards > 0)
                    InspectorTools.PropertyField(new PropertFieldData() {Property = element.FindPropertyRelative("CoinsRewards"), Caption = $"Coins"});
                GUI.color = GlobalSettings.Color("#FF99FD");
                if(_target.EditMode || _target.Rewards[i].GemsRewards > 0)
                    InspectorTools.PropertyField(new PropertFieldData() {Property = element.FindPropertyRelative("GemsRewards"), Caption = $"Gems"});
                EditorGUILayout.EndHorizontal();;
                GUI.color = Color.white;

                EditorGUILayout.EndVertical();

                EditorGUILayout.Space(10);
                
            }
            GUI.enabled = true;
            
            
            serializedObject.ApplyModifiedProperties();
            
            InspectorTools.EndContent();
        }
        
        
        
        private Texture2D MakeTexture(int width, int height, Color col)
        {
            Color[] pix = new Color[width * height];

            for (int i = 0; i < pix.Length; i++)
                pix[i] = col;

            Texture2D result = new Texture2D(width, height);
            result.SetPixels(pix);
            result.Apply();

            return result;
        }
        
        
        
    }
}

#endif
