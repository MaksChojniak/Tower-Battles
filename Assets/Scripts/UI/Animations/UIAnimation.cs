using System;
using System.Collections;
using System.Linq;
using System.Threading;
using System.Threading.Tasks;
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

        public async Task WaitAsync()
        {
            while(IsPlaying)
                await Task.Yield();
        }
        public IEnumerator Wait()
        {
            while (IsPlaying)
                yield return null;
        }

        public bool IsPlaying { get => _animator != null ? Mathf.Abs(_animator.Time() - animationLenght) > 0.1f : false; }
        
    }




    public static class AnimationExtension
    {
        public static float Time(this Animator animator, int layerIndex = 0)
        {
            AnimatorStateInfo stateInfo = animator.GetCurrentAnimatorStateInfo(layerIndex);
            AnimatorClipInfo[] clipsInfo = animator.GetCurrentAnimatorClipInfo(layerIndex);
            if (clipsInfo.Length <= 0)
                return 0;
            AnimatorClipInfo clipInfo = clipsInfo[0];
            AnimationClip clip = clipInfo.clip;

            return stateInfo.normalizedTime * clip.length;
        }

    }

}
