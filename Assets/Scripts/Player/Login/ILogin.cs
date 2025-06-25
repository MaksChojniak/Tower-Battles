namespace Player
{

    public interface ILogin
    {
        LoginCallback callback { get; }

        public void Login();
    }

}