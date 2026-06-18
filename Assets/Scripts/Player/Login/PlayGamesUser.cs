using Firebase.Auth;
using System;
using UnityEngine;


namespace Player
{

    public class PlayGamesUser : IUser
    {
        public TimeSpan SessionTime() => DateTime.Now - sessionStartTime;
        DateTime sessionStartTime;

        public string UserId { get; private set; }

        public PlayGamesUser(string id, DateTime time)
        {
            UserId = id;
            sessionStartTime = time;
        }

        public PlayGamesUser(LocalUser user)
        {
            UserId = user.UserId;
        }

    }

}