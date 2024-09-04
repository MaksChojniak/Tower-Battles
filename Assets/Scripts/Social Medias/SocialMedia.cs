using UnityEngine;

namespace Social_Medias
{
    public class SocialMedia : MonoBehaviour
    {
        [SerializeField] string url = "";


        public void Open()
        {
            if(string.IsNullOrEmpty(url))
                return;
            
            Application.OpenURL(url);
        }

    }
}
