using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using TMPro;
using UnityEngine;

namespace Assets.Scripts
{
    public class TextAutoSizeController : MonoBehaviour
    {
        public TMP_Text[] TextObjects;


        private void Awake()
        {
            TextObjects = GameObject.FindObjectsOfType<TMP_Text>(true);
        }

        IEnumerator Start()
        {
            yield return new WaitForSeconds(5);

            UpdateTMP_Text();
        }


        void UpdateTMP_Text()
        {
            for (int i = 0; i < TextObjects.Length; i++)
            {
                TextObjects[i].enableAutoSizing = true;
                TextObjects[i].ForceMeshUpdate();

                float fontSize = TextObjects[i].fontSize;

                TextObjects[i].enableAutoSizing = false;

                TextObjects[i].fontSize = fontSize;
                //TextObjects[i].ForceMeshUpdate();
            }
        }
    }
}
