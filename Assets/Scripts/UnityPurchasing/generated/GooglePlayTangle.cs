// WARNING: Do not modify! Generated file.

namespace UnityEngine.Purchasing.Security {
    public class GooglePlayTangle
    {
        private static byte[] data = System.Convert.FromBase64String("W9jW2elb2NPbW9jY2XagPNlmPOpP5Ka1fOaGNtpYjQpq0vQlakDeLXdOTBOYBsltx+Pv98tr2bodP3FNloBl/tPURuoCVyomhRDzuxLCtbjMaJVqznBPNV8KytI1nONTiZwxQ53zoHtYgcf0s8evn/8zWQ8YAt3eKJhYHtdiE0WmWO3OYVVhYybYYkrSmUpML1e9O40urAJ668iXvjHH3ulb2Pvp1N/Q81+RXy7U2NjY3NnazB9aWEkLtww1zxajRurep8YxDWxPvyHcMUZ0ZTFMnAmdM6kVLXD/NLL5JstCB6M5a6axpH+DGJIsT1yPEJ+lZxfkJoQjtCDXSOk9Kk5mwj0A36/K/H2Lg72pXfiyz3uudyxK2oHmJtD6ytsY5Nva2NnY");
        private static int[] order = new int[] { 1,9,13,8,12,13,6,8,9,10,10,12,12,13,14 };
        private static int key = 217;

        public static readonly bool IsPopulated = true;

        public static byte[] Data() {
        	if (IsPopulated == false)
        		return null;
            return Obfuscator.DeObfuscate(data, order, key);
        }
    }
}
