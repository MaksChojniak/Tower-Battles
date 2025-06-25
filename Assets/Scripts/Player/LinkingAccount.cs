using System;
using System.Threading.Tasks;
using System.Collections;
using UI.Battlepass;
using UI.Shop;
using UnityEngine;

namespace Player
{

    public class LinkingAccount : MonoBehaviour
    {

        void OnEnable()
        {
            if(PlayerPrefs.GetInt("is_linked_account") == 1)
                Destroy(this.gameObject);
        }

        public void LinkAccount()
        {
            if (Database.Database.LocalUser is LocalUser user)
            {
                Database.Database.LocalUser = new PlayGamesUser(user);
            }
            else
            {
                Debug.Log("Account already linked.");
                return;
            }

            PlayerPrefs.SetInt("is_linked_account", 1);

            StartCoroutine(LoginWithPlayGames());
        }

        IEnumerator LoginWithPlayGames()
        {
            Login login = new Login();
            login.LoginProcess();

            DateTime startTime = DateTime.Now;
            while (login.callback.Status != LoginStatus.Success || (DateTime.Now - startTime).TotalSeconds > 45)
                yield return null;

            if (login.callback.Status != LoginStatus.Success)
            {
                PlayerPrefs.SetInt("is_linked_account", 0);
                login = new Login();
                login.LoginProcess();
            }
            else
            {
                BattlepassManager.SaveData();
                ShopManager.SaveData();
                
                Debug.Log("Account linked successfully.");
                Destroy(this.gameObject);
            }
            
        } 
    }

}