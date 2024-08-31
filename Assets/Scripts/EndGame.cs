using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using TMPro;
using UnityEngine;

namespace Assets.Scripts
{
    public class EndGame : MonoBehaviour
    {

        [SerializeField] GameObject VicotryEndPanel;
        [SerializeField] GameObject LoseEndPanel;

        private void Awake()
        {
            // GamePlayerInformation.EndGame += UpdateUI;
        }

        private void OnDestroy()
        {
            // GamePlayerInformation.EndGame -= UpdateUI;
        }


        void UpdateUI(bool state)
        {

            if (state)
            {
                VicotryEndPanel.SetActive(true);
            }
            else
            {
                LoseEndPanel.SetActive(true);
            }
        }
    }
}
