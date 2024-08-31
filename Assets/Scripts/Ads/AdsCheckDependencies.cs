
using System.Threading.Tasks;
using GoogleMobileAds.Api;
using UnityEngine;

namespace Ads
{
    public class AdsCheckDependencies : MonoBehaviour
    {
        // MobileAds.Initialize(initStatus => { });
        
        public static bool IsCheckedOrFixed;

        void Awake()
        {
            IsCheckedOrFixed = false;
        }



        public async static Task CheckAndFixDependencies()
        {
            // while (!IsCheckedOrFixed)
            // {

            MobileAds.Initialize((InitializationStatus initStatus) =>
            {
                IsCheckedOrFixed = true;
            });
            
            await Task.Yield();

            //     await Task.Yield();
            //
            // }

        }


        [ContextMenu(nameof(PlayAd))]
        public void PlayAd()
        {
            GoogleAds.ShowAd();
        }

    }
}
