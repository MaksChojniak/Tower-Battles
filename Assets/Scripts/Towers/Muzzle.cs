using System;
using UnityEngine;

namespace MMK.Towers
{
    public enum Side
    {
        Right,
        Left
    }
    
    public class Muzzle : MonoBehaviour
    {
        public Side Side;

        const string LEFT_MUZZLE_NAME = "Left Muzzle";
        const string RIGHT_MUZZLE_NAME = "Right Muzzle";
        

#if UNITY_EDITOR
        void OnValidate()
        {
            UpdateMuzzleName();

        }
#endif

        void Start()
        {
            UpdateMuzzleName();

        }

        void UpdateMuzzleName()
        {
            this.gameObject.name = Side == Side.Right ? RIGHT_MUZZLE_NAME : LEFT_MUZZLE_NAME;

        }

    }
}
