using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using JetBrains.Annotations;

namespace Promocodes
{
    public static class PromocodesUtils
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
                
            } while (codes.Contains(code));

            // if(codes.Contains(code));
            //     code = await GenerateCodesAsync(codes, codeLenght);

            
            return code;
        } 
        
        
        
        
    }
}
