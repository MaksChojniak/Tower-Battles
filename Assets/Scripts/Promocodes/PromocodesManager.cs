using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using Player.Database;
using UnityEngine;

namespace Promocodes
{
    [CreateAssetMenu(menuName = "Promocodes Generator", fileName = "Promocodes Generator")]
    public class PromocodesManager : ScriptableObject
    {
        
        [Header("Promocode Properties")]
        [Range(1, 500)] [SerializeField] int CodesCount = 1;
        [Range(1, 20)] [SerializeField] int CodeLenght = 10;
        [SerializeField] PromocodeReward Reward = new PromocodeReward();
        
        [Space(18)]
        [Header("Existing Codes")]
        [SerializeField] List<Promocode> promocodes = new List<Promocode>();
        List<string> codes => promocodes.Select(_promocode => _promocode.Code).ToList();

        [Space(28)]
        [SerializeField] bool Generate;
        [Space(12)]
        [SerializeField] bool Clear;


        void OnValidate()
        {
            if (Generate)
            {
                Generate = false;

                GenerateCodes();
            }
            
            
            if (Clear)
            {
                Clear = false;

                ClearProperties();
            }
            
            
            
        }


        async void GenerateCodes()
        {
            await FirebaseCheckDependencies.CheckAndFixDependencies();

            promocodes = await GetExistingCodes();


            for (int i = 0; i < CodesCount; i++)
            {
                string code = await PromocodesUtils.GenerateCodesAsync(codes, CodeLenght);
                
                Promocode promocode = new Promocode() { Code = code, Reward = Reward };
            
                promocodes.Add(promocode);
            
                await Task.Yield();
            }

            await Database.POST<Promocode[]>( promocodes.ToArray() );


            ClearProperties();
            
        }


        async Task<List<Promocode>> GetExistingCodes()
        {
            var callback =  await Database.GET<Promocode[]>();

            if (callback.Status != DatabaseStatus.Success)
                return new List<Promocode>();
                // throw new Exception("GET function occurred error");

            return callback.Data.ToList();
        }


        void ClearProperties()
        {
            Reward = new PromocodeReward();
            promocodes = new List<Promocode>();

        }
        
    }
}
