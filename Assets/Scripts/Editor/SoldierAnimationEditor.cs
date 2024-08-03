#if UNITY_EDITOR

using System;
using MMK.ScriptableObjects;
using MMK.Towers;
using Towers;
using UnityEditor;


namespace Editor
{
    
    [CustomEditor(typeof(SoldierAnimation))]
    public class SoldierAnimationEditor : UnityEditor.Editor
    {
        SoldierAnimation _target;
        SoldierController controller;

        
        public override void OnInspectorGUI()
        {
            serializedObject.Update();

            _target = (SoldierAnimation)target;
            controller = _target.GetComponent<SoldierController>();
            

            EditorGUILayout.Space();
            EditorGUILayout.LabelField("Animation Controllers", EditorStyles.boldLabel);
            EditorGUILayout.Space(5);
            InspectorTools.DrawUpgradableProperties(serializedObject, "AnimationControllers", "Animation Controllers");
            
            EditorGUILayout.Space();
            EditorGUILayout.LabelField("Animation Clips", EditorStyles.boldLabel);
            EditorGUILayout.Space(5);
            InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "LevelUpClip", Caption = "LevelUp Clip"});
            InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "RemoveTowerClip", Caption = "Remove Tower Clip"});
            // InspectorTools.PropertyField(serializedObject, "LevelUpClip", "LevelUp Clip");
            // InspectorTools.PropertyField(serializedObject, "RemoveTowerClip", "Remove Tower Clip");
            // InspectorTools.PropertyField(serializedObject, "ShootAnimationClip", "Shoot Clip");

            
            EditorGUILayout.Space(15);
            EditorGUILayout.LabelField("Prefabs for bullet & throw animations", EditorStyles.boldLabel);
            EditorGUILayout.Space(5);

            // new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "FireStreamPrefabs", Caption = "Fire Stream Prefab"}
            // InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "ProjectileBeamPrefabs", Caption = "Projectile Beam Prefab"});
            // InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "ThrowPathPrefabs", Caption = "Throw Path Prefab"});
            // InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "ThrowedObjectPrefabs", Caption = "Throwed Object Prefab"});
            // InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "ExplosionPrefabs", Caption = "Explosion Prefab"});

            ShowPrefabs();
            
            // InspectorTools.PropertyField(serializedObject, "ProjectileBeamPrefab", "Projectile Beam Prefab");
            // InspectorTools.PropertyField(serializedObject, "ThrowPathPrefab", "Throw Path Prefab");
            // InspectorTools.PropertyField(serializedObject, "ThrowedObjectPrefab", "Throwed Object Prefab");
            
            EditorGUILayout.Space(15);
            EditorGUILayout.LabelField("Hands", EditorStyles.boldLabel);
            EditorGUILayout.Space(5);
            InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "RightMuzzle", Caption = "Right Muzzle", Hint = "Default Muzzle Side is Right" });
            InspectorTools.PropertyField(new PropertFieldData(){SerializedObject = serializedObject, PropertyName = "LeftMuzzle", Caption = "Left Muzzle"});
            // InspectorTools.PropertyField(serializedObject, "RightMuzzle", "Right Muzzle", "Default Muzzle Side is Right");
            // InspectorTools.PropertyField(serializedObject, "LeftMuzzle", "Left Muzzle");



            serializedObject.ApplyModifiedProperties();
            
            InspectorTools.EndContent();
        }





        void ShowPrefabs()
        {
            bool hasFireStream = false;
            bool hasProjectileBeam = false;
            bool hasExplosion = false;
            bool hasThrowedObject = false;


            foreach (var weapon in controller.SoldierData.UpgradeWeapons)
            {
                if (weapon.DamageType == DamageType.Fire)
                    hasFireStream = true;
                else if (weapon.ShootingType == ShootingType.Shootable)
                    hasProjectileBeam = true;
                else if (weapon.ShootingType == ShootingType.Throwable)
                    hasThrowedObject = true;
                if (weapon.DamageType == DamageType.Splash)
                    hasExplosion = true;
            }
            
            if(hasFireStream)
                InspectorTools.DrawUpgradableProperties(serializedObject, "FireStreamPrefabs", "Fire Stream Prefab");
            if(hasProjectileBeam)
                InspectorTools.DrawUpgradableProperties(serializedObject, "ProjectileBeamPrefabs", "Projectile Beam Prefab");
            if (hasThrowedObject)
            {
                InspectorTools.DrawUpgradableProperties(serializedObject, "ThrowPathPrefabs", "Throw Path Prefab");
                InspectorTools.DrawUpgradableProperties(serializedObject, "ThrowedObjectPrefabs", "Throwed Object Prefab");
            }
            if(hasExplosion)
                InspectorTools.DrawUpgradableProperties(serializedObject, "ExplosionPrefabs", "Explosion Prefab");
        }
        
        
    }
}


#endif
