using Firebase.Auth;
using System;
using UnityEngine;


namespace Player
{

    public class LocalUser : IUser
    {
        public string UserId { get; private set; }

        public LocalUser(string userId)
        {
            UserId = userId;
        }

    }
}