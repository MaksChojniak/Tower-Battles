using System;
using UnityEngine;

namespace Player
{

    public interface IUser
    {
        public string UserId { get; }

        public dynamic Instance => this;

    }

}