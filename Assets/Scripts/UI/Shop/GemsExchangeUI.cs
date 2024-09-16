using MMK;
using TMPro;
using UnityEngine;

namespace UI.Shop
{
    
    public class GemsExchangeUI : MonoBehaviour
    {

        [SerializeField] TMP_Text OffertNameText;
        [Space(8)]
        [SerializeField] TMP_Text GemsPriceText;
        [SerializeField] TMP_Text CoinsRewardText;


        public void UpdateUI(GemsExchange gemsExchangeOffert)
        {
            OffertNameText.text = gemsExchangeOffert.OffertName;
            
            GemsPriceText.text = $"{StringFormatter.GetGemsText(gemsExchangeOffert.GemsPrice, true, "80%")}";
            CoinsRewardText.text = $"{StringFormatter.GetCoinsText(gemsExchangeOffert.CoinsReward, true, "80%")}";
            
        }
        
        
    }
    
}
