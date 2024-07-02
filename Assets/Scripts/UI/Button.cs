using System;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

namespace MMK.UI
{
    [AddComponentMenu("Extended Button")]
    public class Button : UnityEngine.UI.Button
    {
        public AudioClip audioClip;


 
        protected override void Awake()
        {
            base.Awake();

            // onClick.AddListener(OnPress);
        }

        protected override void OnDestroy()
        {
            // onClick.RemoveListener(OnPress);
            
            base.OnDestroy();
        }

        
        // protected override void Start()
        // {
        //     base.Start();
        //
        //     audioClip = GameSettingsManager.GetGameSettings().ButtonAudioClip;
        // }




        // void OnPress()
        // {
        //     if (audioClip == null)
        //         throw new NullReferenceException($"Audio Clip is null [Button] name: {this.name}");
        //         
        //     AudioManager.PlayAudio(audioClip, AudioType.UI);
        //
        // }


    }
}
