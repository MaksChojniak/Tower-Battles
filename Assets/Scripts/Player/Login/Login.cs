using System;
using System.Threading.Tasks;
using GooglePlayGames;
using GooglePlayGames.BasicApi;
using Firebase.Auth;
using UnityEngine;
using Firebase;


namespace Player
{
    public enum LoginStatus
    {
        None,
        Success,
        Error,
    }

    public class LoginCallback
    {
        public LoginStatus Status = LoginStatus.None;
        public PlayerData Data = new PlayerData();
        public DateTime Date = new DateTime();
    }

    public class FirebaseLoginCallback
    {
        public LoginStatus Status = LoginStatus.None;
        public AuthResult AuthResult;
    }




    public class Login
    {
        public LoginCallback callback => loginProvider.callback;

        ILogin loginProvider;

        public Login()
        {
            if (!PlayerPrefs.HasKey("is_linked_account"))
                PlayerPrefs.SetInt("is_linked_account", 0);

            bool isLinkedAccount = PlayerPrefs.GetInt("is_linked_account") == 1;

            if (isLinkedAccount)
            {
                PlayGamesPlatform.Activate();
                Debug.Log("[Game Play Auth] Activate");
                loginProvider = new PlayGamesLogin();
            }
            else
            {
                loginProvider = new AnonymousLogin();
            }

#if UNITY_EDITOR
            loginProvider = new AnonymousLogin();
#endif
        }


        //public async Task<LoginCallback> LoginProcess()
        //{
        //    LoginCallback callback = new LoginCallback()
        //    {
        //        Status = LoginStatus.Error,
        //    };

        //    string email = "maks.ch@gmail.com";
        //    string password = "test123";

        //    FirebaseLoginCallback firebaseCallback = await FirebaseRegister(email, password);

        //    if (firebaseCallback.Status != LoginStatus.Success)
        //        return callback;

        //    AuthResult result = firebaseCallback.AuthResult;
        //    FirebaseUser user = result.User;

        //    callback = new LoginCallback()
        //    {
        //        Status = LoginStatus.Success,
        //        Data = new PlayerData()
        //        {
        //            ID = user.UserId,
        //        },
        //        Date = DateTime.Now
        //    };


        //    return callback;
        //}



        public void LoginProcess() => loginProvider.Login();


    }


}
