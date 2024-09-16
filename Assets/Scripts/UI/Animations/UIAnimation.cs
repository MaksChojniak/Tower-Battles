using System;
using System.Threading;
using UnityEngine;

namespace UI.Animations
{
    
    
    public class UIAnimation : MonoBehaviour
    {
        [SerializeField] AnimationClip Animation;
        
        [SerializeField] bool IsReversed;
        
        
        
        Animator _animator;
        public string animationName { private set; get; }
        public float animationLenght  { private set; get; }

        
        void Awake()
        {
            if (!this.transform.root.TryGetComponent<Animator>(out _animator))
                throw new Exception($"root doesn't have Animator Component");

            animationName = Animation.name;
            animationLenght = Animation.length;
        }

        void OnDestroy()
        {
            
        }






        public void PlayAnimation()
        {
            string directionText = IsReversed ? "_Reversed" : "";

            _animator.Play(animationName + directionText);
        }
        
        
    }
}
