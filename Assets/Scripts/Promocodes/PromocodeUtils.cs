using System.Collections.Generic;
using System.Collections;
using System.Linq;
using System.Threading.Tasks;
using Player.Database;
using System.IO;

namespace Promocodes
{
    public static class PromocodeUtils
    {
        
        public async static Task<string> GenerateCodesAsync(ICollection<string> codes, int codeLenght = 10)
        {
            System.Random random = new System.Random(UnityEngine.Random.Range(0, 100));
            
            char[] keys = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789".ToCharArray();

            string code = "";

            do
            {
                code = "";
                
                for (int i = 0; i < codeLenght; i++)
                {
                    int randomIndex = random.Next(0, keys.Length);
                    code += $"{keys[randomIndex]}";
                }
                
                await Task.Yield();
                
            } while (codes.WithoutExtension().Contains(code) );

            
            return code;
        }

        public static IEnumerable<string> WithoutExtension(this IEnumerable<string> src) => src.Select(el => Path.GetFileNameWithoutExtension(el) );
        
    }
}
