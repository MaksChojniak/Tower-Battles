using System;
using System.Threading.Tasks;
using GooglePlayGames;
using GooglePlayGames.BasicApi;
using UnityEngine;

namespace Player
{

    public class PlayGamesLogin : ILogin
    {
        public LoginCallback callback { get; private set; }

        event Action OnAuthenticateSuccess;
        event Action OnAuthenticateFailure;

        public PlayGamesLogin()
        {
            callback = new LoginCallback()
            {
                Status = LoginStatus.None,
                Data = new PlayerData(),
                Date = DateTime.Now
            };

            OnAuthenticateSuccess += AuthenticationSuccess;
            OnAuthenticateFailure += AuthenticationError;
        }

        ~PlayGamesLogin()
        {
            OnAuthenticateFailure -= AuthenticationError;
            OnAuthenticateSuccess -= AuthenticationSuccess;
        }


        public void Login()
        {
            PlayGamesPlatform.Instance.Authenticate((status) =>
            {
                if (status == SignInStatus.Success)
                {
                    Debug.Log($"[Game Play Auth] Athenticate Success");
                    // OnAuthenticateSuccess?.Invoke();

                    PlayGamesPlatform.Instance.RequestServerSideAccess(true, ServerSideAccessResponse);

                    void ServerSideAccessResponse(string code)
                    {
                        if (!string.IsNullOrEmpty(code))
                        {
                            Debug.Log("[Game Play Auth] ServerSideAccess Access Granted");
                            OnAuthenticateSuccess?.Invoke();
                        }
                        else
                        {
                            Debug.LogError($"[Game Play Auth] ServerSideAccess Error with status {status}");
                            OnAuthenticateFailure?.Invoke();
                        }

                    }
                }
                else
                {
                    Debug.LogError($"[Game Play Auth] Athenticate Error {status}");
                    OnAuthenticateFailure?.Invoke();
                    LoginManuallyProcess();
                }
            });
            
        }


        void LoginManuallyProcess()
        {
            PlayGamesPlatform.Instance.ManuallyAuthenticate((status) =>
            {
                if (status == SignInStatus.Success)
                {
                    Debug.Log("[Game Play Auth] Manualy Athenticate Success");
                    OnAuthenticateSuccess?.Invoke();
                }
                else
                {
                    Debug.LogError($"[Game Play Auth] Manually Athenticate Error {status}");
                    OnAuthenticateFailure?.Invoke();
                    LoginManuallyProcess();
                }
            });

        }


        void AuthenticationSuccess()
        {
            string userdId = PlayGamesPlatform.Instance.GetUserId();
            string username = PlayGamesPlatform.Instance.GetUserDisplayName();

            Debug.Log($"[Game Play Auth] User Info - UserId: {userdId}, UserName: {username}");
            
            Database.Database.LocalUser = new PlayGamesUser(userdId, DateTime.Now);

            callback = new LoginCallback()
            {
                Status = LoginStatus.Success,
                Data = new PlayerData()
                {
                    ID = userdId,
                    Nickname = username
                },
                Date = DateTime.Now
            };

        }

        void AuthenticationError() => callback = new LoginCallback()
        {
            Status = LoginStatus.Error,
            Date = DateTime.Now
        };


    }

}