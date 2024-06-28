#if UNITY_EDITOR

using UnityEditor;

namespace Editor
{
    public class PropertFieldData
    {
        public SerializedProperty Property;
        public SerializedObject SerializedObject;
        public string PropertyName;
        public string Caption = null;
        public float Width = -1;
        public string Hint = null;
    }
}

#endif
