using GoogleMobileAds.Api;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Ads
{
    public  interface IRewardedAd
    {
        public void Load(Action<RewardedInterstitialAd, LoadAdError> callback);
        public void Show();

    }
}
