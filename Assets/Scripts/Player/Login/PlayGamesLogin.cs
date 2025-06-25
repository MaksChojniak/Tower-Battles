using System;
using System.Threading.Tasks;
using GooglePlayGames;
using GooglePlayGames.BasicApi;
using Firebase.Auth;
using UnityEngine;

namespace Player
{

    public class PlayGamesLogin : ILogin
    {
        public LoginCallback callback { get; private set; }

        public PlayGamesLogin()
        {
            callback = new LoginCallback()
            {
                Status = LoginStatus.None,
                Data = new PlayerData(),
                Date = DateTime.Now
            };
        }


        public void Login()
        {
            //Social.localUser.Authenticate((status) =>
            PlayGamesPlatform.Instance.Authenticate((status) =>
            {
                if (status == SignInStatus.Success)
                {
                    Debug.Log("[Game Play Auth] Athenticate Success");
                    PlayGamesPlatform.Instance.RequestServerSideAccess(true, AuthWithFirebase);
                }
                else
                {
                    Debug.LogError($"[Game Play Auth] Athenticate Error");
                    LoginManuallyProcess();
                }
            });
            
        }


        void AuthWithFirebase(string code)
        {
            Debug.Log("[Game Play Auth] Get creadential code");
            FirebaseAuth auth = FirebaseAuth.DefaultInstance;

            Credential credential = PlayGamesAuthProvider.GetCredential(code);

            LogInGooglePlay(auth, credential);
        }


        void LogInGooglePlay(FirebaseAuth auth, Credential credential) =>
            auth.SignInAndRetrieveDataWithCredentialAsync(credential).ContinueWith(OnSignIn);
    

        void OnSignIn(Task<AuthResult> task)
        {
            if (task.IsCanceled)
            {
                Debug.LogError("[Game Play Auth] SignInAndRetrieveDataWithCredentialAsync was canceled.");
                return;
            }
            if (task.IsFaulted)
            {
                Debug.LogError($"[Game Play Auth] SignInAndRetrieveDataWithCredentialAsync encountered an error: {task.Exception}");
                return;
            }

            AuthResult result = task.Result;
            Debug.Log($"[Game Play Auth] Athenticate Success [id: {result.User.UserId}]");

            Database.Database.LocalUser = new PlayGamesUser(result.User);

            callback = new LoginCallback()
            {
                Status = LoginStatus.Success,
                Data = new PlayerData()
                {
                    ID = result.User.UserId,
                    Nickname = result.User.DisplayName
                },
                Date = DateTime.Now
            };
        }


        void LoginManuallyProcess()
        {
            //PlayGamesPlatform.Instance.SignOut();

            PlayGamesPlatform.Instance.ManuallyAuthenticate((status) =>
            {
                if (status == SignInStatus.Success)
                {
                    Debug.Log("[Game Play Auth] Manualy Athenticate Success");
                    PlayGamesPlatform.Instance.RequestServerSideAccess(true, AuthWithFirebase);
                }
                else
                {
                    Debug.LogError($"[Game Play Auth] Manually Athenticate Error");
                    LoginManuallyProcess();
                }
            });

        }


    }

}