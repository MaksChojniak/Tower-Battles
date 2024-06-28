namespace MMK.Towers
{
    public enum ShootStatus
    {
        Canceled,
        Successfully
    }
    
    public struct ShootResult
    {
        public ShootStatus Status;
        public int GivenDamage;
    }
}
