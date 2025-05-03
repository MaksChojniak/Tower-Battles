using System;
using System.Collections.Generic;

class AOTFixtures
{
    static void EnsureAOTCompatibility()
    {
        // Force the AOT compiler to generate code for List<Reward>
        var dummy = new List<UI.Shop.Daily_Rewards.Reward>();

        // Include an exception so we can be sure to know if this method is ever called.
        throw new InvalidOperationException("This method is used for AOT code generation only. Do not call it at runtime.");
    }
}