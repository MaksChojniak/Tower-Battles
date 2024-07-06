using System;
using MMK.Towers;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace Towers
{
    public class TowerLevel : MonoBehaviour
    {
        public delegate void SetActiveDelegate(bool State);
        public SetActiveDelegate SetActive;
        
        
        [SerializeField] GameObject LevelTextObject;

        Image LevelTextImage => LevelTextObject.transform.GetChild(0).GetComponent<Image>();
        TMP_Text LevelText => LevelTextImage.transform.GetChild(0).GetComponent<TMP_Text>();

        
        public TowerController TowerController { private set; get; }


        void Awake()
        {
            TowerController = this.GetComponent<TowerController>();
            
            RegisterHandlers();
            
        }

        void OnDestroy()
        {
            UnregisterHandlers();
            
        }


        
#region Register & Unregister Handlers

        void RegisterHandlers()
        {
            SetActive += OnSetActive;

            TowerController.OnLevelUp += OnUpdateText;

        }

        void UnregisterHandlers()
        {
            TowerController.OnLevelUp -= OnUpdateText;
            
            SetActive -= OnSetActive;
            
        }

#endregion

        void OnSetActive(bool state)
        {
            LevelTextObject.gameObject.SetActive(state);
        }

        
        void OnUpdateText()
        {
            SetActive(true);
            
            LevelText.text = $"Lvl {TowerController.GetLevel() + 1}";
        }
        
        
    }
}
