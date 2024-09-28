using System.Threading.Tasks;
using UI.Animations;
using UnityEngine;

namespace UI
{
    public class LevelRewardsPreview : MonoBehaviour
    {

        [SerializeField] UIAnimation ClosePanelAnimation; 


        public async void ClosePanel()
        {
            ClosePanelAnimation.PlayAnimation();
            await Task.Delay( Mathf.RoundToInt( ClosePanelAnimation.animationLenght * 1000 ) );

            await Task.Yield();
            
            Destroy(this.gameObject);
        }
        
        
        
    }
}
