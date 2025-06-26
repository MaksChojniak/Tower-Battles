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
        public void StopAnimation()
        {
            _animator.Play(animationName, 0, 0f);
        }

        public async Task WaitAsync()
        {
            while (IsPlaying)
                await Task.Yield();
        }
        public IEnumerator Wait()
        {
            while (IsPlaying)
                yield return null;
        }

        public bool IsPlaying { get => _animator != null ? _animator.IsPlaying() : false; }
        
    }




    public static class AnimationExtension
    {

        public static bool IsPlaying(this Animator animator, int layerIndex = 0)
        {
            AnimatorStateInfo stateInfo = animator.GetCurrentAnimatorStateInfo(layerIndex);

            return Mathf.Abs(1 - stateInfo.normalizedTime) > 0.05f;
        }

        static float Time(this Animator animator, int layerIndex = 0)
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
