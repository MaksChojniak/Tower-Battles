#if UNITY_EDITOR

using UnityEditor;


namespace Editor
{
    
    [CustomEditor(typeof(MMK.UI.Button))]
    public class ButtonEditor : UnityEditor.UI.ButtonEditor
    {

        public override void OnInspectorGUI()
        {
            serializedObject.Update();
            
            // InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "audioClip", Caption = "Audio Clip"});
            // InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "audioSource", Caption = "Audio Source"});

            EditorGUILayout.Space();
            
            serializedObject.ApplyModifiedProperties();
            
            
            base.OnInspectorGUI();

        }


    }
    
}


#endif
