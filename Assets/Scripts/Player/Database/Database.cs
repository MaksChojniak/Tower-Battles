
using System;
using System.Collections.Generic;
using System.Linq;
using System.Net.Http;
using System.Text;
using System.Threading.Tasks;
using MMK.ScriptableObjects;
using Newtonsoft.Json;
using Firebase;
using Firebase.Extensions;
using Firebase.Storage;
using UI.Battlepass;
using UI.Shop;
using UI.Shop.Daily_Rewards;
using UnityEngine;

namespace Player.Database
{

    [Serializable]
    public class DatabaseReference
    {
        public Type DataType;
        public string DataReference;
    }

    public enum DatabaseStatus
    {
        None,
        Success,
        Error,
    }

    public struct GET_Callback<T>
    {
        public DatabaseStatus Status;
        public T Data;
    }
    
    

    public static class Database
    {

        public static DatabaseReference[] References = new[]
        {
            new DatabaseReference(){ DataType = typeof(PlayerData), DataReference = "PlayerData.json"},
            new DatabaseReference(){ DataType = typeof(DailyRewards), DataReference = "DailyRewards.json"},
            new DatabaseReference(){ DataType = typeof(SkinsForSale), DataReference = "SkinsForSale.json"},
            new DatabaseReference(){ DataType = typeof(SkinOffert[]), DataReference = "AllSkinOfferts.json"},
            new DatabaseReference(){ DataType = typeof(BattlepassProgress), DataReference = "BattlepassProgress.json"},
            new DatabaseReference(){ DataType = typeof(AdsRewards), DataReference = "AdsRewards.json"},
        };
        
        
        public async static Task<GET_Callback<T>> GET<T>(string playerID = "")
        {
            
            GET_Callback<T> callback = new GET_Callback<T>()
            {
                Status = DatabaseStatus.Error,
            };
            
            
            if (playerID == "0")
                return callback;
            
            string json = await GetDataJson(playerID, typeof(T));

            if (!string.IsNullOrEmpty(json))
            {
                T data = JsonConvert.DeserializeObject<T>(json);
                
                callback = new GET_Callback<T>()
                {
                    Status = DatabaseStatus.Success,
                    Data = data,
                };
            }

            return callback;
        }


        public async static Task POST<T>(T data, string playerID = "")
        {
            
// #if UNITY_EDITOR
//             return;
// #endif
            
            if (playerID == "0")
                return;
            
            string json = JsonConvert.SerializeObject(data);

            await UploadDataJson(playerID, typeof(T), json);
        }


        public async static Task DELETE<T>(string playerID = "")
        {

#if UNITY_EDITOR
            return;
#endif
            
            if (playerID == "0")
                return;

            await RemoveDataJson(playerID, typeof(T));
        }



#region Firebase Get JSON

        async static Task<string> GetDataJson(string playerID, Type dataReferenceType)
        {
            DatabaseReference reference = References.FirstOrDefault(r => r.DataType == dataReferenceType);
            
            if(reference == null)
                throw new Exception($"Reference with type: {dataReferenceType.FullName} doesn't exist");
            
            return await GetDataJson(playerID, reference.DataReference);
        }

        async static Task<string> GetDataJson(string playerID, string dataReferenceName)
        {
            // StorageReference storageReference = FirebaseStorage.DefaultInstance.RootReference;//.GetReferenceFromUrl("gs://towerdefense-a8118.appspot.com");
            StorageReference storageReference = FirebaseStorage.DefaultInstance.RootReference;//GetReferenceFromUrl("gs://towerdefense-a8118.appspot.com");
            
            StorageReference playerReference = storageReference.Child(playerID);
            StorageReference dataReference = playerReference.Child(dataReferenceName);
            if(string.IsNullOrEmpty(playerID))
                dataReference = storageReference.Child(dataReferenceName);

            bool fileExist = await FileExist(dataReference);
            if (!fileExist)
                return string.Empty;

            long maxDataSize = 50 * 1024 * 1024; // it is 10MB
            var task = dataReference.GetBytesAsync(maxDataSize); 
            await Task.WhenAll(task);
            // await task;
            // task.Wait();
            
            if (task.IsCanceled || task.IsFaulted)
                throw new Exception("Error while downloading file");

            byte[] byteArray = task.Result;
            string json = Encoding.UTF8.GetString(byteArray);

            return json;
        }

        async static Task<bool> FileExist(StorageReference storageReference)
        {
            bool exist = false;
            
            var task = storageReference.GetMetadataAsync().ContinueWithOnMainThread((task) =>
            {
                if (task.IsFaulted || task.IsCanceled)
                    Debug.LogException(new Exception($"File doesn't exist: {task.Exception}"));
               
                exist = !task.IsFaulted && !task.IsCanceled;
                
            });

            await Task.WhenAll(task);
            
            return exist;
        }

#endregion



#region Firebase Upload JSON

        async static Task UploadDataJson(string playerID, Type dataReferenceType, string json)
        {
            DatabaseReference reference = References.FirstOrDefault(r => r.DataType == dataReferenceType);
            
            if(reference == null)
                throw new Exception($"Reference with type: {dataReferenceType.FullName} doesn't exist");
            
            await UploadDataJson(playerID, reference.DataReference, json);
        }

        async static Task UploadDataJson(string playerID, string dataReferenceName, string json)
        {
            StorageReference storageReference = FirebaseStorage.DefaultInstance.RootReference;//GetReferenceFromUrl("gs://towerdefense-a8118.appspot.com");
            
            StorageReference playerReference = storageReference.Child(playerID);
            StorageReference dataReference = playerReference.Child(dataReferenceName);
            if(string.IsNullOrEmpty(playerID))
                dataReference = storageReference.Child(dataReferenceName);
            
            byte[] byteArray = Encoding.UTF8.GetBytes(json);
            var task = dataReference.PutBytesAsync(byteArray);
            await Task.WhenAll(task);

            if (task.IsCanceled || task.IsFaulted)
                throw new Exception("Error while uploading file");
            
            StorageMetadata metadata = task.Result;
            string md5Hash = metadata.Md5Hash;
            Debug.Log($"Finished uploading... [hash: {md5Hash}]");
        }

        
#endregion



#region Firebase Remove JSON

        
        async static Task RemoveDataJson(string playerID, Type dataReferenceType)
        {
            DatabaseReference reference = References.FirstOrDefault(r => r.DataType == dataReferenceType);
            
            if(reference == null)
                throw new Exception($"Reference with type: {dataReferenceType.FullName} doesn't exist");
            
            await RemoveDataJson(playerID, reference.DataReference);
        }

        async static Task RemoveDataJson(string playerID, string dataReferenceName)
        {
            StorageReference storageReference = FirebaseStorage.DefaultInstance.RootReference; //GetReferenceFromUrl("gs://towerdefense-a8118.appspot.com");
            
            StorageReference playerReference = storageReference.Child(playerID);
            StorageReference dataReference = playerReference.Child(dataReferenceName);
            if(string.IsNullOrEmpty(playerID))
                dataReference = storageReference.Child(dataReferenceName);
            
            var task = dataReference.DeleteAsync();
            await Task.WhenAll(task);

            if (task.IsCanceled || task.IsFaulted)
                throw new Exception("Error while deleting file");
            
            Debug.Log($"Finished removing file");
        }
        
        
#endregion
        
        
    }
    
}
