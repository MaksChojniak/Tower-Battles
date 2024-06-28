using System;
using System.Collections;
using UnityEngine;

namespace MMK.Extensions
{
    public static class MonoBehaviourExtension 
    {
        
        /// <summary>
        /// Invoke delayed Action on a given MonoBehavior
        /// </summary>
        /// <param name="monoBehaviour">Object on which you call this void</param>
        /// <param name="action">Action to Invoke</param>
        /// <param name="delay">Delay value in seconds</param>
        public static void Invoke(this MonoBehaviour monoBehaviour, Action action, float delay = 0)
        {

            monoBehaviour.StartCoroutine(Invoke_Delayed(action, delay));
        }
        static IEnumerator Invoke_Delayed(Action action, float delay)
        {
            yield return new WaitForSeconds(delay);
            
            action.Invoke();
        }
        
    }
}
