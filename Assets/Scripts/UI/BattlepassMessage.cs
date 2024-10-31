using System.Threading.Tasks;
using TMPro;
using Unity.Mathematics;
using UnityEngine;
using UnityEngine.UI;

namespace UI
{
    public class BattlepassMessage : MonoBehaviour
    {
        [SerializeField] TMP_Text TittleText;
        [Space]
        [SerializeField] TMP_Text ContentText;
        [SerializeField] Image Fillbar; 

        
        public async void ShowMessage(Message message)
        {
            int tier = int.Parse(message.Properties[1].Name);

            string[] newValues = message.Properties[2].Name.Split('/');
            float oldFillAmount = float.Parse(newValues[0]) / float.Parse(newValues[1]);

            string[] oldValues = message.Properties[3].Name.Split('/');
            float newFillAmount = float.Parse(oldValues[0]) / float.Parse(oldValues[1]);
            
            
            TittleText.text = $"{message.Tittle} {tier}";
            ContentText.text = $"{message.Properties[0].Name} {tier + 1}";
            Fillbar.fillAmount = oldFillAmount;

            while (Mathf.Abs(newFillAmount - oldFillAmount) > 0.005f)
            {
                if (Mathf.Abs(1 - oldFillAmount) < 0.005f)
                {
                    tier += 1;

                    oldFillAmount = 0;
                    newFillAmount -= 1;
                    
                    TittleText.text = $"{message.Tittle} {tier}";
                    ContentText.text = $"{message.Properties[0].Name} {tier + 1}";
                }

                oldFillAmount += Time.deltaTime;//Mathf.Lerp(oldFillAmount, (newFillAmount > 1 ? 1 : newFillAmount), 0.1f);
            
                Fillbar.fillAmount = oldFillAmount;

                await Task.Yield();
            }

            Fillbar.fillAmount = newFillAmount;

        }
    }
}
