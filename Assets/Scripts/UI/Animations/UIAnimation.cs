using System;
using UnityEngine;

namespace UI.Animations
{
    
   
    
    public class UIAnimation : MonoBehaviour
    {
        [SerializeField] AnimationClip Animation;
        [SerializeField] bool IsReversed;
        
        
        Animator _animator;


        
        void Awake()
        {

            if (!this.transform.root.TryGetComponent<Animator>(out _animator))
                throw new Exception($"root doesn't have Animator Component");
        }

        void OnDestroy()
        {
            
        }


        public void PlayAnimation()
        {
            string directionText = IsReversed ? "_Reversed" : "";
            
            _animator.Play(Animation.name + directionText);

        }
    }
}
