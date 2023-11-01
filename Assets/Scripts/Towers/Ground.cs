using System;
using DefaultNamespace.ScriptableObjects;
using UnityEngine;

namespace DefaultNamespace
{
    public class Ground : MonoBehaviour
    {
        public static Action<PlacementType> UpdateGround;
        public static Action OnStopPlacingTower;

        public PlacementType groundType;
        [SerializeField] bool highlighted;

        void Awake()
        {
            OnStopPlacingTower += OnPlaceTower;
            UpdateGround += OnUpdateGround;
        }

        void OnDestroy()
        {
            OnStopPlacingTower -= OnPlaceTower;
            UpdateGround -= OnUpdateGround; 
        }


        void OnUpdateGround(PlacementType towerPlacementType)
        {
            SetGroundHighlightedState(towerPlacementType == groundType);

        }

        void OnPlaceTower()
        {
            SetGroundHighlightedState(false);
        }

        void SetGroundHighlightedState(bool state)
        {
            highlighted = state;
        }
    }
}
