﻿using System;
using System.Net;
using System.Threading.Tasks;
using GooglePlayGames;
using GooglePlayGames.BasicApi;
using Firebase.Auth;
using UnityEngine;
using Unity.Services.Core;
using Firebase;
using Unity.VisualScripting;

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

        public LoginCallback callback { get; private set; }


        public Login()
        {
            callback = new LoginCallback()
            {
                Status = LoginStatus.None,
                Data = new PlayerData(),
                Date = DateTime.Now
            };

            message = "ctor \n";

            PlayGamesPlatform.Activate();
            Debug.Log("[Game Play Auth] Activate");
            message += "Activate \n";
        }

        public string message;


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



        public void LoginProcess()
        {
#if UNITY_EDITOR
            LoginInEditor();
            return;
#endif

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
                    message += "Auth Error \n";
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

        void LogInGooglePlay(FirebaseAuth auth, Credential credential)
        {
            message += "try manual Authenticate Error\n";
            auth.SignInAndRetrieveDataWithCredentialAsync(credential).ContinueWith(OnSignIn);

            void OnSignIn(Task<AuthResult> task)
            {
                if (task.IsCanceled)
                {
                    Debug.LogError("[Game Play Auth] SignInAndRetrieveDataWithCredentialAsync was canceled.");
                    message += "SignInAndRetrieveDataWithCredentialAsync was canceled. \n";
                    return;
                }
                if (task.IsFaulted)
                {
                    Debug.LogError($"[Game Play Auth] SignInAndRetrieveDataWithCredentialAsync encountered an error: {task.Exception}");
                    message += $"SignInAndRetrieveDataWithCredentialAsync encountered an error: {task.Exception} \n";
                    return;
                }

                AuthResult result = task.Result;
                Debug.Log($"[Game Play Auth] Athenticate Success [id: {result.User.UserId}]");
                message += "Login Success \n";

                Database.Database.LocalUser = result.User;

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
                    message += "Manually Auth Error \n";
                    LoginManuallyProcess();
                }
            });

        }


        void LoginInEditor()
        {
            string email = "maks.ch@gmail.com";
            string password = "test123";
            FirebaseAuth.DefaultInstance.SignInWithEmailAndPasswordAsync(email, password).ContinueWith(OnSignInWithPassword);

            void OnSignInWithPassword(Task<AuthResult> task)
            {
                if (task.IsCanceled)
                {
                    Debug.LogError("[Game Play Auth] SignInAndRetrieveDataWithCredentialAsync was canceled.");
                    return;
                }
                if (task.IsFaulted)
                {
                    Debug.LogError("[Game Play Auth] SignInAndRetrieveDataWithCredentialAsync encountered an error: " + task.Exception);
                    return;
                }
                AuthResult result = task.Result;
                Debug.Log($"[Game Play Auth] Athenticate Success [id: {result.User.UserId}]");

                Database.Database.LocalUser = result.User;

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
        }



    }


}
