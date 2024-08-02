#if UNITY_EDITOR

using System;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;


namespace Editor
{
    public static class InspectorTools
    {
        private static float _mLabelWidth;
        private static float _mMinLabelWidth;

        public static void BeginContent(float minLabelWidth = 0.0f)
        {
            _mLabelWidth = EditorGUIUtility.labelWidth;
            _mMinLabelWidth = minLabelWidth;
            ResetMinLabelWidth();
        }

        public static void EndContent()
        {
            EditorGUIUtility.labelWidth = _mLabelWidth;
        }

        public static void SetMinLabelWidth(float minLabelWidth = 0.0f)
        {
            EditorGUIUtility.labelWidth = Mathf.Max(EditorGUIUtility.currentViewWidth * 0.4f, minLabelWidth);
        }

        public static void ResetMinLabelWidth()
        {
            EditorGUIUtility.labelWidth = Mathf.Max(EditorGUIUtility.currentViewWidth * 0.4f, _mMinLabelWidth);
        }

        public static void InfoLabel(string label, string text, string hint = null)
        {
            Color currentCol = GUI.contentColor;

            GUI.contentColor = Color.white * 0.8f;

            if (hint is null)
                EditorGUILayout.LabelField(label, text);
            else
                EditorGUILayout.LabelField(new GUIContent(label, hint), new GUIContent(text));

            GUI.contentColor = currentCol;
        }

        public static SerializedProperty PropertyField(PropertFieldData propertFieldData)
        {
            SerializedProperty property = propertFieldData.Property ?? propertFieldData.SerializedObject.FindProperty(propertFieldData.PropertyName);

            if (!string.IsNullOrEmpty(propertFieldData.Caption))
            {
                if (!string.IsNullOrEmpty(propertFieldData.Hint) && propertFieldData.Width > 0)
                    EditorGUILayout.PropertyField(property, new GUIContent(propertFieldData.Caption, propertFieldData.Hint), GUILayout.Width(propertFieldData.Width) );
                else if (propertFieldData.Width > 0 )
                    EditorGUILayout.PropertyField(property, new GUIContent(propertFieldData.Caption), GUILayout.Width(propertFieldData.Width) );
                else if (!string.IsNullOrEmpty(propertFieldData.Hint) )
                    EditorGUILayout.PropertyField(property, new GUIContent(propertFieldData.Caption, propertFieldData.Hint) );
                else
                    EditorGUILayout.PropertyField(property, new GUIContent(propertFieldData.Caption) );
            }
            else
            {
                EditorGUILayout.PropertyField(property, GUIContent.none);
            }
            
            // GUILayout.Width(propertFieldData.Width)

            return property;
        }

        // Convenience methods for a Editor Layout Foldout that respond to clicks on the text also,
        // not only at the fold arrow.
        public static bool LayoutFoldout(bool foldout, string content, string hint)
        {
            Rect rect = EditorGUILayout.GetControlRect();
            return EditorGUI.Foldout(rect, foldout, new GUIContent(content, hint), true);
        }

        public static bool LayoutFoldout(bool foldout, string content)
        {
            Rect rect = EditorGUILayout.GetControlRect();
            return EditorGUI.Foldout(rect, foldout, content, true);
        }
        
        
        
        public static void DrawUpgradableProperties(SerializedObject serializedObject, string propertName = "", string headerName = "", int propertiesCount = 5)
        {
            EditorGUILayout.Space();
            EditorGUILayout.LabelField(headerName);

            EditorGUILayout.BeginHorizontal();

            float fieldWidth = ( EditorGUIUtility.currentViewWidth * 0.9f ) / propertiesCount;
            SerializedProperty array = serializedObject.FindProperty(propertName);
            array.arraySize = propertiesCount;
            
            for(int i = 0; i < array.arraySize; i++)
            {

                if (array.arrayElementType == GetAliasTypeName(typeof(bool)))
                {
                    SerializedProperty boolProperty = array.GetArrayElementAtIndex(i);
                    Rect boolRect = GUILayoutUtility.GetRect(fieldWidth, EditorGUIUtility.singleLineHeight);
                    boolProperty.boolValue = EditorGUI.Toggle(new Rect(boolRect.x, boolRect.y, 50, boolRect.height), boolProperty.boolValue);
                    // boolProperty.boolValue = EditorGUILayout.Toggle(boolProperty.boolValue, GUILayout.Width(fieldWidth) );
                }
                else
                {
                    InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, Property = array.GetArrayElementAtIndex(i), Width = fieldWidth});
                }
            }

            EditorGUILayout.EndHorizontal();
            
        }
        
        
        
        
        
        public static void DrawHorizontalArrayProperties(SerializedObject serializedObject, string propertName = "", string headerName = "", int propertiesCount = 0 )
        {
            EditorGUILayout.Space();
            EditorGUILayout.LabelField(headerName);

            EditorGUILayout.BeginHorizontal();

            float fieldWidth = ( EditorGUIUtility.currentViewWidth * 0.9f ) / propertiesCount;
            SerializedProperty array = serializedObject.FindProperty(propertName);
            array.arraySize = propertiesCount;
            
            for(int i = 0; i < array.arraySize; i++)
            {

                if (array.arrayElementType == GetAliasTypeName(typeof(bool)))
                {
                    SerializedProperty boolProperty = array.GetArrayElementAtIndex(i);
                    Rect boolRect = GUILayoutUtility.GetRect(fieldWidth, EditorGUIUtility.singleLineHeight);
                    boolProperty.boolValue = EditorGUI.Toggle(new Rect(boolRect.x, boolRect.y, 50, boolRect.height), boolProperty.boolValue);
                    // boolProperty.boolValue = EditorGUILayout.Toggle(boolProperty.boolValue, GUILayout.Width(fieldWidth) );
                }
                else
                {
                    InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, Property = array.GetArrayElementAtIndex(i), Width = fieldWidth});
                }
            }

            EditorGUILayout.EndHorizontal();
            
        }
        
        
        
        
        
        
        static string GetAliasTypeName(Type type)
        {
            var aliasDictionary = new Dictionary<Type, string>
            {
                { typeof(bool), "bool" },
                { typeof(byte), "byte" },
                { typeof(sbyte), "sbyte" },
                { typeof(char), "char" },
                { typeof(decimal), "decimal" },
                { typeof(double), "double" },
                { typeof(float), "float" },
                { typeof(int), "int" },
                { typeof(uint), "uint" },
                { typeof(long), "long" },
                { typeof(ulong), "ulong" },
                { typeof(object), "object" },
                { typeof(short), "short" },
                { typeof(ushort), "ushort" },
                { typeof(string), "string" }
            };

            return aliasDictionary.TryGetValue(type, out string alias) ? alias : type.Name;
        }
        
    }
    
    
    
    
    
}



#endif
