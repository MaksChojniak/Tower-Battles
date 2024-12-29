using System;
using System.Threading.Tasks;
using Player;
using UI.Animations;
using UnityEngine;
using UnityEngine.UI;

namespace UI
{
    public class LevelRewardsPreview : MonoBehaviour
    {

        [SerializeField] UIAnimation ClosePanelAnimation;

        [Space]
        [SerializeField] Vector2 MinMaxDotPositionX;
        float minDotPosX => MinMaxDotPositionX.x;
        float maxDotPosX => MinMaxDotPositionX.y;
        [SerializeField] RectTransform DotLevelProgress;
        [Space]
        [SerializeField] Image FillbarLevelProgress;
        [Space]
        [SerializeField] CanvasGroup[] RewardsIcons;



        void OnEnable()
        {
            UpdateUI();
            
        }

        void UpdateUI()
        {
            uint maxLevel = 100;
            uint currentLevel = PlayerController.GetLocalPlayerData.Invoke().Level;

            float progressClamped = Mathf.Clamp((float)currentLevel / maxLevel, 0, 1);

            Vector2 dotDirection = new Vector2(maxDotPosX, 0) - new Vector2(minDotPosX, 0);
            Vector2 dotPosition = new Vector2(minDotPosX, 0) + dotDirection * progressClamped;
            dotPosition.y = DotLevelProgress.anchoredPosition.y;

            DotLevelProgress.anchoredPosition = dotPosition;
            FillbarLevelProgress.fillAmount = progressClamped;

            for (int i = 0; i < RewardsIcons.Length; i++)
                RewardsIcons[i].alpha = i < currentLevel / 5 ? 1f : 0.05f;

        }


        public async void ClosePanel()
        {
            ClosePanelAnimation.PlayAnimation();
            await Task.Delay( Mathf.RoundToInt( ClosePanelAnimation.animationLenght * 1000 ) );

            await Task.Yield();
            
            Destroy(this.gameObject);
        }
        
        
        
    }
}
