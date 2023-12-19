using UnityEngine;

namespace DefaultNamespace
{
    public class Particles : MonoBehaviour
    {

        [SerializeField] CustomToggle customToggle; 

        [Space(18)]
        [Header("Debug")]
        [SerializeField] bool isActive;
        
        void Awake()
        {
            SettingsManager.ShareSettingsData += OnUpdateData;
            
        }

        void OnDestroy()
        {
            SettingsManager.ShareSettingsData -= OnUpdateData;
        }
        
        void OnUpdateData(SettingsData data)
        {
            isActive = data.ParticlesActive;
            OnDataChanged();
        }
        
        public void ParticleDataChange(bool value)
        {
            isActive = value;

            ShareData();

            OnDataChanged();
        }
        
        void ShareData()
        {
            SettingsData data = SettingsManager.Instance.SettingsData;

            data.ParticlesActive = isActive;
        
            SettingsManager.UpdateSettingsData(data);
        }
        
        
        void OnDataChanged()
        {   
            customToggle.IsOn = isActive;

            Debug.Log($"{isActive}");

        }
    }
    
}
