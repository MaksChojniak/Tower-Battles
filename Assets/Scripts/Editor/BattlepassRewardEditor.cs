#if UNITY_EDITOR

using System.Linq;
using MMK.ScriptableObjects;
using UI.Battlepass;
using UnityEditor;
using UnityEngine;

namespace Editor
{
    
    [CustomEditor(typeof(BattlepassRewards))]
    public class BattlepassRewardEditor : UnityEditor.Editor
    {

        bool showRewards;
        
        BattlepassRewards _target;

        public override void OnInspectorGUI()
        {
            serializedObject.Update();

            EditorGUILayout.Space();

            _target = (BattlepassRewards)target;


            DrawDateProperties();

            EditorGUILayout.Space();

            InspectorTools.PropertyField(new PropertFieldData()
            {
                SerializedObject = serializedObject,
                PropertyName = "DaysDuration",
                Caption = "Days Duration"
            });


            EditorGUILayout.Space(28);

            SerializedProperty elements = serializedObject.FindProperty("rewards");


            // if (elements.isExpanded)
            // {
            // EditorGUI.indentLevel++;

            // EditorGUILayout.BeginHorizontal();
            //
            // showRewards = EditorGUILayout.Foldout(showRewards, "");
            // EditorGUILayout.LabelField("Rewards", EditorStyles.boldLabel);
            //
            // EditorGUILayout.EndHorizontal();
            //
            // if (showRewards)
            // {
                // EditorGUI.indentLevel++;
                
            EditorGUILayout.LabelField("Rewards", EditorStyles.boldLabel);
            
            EditorGUILayout.Space(8);
                
            for (int i = 0; i < elements.arraySize; i++)
            {
                DrawTierProperties(i, elements);
            }
            
            // }
            
            // }


            serializedObject.ApplyModifiedProperties();

            InspectorTools.EndContent();
        }




        void DrawDateProperties()
        {
            int propertiesCount = 4;
            
            EditorGUILayout.LabelField($"Created/Start Date UTC", EditorStyles.boldLabel);
            
            EditorGUILayout.BeginHorizontal();

            float fieldWidth = ( EditorGUIUtility.currentViewWidth * 0.9f ) / propertiesCount;

            for(int i = 0; i < propertiesCount; i++)
            {
                EditorGUILayout.BeginVertical();
                
                string propertyName = "";
                switch (i)
                {
                    case 0:
                        propertyName = "Year";
                        break;
                    case 1:
                        propertyName = "Month";
                        break;
                    case 2:
                        propertyName = "Day";
                        break;
                    case 3:
                        propertyName = "Hour";
                        break;
                }
                
                EditorGUILayout.LabelField( propertyName, GUILayout.Width(fieldWidth) );
                InspectorTools.PropertyField( new PropertFieldData() { SerializedObject = serializedObject, PropertyName = propertyName , Width = fieldWidth } );
                
                
                EditorGUILayout.EndVertical();
            }

            EditorGUILayout.EndHorizontal();
        }

        
        private Texture2D MakeTex(int width, int height, Color col)
        {
            Color[] pix = new Color[width * height];

            for (int i = 0; i < pix.Length; i++)
                pix[i] = col;

            Texture2D result = new Texture2D(width, height);
            result.SetPixels(pix);
            result.Apply();

            return result;
        }


        void DrawTierProperties(int index, SerializedProperty elements)
        {
            GUIStyle coloredBoxStyle = new GUIStyle(GUI.skin.box);
            coloredBoxStyle.normal.background = MakeTex(2, 2, new Color(40/255f, 40/255f, 40/255f));
            EditorGUILayout.BeginVertical(coloredBoxStyle);
            
            EditorGUILayout.LabelField($"Tier {index+1}", EditorStyles.boldLabel);
                    
            SerializedProperty element = elements.GetArrayElementAtIndex(index);
            SerializedProperty typeProperty = element.FindPropertyRelative("Type");

            EditorGUILayout.PropertyField(typeProperty);

            switch ((RewardType)typeProperty.enumValueIndex)
            {
                case RewardType.Coins:
                    InspectorTools.PropertyField(new PropertFieldData() {Property = element.FindPropertyRelative("Coins"), Caption = $"Coins"});
                    break;
                case RewardType.Coins_Gems:
                    InspectorTools.PropertyField(new PropertFieldData() {Property = element.FindPropertyRelative("Coins"), Caption = $"Coins"});
                    InspectorTools.PropertyField(new PropertFieldData() {Property = element.FindPropertyRelative("Gems"), Caption = $"Gems"});
                    break;
                case RewardType.Coins_Skin:
                    InspectorTools.PropertyField(new PropertFieldData() {Property = element.FindPropertyRelative("Coins"), Caption = $"Coins"});
                    InspectorTools.PropertyField(new PropertFieldData() {Property = element.FindPropertyRelative("Skin"), Caption = $"Skin"});
                    break;
                case RewardType.Gems:
                    InspectorTools.PropertyField(new PropertFieldData() {Property = element.FindPropertyRelative("Gems"), Caption = $"Gems"});
                    break;
                case RewardType.Gems_Skin:
                    InspectorTools.PropertyField(new PropertFieldData() {Property = element.FindPropertyRelative("Gems"), Caption = $"Gems"});
                    InspectorTools.PropertyField(new PropertFieldData() {Property = element.FindPropertyRelative("Skin"), Caption = $"Skin"});
                    break;
                case RewardType.Skin:
                    InspectorTools.PropertyField(new PropertFieldData() {Property = element.FindPropertyRelative("Skin"), Caption = $"Skin"});
                    break;
                case RewardType.Coins_Gems_Skin:
                    InspectorTools.PropertyField(new PropertFieldData() {Property = element.FindPropertyRelative("Coins"), Caption = $"Coins"});
                    InspectorTools.PropertyField(new PropertFieldData() {Property = element.FindPropertyRelative("Gems"), Caption = $"Gems"});
                    InspectorTools.PropertyField(new PropertFieldData() {Property = element.FindPropertyRelative("Skin"), Caption = $"Skin"});
                    break;
                case RewardType.None: 
                    EditorGUILayout.LabelField("None"); 
                    break;
            }

            EditorGUILayout.EndVertical();

            EditorGUILayout.Space(10);

        }
        
        


    }
    
    
}



#endif