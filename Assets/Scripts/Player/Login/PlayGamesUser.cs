using Firebase.Auth;
using System;
using UnityEngine;


namespace Player
{

    public class PlayGamesUser : IUser
    {
        public string UserId { get; private set; }

        public PlayGamesUser(FirebaseUser user)
        {
            UserId = user.UserId;
        }

        public PlayGamesUser(LocalUser user)
        {
            UserId = user.UserId;
        }

    }

}