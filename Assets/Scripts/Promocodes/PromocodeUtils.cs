using System.Collections.Generic;
using System.Collections;
using System.Linq;
using System.Threading.Tasks;
using Player.Database;

namespace Promocodes
{
    public static class PromocodeUtils
    {
        
        
        public async static Task<Dictionary<string, Promocode>> GetExistingCodes()
        {
            ////var callback =  await Database.GET<Dictionary<string, Promocode>>();

            //if (callback.Status != DatabaseStatus.Success)
            //    return new Dictionary<string, Promocode>();
            //// throw new Exception("GET function occurred error");

            //return callback.Data;

            bool taskCompleted = false;
            Database.GET<Dictionary<string, Promocode>>(OnGetData);

            while (!taskCompleted)
                await Task.Yield();

            Dictionary<string, Promocode> result = null;
            void OnGetData(GET_Callback<Dictionary<string, Promocode>> callback)
            {
                result = callback.Data;

                taskCompleted = true;
            }

            if (result == null)
                return new Dictionary<string, Promocode>();

            return result;
        }
        
        
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

            
            return code;
        } 
        
        
    }
}
