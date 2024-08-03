using System;
using System.Threading.Tasks;
using Firebase;
using Firebase.Auth;
using Firebase.Extensions;
using UnityEngine;


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

        
        public Login()
        {

        }
        

        public async Task<LoginCallback> LoginProcess()
        {
            LoginCallback callback = new LoginCallback()
            {
                Status = LoginStatus.Error,
            };

            string email = "maks.ch@gmail.com";
            string password = "test123";

            FirebaseLoginCallback firebaseCallback = await FirebaseRegister(email, password);

            if (firebaseCallback.Status != LoginStatus.Success)
                return callback;

            AuthResult result = firebaseCallback.AuthResult;
            FirebaseUser user = result.User;
            
            callback = new LoginCallback()
            {
                Status = LoginStatus.Success,
                Data = new PlayerData()
                {
                    ID = user.UserId,
                },
                Date = DateTime.Now
            };
            

            return callback;
        }




        async Task<FirebaseLoginCallback> FirebaseLogin(string email, string password)
        {
            FirebaseLoginCallback callback = new FirebaseLoginCallback()
            {
                Status = LoginStatus.Error
            };

            AuthResult authResult = null;

            
            var loginTask = FirebaseAuth.DefaultInstance.SignInWithEmailAndPasswordAsync(email, password);
            await Task.WhenAll(loginTask);


            if (loginTask.IsCanceled || loginTask.IsFaulted)
                return callback;

            authResult = loginTask.Result;


            callback = new FirebaseLoginCallback()
            {
                Status = LoginStatus.Success,
                AuthResult = authResult
            };

            return callback;
        }
        
        
        
        
        
        
        async Task<FirebaseLoginCallback> FirebaseRegister(string email, string password)
        {
            FirebaseLoginCallback callback = new FirebaseLoginCallback()
            {
                Status = LoginStatus.Error
            };

            AuthResult authResult = null;

            
            var registerTask = FirebaseAuth.DefaultInstance.CreateUserWithEmailAndPasswordAsync(email, password);
            try
            {
                await Task.WhenAll(registerTask);
            }
            catch (Exception registerException)
            {
                var loginTask = FirebaseLogin(email, password);
                await Task.WhenAll(loginTask);

                return loginTask.Result;
            }
            
            
            if(registerTask.IsCanceled || registerTask.IsFaulted)
                return callback;

            authResult = registerTask.Result;

            
            callback = new FirebaseLoginCallback()
            {
                Status = LoginStatus.Success,
                AuthResult = authResult
            };

            return callback;
        }






    }


}

