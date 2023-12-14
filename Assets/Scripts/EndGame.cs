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
        public static Action<bool> OnEndGame;

        [SerializeField] GameObject WaveManager;
        [SerializeField] GameObject TowerSpawner;

        [SerializeField] GameObject VicotryEndPanel;
        [SerializeField] GameObject LoseEndPanel;

        private void Awake()
        {
            OnEndGame += UpdateUI;
        }

        private void OnDestroy()
        {
            OnEndGame -= UpdateUI;
        }


        void UpdateUI(bool state)
        {
            Destroy(WaveManager);
            Destroy(TowerSpawner);

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
