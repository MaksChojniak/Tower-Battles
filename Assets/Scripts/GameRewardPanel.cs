using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Player;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace Assets.Scripts
{
    public class GameRewardPanel : MonoBehaviour
    {
        public static GameRewardPanel Instance;

        public static Action<bool, int, int, int> OpenRewardPanel;

        [Header("Game Reward")]
        [SerializeField] bool WinTheGame;
        [SerializeField] int MoneyReward;
        [SerializeField] int TrophyReward;
        [SerializeField] int DefeatReward;

        [Header("UI Properties")]
        [SerializeField] GameObject RewardPanel;

        [SerializeField] TMP_Text VictoryTitle;
        [SerializeField] TMP_Text DefeatTitle;


        [SerializeField] TMP_Text MoneyRewardText;

        [SerializeField] TMP_Text TrophyRewardText;

        [SerializeField] TMP_Text DefeatRewardText;

        private void Awake()
        {
            if(Instance != null)
            {
                return;
            }

            Instance = this;

            OpenRewardPanel += OnOpenRewardPanel;
        }


        private void OnDestroy()
        {
            if(Instance == this)
            {
                Instance = null;

                OpenRewardPanel -= OnOpenRewardPanel;
            }
        }


        void OnOpenRewardPanel(bool winTheGame, int moneyReward, int trophyReward, int defeatReward)
        {
            ClearReward();
            ClearUI();

            WinTheGame = winTheGame;
            MoneyReward = moneyReward;
            TrophyReward = trophyReward;
            DefeatReward = defeatReward;

            UpdateUI();

            RewardPanel.SetActive(true);
        }

        void UpdateUI()
        {
            if (WinTheGame)
                VictoryTitle.gameObject.SetActive(true);
            else
                DefeatTitle.gameObject.SetActive(true);

            if (MoneyReward > 0)
            {
                MoneyRewardText.gameObject.SetActive(true);
                MoneyRewardText.text = $"+{MoneyReward} <sprite=0>";
            }

            if (TrophyReward > 0)
            {
                TrophyRewardText.gameObject.SetActive(true);
                TrophyRewardText.text = $"+{TrophyReward} <sprite=0>";
            }

            if (DefeatReward > 0)
            {
                DefeatRewardText.gameObject.SetActive(true);
                DefeatRewardText.text = $"+{DefeatReward} <sprite=0>";
            }
        }


        void ClearUI()
        {
            RewardPanel.SetActive(false);

            VictoryTitle.gameObject.SetActive(false);
            DefeatTitle.gameObject.SetActive(false);

            MoneyRewardText.gameObject.SetActive(false);
            TrophyRewardText.gameObject.SetActive(false);
            DefeatRewardText.gameObject.SetActive(false);

            MoneyRewardText.text = "";
            TrophyRewardText.text = "";
            DefeatRewardText.text = "";

        }


        public void ClaimReward()
        {
            // PlayerTowerInventory.ChangeBalance(MoneyReward);
            PlayerData.ChangeCoinsBalance(MoneyReward);

            // if(TrophyReward > 0)
            //     PlayerTowerInventory.AddWin();
            // if(DefeatReward > 0)
            //     PlayerTowerInventory.AddDefeat();
            PlayerData.AddGameResult(GameResult.Survival);

            ClearReward();
            ClearUI();

            RewardPanel.SetActive(false);
        }

        void ClearReward()
        {
            WinTheGame = false;
            MoneyReward = 0;
            TrophyReward = 0;
            DefeatReward = 0;
        }
    }
}
