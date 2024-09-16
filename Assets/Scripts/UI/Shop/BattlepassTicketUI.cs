using MMK;
using TMPro;
using UnityEngine;

namespace UI.Shop
{
    
    public class BattlepassTicketUI : MonoBehaviour
    {
        
        [SerializeField] TMP_Text GemsPriceText;
        [SerializeField] TMP_Text TicketsCountText;
        
        
        public void UpdateUI(BattlepassTicket ticketOffert)
        {

            TicketsCountText.text = $"{ticketOffert.TiersCount} Tickets";
            GemsPriceText.text = $"{StringFormatter.GetGemsText(ticketOffert.GemsPrice, true, "80%")}";

        }
        
        
    }
    
}
