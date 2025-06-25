using System;
using System.Threading.Tasks;
using UnityEngine;

namespace Player
{

    public class AnonymousLogin : ILogin
    {

        public LoginCallback callback { get; private set; }

        public AnonymousLogin()
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
            string id = Guid.NewGuid().ToString("N").Substring(0, 8);
            
            Database.Database.LocalUser = new LocalUser(id);
            callback = new LoginCallback()
            {
                Status = LoginStatus.Success,
                Data = new PlayerData()
                {
                    ID = id,
                    Nickname = "Anonymous_" + id,
                },
                Date = DateTime.Now
            };
        }



    }

}