using System;
using UnityEngine;

namespace MMK
{
    
    
    [Serializable]
    public class AudioData
    {
        public AudioClip AudioClip;
        [HideInInspector] public AudioSource AudioSource;
        
        public void SetupAudio(Transform audioParent)
        {
            if (AudioClip == null)
                throw new NullReferenceException("Audio Clip is epmty");
            
            string name = AudioClip.name;

            for (int i = 0; i < audioParent.childCount; i++)
            {
                if (audioParent.GetChild(i).name.Contains(name))
                {
                    Debug.LogWarning("audio source exist");
                    return;
                }
            }

            AudioSource = new GameObject($"{name} Audio Source").AddComponent<AudioSource>();
            AudioSource.transform.SetParent(audioParent);

            AudioSource.clip = AudioClip;

        }
        
        
    }
    
    
}
