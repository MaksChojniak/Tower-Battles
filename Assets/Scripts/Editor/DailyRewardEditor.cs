#if UNITY_EDITOR

using System;
using MMK.ScriptableObjects;
using MMK.Towers;
using Towers;
using UI.Shop.Daily_Rewards;
using UI.Shop.Daily_Rewards.Scriptable_Objects;
using UnityEditor;


namespace Editor
{
    
    [CustomEditor(typeof(RewardObject))]
    public class DailyRewardEditor : UnityEditor.Editor
    {
        RewardObject _target;

        
        public override void OnInspectorGUI()
        {
            serializedObject.Update();

            _target = (RewardObject)target;
            

            InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "RewardRarity", Caption = "Reward Rarity" });
            InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "RewardType", Caption = "Reward Type" });


            switch (_target.RewardType)
            {
                case RewardType.Coins:
                    InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "Coins", Caption = "Value" });
                    break;
                case RewardType.Experience:
                    InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "Experience", Caption = "Value" });
                    break;
            }


            serializedObject.ApplyModifiedProperties();
            
            InspectorTools.EndContent();
        }

        
        
        
    }
}


#endif
