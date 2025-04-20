
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
using Promocodes;
using UI.Battlepass;
using UI.Shop;
using UI.Shop.Daily_Rewards;
using UnityEngine;
using System.Collections;
using Firebase.Auth;

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
        public static FirebaseUser LocalUser;

        const long maxAllowedSize = 100 * 1024 * 1024;

        public static DatabaseReference[] References = new[]
        {
            new DatabaseReference(){ DataType = typeof(PlayerData), DataReference = "PlayerData.json"},
            new DatabaseReference(){ DataType = typeof(DailyRewards), DataReference = "DailyRewards.json"},
            new DatabaseReference(){ DataType = typeof(SkinsForSale), DataReference = "SkinsForSale.json"},
            new DatabaseReference(){ DataType = typeof(SkinOffert[]), DataReference = "AllSkinOfferts.json"},
            new DatabaseReference(){ DataType = typeof(BattlepassProgress), DataReference = "BattlepassProgress.json"},
            new DatabaseReference(){ DataType = typeof(AdsRewards), DataReference = "AdsRewards.json"},
            new DatabaseReference(){ DataType = typeof(Dictionary<string, Promocode>), DataReference = "Promocodes.json"},
        };
        static bool TryGetReferenceByType<T>(out DatabaseReference result)
        {
            result = References.FirstOrDefault(r => r.DataType == typeof(T));
            return result != null;
        }





        static StorageReference RootStorageReference { get => FirebaseStorage.DefaultInstance.RootReference; }
        static StorageReference GetReference(this StorageReference reference, string name) => reference.Child(name);
        static bool TryGetReference(this StorageReference reference, string name, out StorageReference result)
        {
            result = reference.Child(name);
            return result != null;
        }




        public static void GET<T>(this FirebaseUser user, Action<GET_Callback<T>> callbak)
        {
            if (user == null || string.IsNullOrEmpty(user.UserId))
            {
                callbak?.Invoke(new GET_Callback<T> { Status = DatabaseStatus.Error });
                return;
            }

            DatabaseReference databaseReference;
            if (!TryGetReferenceByType<T>(out databaseReference))
            {
                callbak?.Invoke(new GET_Callback<T> { Status = DatabaseStatus.Error });
                return;
            }

            StorageReference reference;
            if (!RootStorageReference.TryGetReference(user.UserId, out reference))
            {
                callbak?.Invoke(new GET_Callback<T> { Status = DatabaseStatus.Error });
                return;
            }

            if (!reference.TryGetReference(databaseReference.DataReference, out reference))
            {
                callbak?.Invoke(new GET_Callback<T> { Status = DatabaseStatus.Error });
                return;
            }

            //reference.GetBytesAsync(maxAllowedSize).ContinueWithOnMainThread(
            //    task => 
            //    {
            //        if (task.IsFaulted || task.IsCanceled)
            //        {
            //            Debug.LogError($"Error GET: {task.Exception.ToString()}");
            //            callbak?.Invoke(new GET_Callback<T> { Status = DatabaseStatus.Error });
            //        }
            //        else
            //        {
            //            Debug.Log("[GET] invoke callback");
            //            byte[] fileContentBytes = task.Result;
            //            string fileContent = Encoding.UTF8.GetString(fileContentBytes);
            //            callbak?.Invoke(new GET_Callback<T> { Status = DatabaseStatus.Success, Data = JsonConvert.DeserializeObject<T>(fileContent) });
            //        }
            //    }
            //);

            reference.GetBytesAsync(maxAllowedSize).ContinueWithOnMainThread(OnGetBytes);

            void OnGetBytes(Task<byte[]> task)
            {
                if (task.IsFaulted || task.IsCanceled)
                {
                    Debug.LogError($"Error GET: {task.Exception.ToString()}");
                    callbak?.Invoke(new GET_Callback<T> { Status = DatabaseStatus.Error });
                }
                else
                {
                    byte[] fileContentBytes = task.Result;
                    string fileContent = Encoding.UTF8.GetString(fileContentBytes);
                    callbak?.Invoke(new GET_Callback<T> { Status = DatabaseStatus.Success, Data = JsonConvert.DeserializeObject<T>(fileContent) });
                }

            }


        }
        public static void GET<T>(Action<GET_Callback<T>> callbak)
        {
            DatabaseReference databaseReference;
            if (!TryGetReferenceByType<T>(out databaseReference))
            {
                callbak?.Invoke(new GET_Callback<T> { Status = DatabaseStatus.Error });
                return;
            }

            StorageReference reference;
            if (!RootStorageReference.TryGetReference(databaseReference.DataReference, out reference))
            {
                callbak?.Invoke(new GET_Callback<T> { Status = DatabaseStatus.Error });
                return;
            }

            reference.GetBytesAsync(maxAllowedSize).ContinueWithOnMainThread(OnGetBytes);

            void OnGetBytes(Task<byte[]> task)
            {
                if (task.IsFaulted || task.IsCanceled)
                {
                    Debug.LogError($"Error GET: {task.Exception.ToString()}");
                    callbak?.Invoke(new GET_Callback<T> { Status = DatabaseStatus.Error });
                }
                else
                {
                    byte[] fileContentBytes = task.Result;
                    string fileContent = Encoding.UTF8.GetString(fileContentBytes);
                    callbak?.Invoke(new GET_Callback<T> { Status = DatabaseStatus.Success, Data = JsonConvert.DeserializeObject<T>(fileContent) });
                }

            }


        }





        public static void POST<T>(this FirebaseUser user, T data)
        {
            if (user == null || string.IsNullOrEmpty(user.UserId))
                return;

            DatabaseReference databaseReference;
            if (!TryGetReferenceByType<T>(out databaseReference))
                return;

            StorageReference reference;
            if (!RootStorageReference.TryGetReference(user.UserId, out reference))
                return;

            if (!reference.TryGetReference(databaseReference.DataReference, out reference))
                return;

            byte[] byteArray = Encoding.UTF8.GetBytes(JsonConvert.SerializeObject(data));
            if(byteArray.Length > maxAllowedSize)
                return;

            reference.PutBytesAsync(byteArray).ContinueWith(OnUploadBytes);

            void OnUploadBytes(Task<StorageMetadata> task)
            {
                if (task.IsFaulted || task.IsCanceled)
                {
                    Debug.LogError($"Error POST: {task.Exception.ToString()}");
                }
                else
                {
                    StorageMetadata metadata = task.Result;
                    Debug.Log($"Finished uploading...\tmd5 hash = {metadata.Md5Hash}");
                }
            }

        }
        public static void POST<T>(T data)
        {
            DatabaseReference databaseReference;
            if (!TryGetReferenceByType<T>(out databaseReference))
                return;

            StorageReference reference;
            if (!RootStorageReference.TryGetReference(databaseReference.DataReference, out reference))
                return;

            byte[] byteArray = Encoding.UTF8.GetBytes(JsonConvert.SerializeObject(data));
            if (byteArray.Length > maxAllowedSize)
                return;

            reference.PutBytesAsync(byteArray).ContinueWith(OnUploadBytes);

            void OnUploadBytes(Task<StorageMetadata> task)
            {
                if (task.IsFaulted || task.IsCanceled)
                {
                    Debug.LogError($"Error POST: {task.Exception.ToString()}");
                }
                else
                {
                    StorageMetadata metadata = task.Result;
                    Debug.Log($"Finished uploading...\tmd5 hash = {metadata.Md5Hash}");
                }
            }

        }



        public static void DELETE<T>(this FirebaseUser user)
        {
            if (user == null || string.IsNullOrEmpty(user.UserId))
                return;

            DatabaseReference databaseReference;
            if (!TryGetReferenceByType<T>(out databaseReference))
                return;

            StorageReference reference;
            if (!RootStorageReference.TryGetReference(user.UserId, out reference))
                return;

            if (!reference.TryGetReference(databaseReference.DataReference, out reference))
                return;

            reference.DeleteAsync().ContinueWithOnMainThread(OnDeleteFile);

            void OnDeleteFile(Task task)
            {
                if (task.IsCompleted)
                {
                    //Debug.Log("File deleted successfully.");
                }
                else
                {
                    Debug.LogError($"Error DELETE: {task.Exception.ToString()}");
                }
            }

        }
        public static void DELETE<T>()
        {
            DatabaseReference databaseReference;
            if (!TryGetReferenceByType<T>(out databaseReference))
                return;

            StorageReference reference;
            if (!RootStorageReference.TryGetReference(databaseReference.DataReference, out reference))
                return;

            reference.DeleteAsync().ContinueWithOnMainThread(OnDeleteFile);

            void OnDeleteFile(Task task)
            {
                if (task.IsCompleted)
                {
                    //Debug.Log("File deleted successfully.");
                }
                else
                {
                    Debug.LogError($"Error DELETE: {task.Exception.ToString()}");
                }
            }

        }




    }
    
}
