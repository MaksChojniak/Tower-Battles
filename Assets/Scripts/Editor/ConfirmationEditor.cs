#if UNITY_EDITOR

using System.Linq;
using MMK.ScriptableObjects;
using UI;
using UI.Battlepass;
using UnityEditor;
using UnityEngine;

namespace Editor
{

    [CustomEditor(typeof(Confirmation))]
    public class ConfirmationEditor : UnityEditor.Editor
    {

        Confirmation _target;

        public override void OnInspectorGUI()
        {
            serializedObject.Update();

            EditorGUILayout.Space();

            _target = (Confirmation)target;
            
            InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "Type", Caption = "Type"});


            EditorGUILayout.Space(18);
            
            EditorGUILayout.LabelField("Properties UI", EditorStyles.boldLabel);
            InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "ContentText", Caption = "Content Text"});
            
            EditorGUILayout.Space();
            
            
            switch (_target.Type)
            {
                case ConfirmationItemType.Tower:
                    InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "RotateableTower", Caption = "Rotateable Tower"});
                    break;
                case ConfirmationItemType.Skin:
                    InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "RotateableTower", Caption = "Rotateable Tower"});
                    break;
                case ConfirmationItemType.Offert:
                    break;
            }

            
            EditorGUILayout.Space(8);
            
            InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "OutsideButton", Caption = "Outside Button"});
            InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "DeclineButton", Caption = "Decline Button"});
            InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "AcceptButton", Caption = "Accept Button"});

            
            EditorGUILayout.Space(16);
            EditorGUILayout.LabelField("Animations UI", EditorStyles.boldLabel);
            
            InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "StartLoadingAnimationUI", Caption = "Start Loading Animation UI"});
            InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "EndLoadingAnimationUI", Caption = "End Loading Animation UI"});
            InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "OpenPanelAnimationUI", Caption = "Open Panel Animation UI"});
            InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "ClosePanelAnimationUI", Caption = "Close Panel Animation UI"});
            
            

            serializedObject.ApplyModifiedProperties();

            InspectorTools.EndContent();
        }


    }
    
    
    
}



#endif