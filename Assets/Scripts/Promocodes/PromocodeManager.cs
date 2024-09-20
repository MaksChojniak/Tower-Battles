using UnityEngine;

namespace Promocodes
{
    
    public class PromocodeManager : MonoBehaviour
    {

        [SerializeField] GameObject RedeemCodePrefab;


        public void OpenRedeemCodePanel()
        {
            Instantiate(RedeemCodePrefab);
            
        }


    }
    
    
    
}
