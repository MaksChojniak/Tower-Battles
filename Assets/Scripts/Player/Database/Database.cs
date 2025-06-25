
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Newtonsoft.Json;
using Firebase;
using Firebase.Extensions;
using Firebase.Storage;
using UI.Battlepass;
using UI.Shop;
using UI.Shop.Daily_Rewards;
using UnityEngine;
using System.Collections;
using Firebase.Auth;
using UnityEngine.Networking;
using System.IO;

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
        public static IUser LocalUser;

        const long maxAllowedSize = 100 * 1024 * 1024;

        public static DatabaseReference[] References = new[]
        {
            new DatabaseReference(){ DataType = typeof(PlayerData), DataReference = "PlayerData.json"},
            new DatabaseReference(){ DataType = typeof(DailyRewards), DataReference = "DailyRewards.json"},
            new DatabaseReference(){ DataType = typeof(SkinsForSale), DataReference = "SkinsForSale.json"},
            new DatabaseReference(){ DataType = typeof(SkinOffert[]), DataReference = "AllSkinOfferts.json"},
            new DatabaseReference(){ DataType = typeof(BattlepassProgress), DataReference = "BattlepassProgress.json"},
            new DatabaseReference(){ DataType = typeof(AdsRewards), DataReference = "AdsRewards.json"},
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


        // public static void GET<T>(this IUser user, Action<GET_Callback<T>> callbak)
        // {
        //     ((dynamic)user).POST<T>(callbak);
        // }
        public static void GET<T>(this IUser user, Action<GET_Callback<T>> callbak)
        {
            switch (user)
            {
                case LocalUser localUser:
                    GET<T>(localUser, callbak);
                    break;
                case PlayGamesUser playGamesUser:
                    GET<T>(playGamesUser, callbak);
                    break;
                default:
                    Debug.LogError("Unsupported user type for GET operation.");
                    callbak?.Invoke(new GET_Callback<T> { Status = DatabaseStatus.Error });
                    break;
            }
        }
        public static void GET<T>(this LocalUser user, Action<GET_Callback<T>> callbak)
        {
            DatabaseReference databaseReference;
            if (!TryGetReferenceByType<T>(out databaseReference))
            {
                Debug.LogError($"Error GET: wrong send type [type: {typeof(T).Name}]");
                callbak?.Invoke(new GET_Callback<T> { Status = DatabaseStatus.Error });
                return;
            }

            string key = $"{databaseReference.DataReference}";

            if (!PlayerPrefs.HasKey(key))
            {
                Debug.LogError($"Error GET: key doesn't exist in PlayerPrefs [key: {key}]");
                callbak?.Invoke(new GET_Callback<T> { Status = DatabaseStatus.Error });
                return;
            }

            string json = PlayerPrefs.GetString(key);
            PlayerPrefs.Save();
            callbak?.Invoke(new GET_Callback<T> { Status = DatabaseStatus.Success, Data = JsonConvert.DeserializeObject<T>(json) });
            Debug.Log($"GET successfully");
        }
        public static void GET<T>(this PlayGamesUser user, Action<GET_Callback<T>> callbak)
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

            reference.GetBytesAsync(maxAllowedSize).ContinueWithOnMainThread(OnGetBytes);

            void OnGetBytes(Task<byte[]> task)
            {
                if (task.IsFaulted)
                {
                    Debug.LogError($"Error GET: {task.Exception.ToString()}");
                    //user.GET(callbak);
                    callbak?.Invoke(new GET_Callback<T> { Status = DatabaseStatus.Error });
                }
                else if (task.IsCanceled)
                {
                    Debug.LogError($"Canceled GET: {task.Exception.ToString()}");
                    //user.GET(callbak);
                    callbak?.Invoke(new GET_Callback<T> { Status = DatabaseStatus.Error });
                }
                else
                {
                    byte[] fileContentBytes = task.Result;
                    string fileContent = Encoding.UTF8.GetString(fileContentBytes);
                    Debug.Log($"GET successfully");
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
                if (task.IsFaulted)
                {
                    Debug.LogError($"Error GET: {task.Exception.ToString()}");
                    //GET(callbak);
                    callbak?.Invoke(new GET_Callback<T> { Status = DatabaseStatus.Error });
                }
                else if (task.IsCanceled)
                {
                    Debug.LogError($"Canceled GET: {task.Exception.ToString()}");
                    //GET(callbak);
                    callbak?.Invoke(new GET_Callback<T> { Status = DatabaseStatus.Error });
                }
                else
                {
                    byte[] fileContentBytes = task.Result;
                    string fileContent = Encoding.UTF8.GetString(fileContentBytes);
                    Debug.Log($"GET successfully");
                    callbak?.Invoke(new GET_Callback<T> { Status = DatabaseStatus.Success, Data = JsonConvert.DeserializeObject<T>(fileContent) });
                }

            }
        }
        public static void GET<T>(string fullPath, Action<GET_Callback<T>> callbak)
        {
            string[] path = fullPath.Split('/');
            if (path.Length <= 0)
            {
                callbak?.Invoke(new GET_Callback<T> { Status = DatabaseStatus.Error });
                return;
            }
            StorageReference reference = RootStorageReference;
            foreach (string pathItem in path)
            {
                if (!reference.TryGetReference(pathItem, out reference))
                {
                    callbak?.Invoke(new GET_Callback<T> { Status = DatabaseStatus.Error });
                    return;
                }
            }

            reference.GetBytesAsync(maxAllowedSize).ContinueWithOnMainThread(OnGetBytes);

            void OnGetBytes(Task<byte[]> task)
            {
                if (task.IsFaulted)
                {
                    Debug.LogError($"Error GET: {task.Exception.ToString()}");
                    //GET(callbak);
                    callbak?.Invoke(new GET_Callback<T> { Status = DatabaseStatus.Error });
                }
                else if (task.IsCanceled)
                {
                    Debug.LogError($"Canceled GET: {task.Exception.ToString()}");
                    //GET(callbak);
                    callbak?.Invoke(new GET_Callback<T> { Status = DatabaseStatus.Error });
                }
                else
                {
                    byte[] fileContentBytes = task.Result;
                    string fileContent = Encoding.UTF8.GetString(fileContentBytes);
                    Debug.Log($"GET successfully");
                    callbak?.Invoke(new GET_Callback<T> { Status = DatabaseStatus.Success, Data = JsonConvert.DeserializeObject<T>(fileContent) });
                }

            }


        }




        public static void POST<T>(this IUser user, T data)
        {
            switch (user)
            {
                case LocalUser localUser:
                    POST(localUser, data);
                    break;
                case PlayGamesUser playGamesUser:
                    POST(playGamesUser, data);
                    break;
                default:
                    Debug.LogError("Unsupported user type for POST operation.");
                    break;
            }
        }
        public static void POST<T>(this LocalUser user, T data)
        {
            DatabaseReference databaseReference;
            if (!TryGetReferenceByType<T>(out databaseReference))
            {
                Debug.LogError($"Error POST: wrong send type [type: {typeof(T).Name}]");
                return;
            }

            string key = $"{databaseReference.DataReference}";

            string json = JsonConvert.SerializeObject(data);
            PlayerPrefs.SetString(key, json);
            PlayerPrefs.Save();
            Debug.Log($"POST successfully");
        }
        public static void POST<T>(this PlayGamesUser user, T data)
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
            if (byteArray.Length > maxAllowedSize)
                return;

            reference.PutBytesAsync(byteArray).ContinueWith(OnUploadBytes);

            void OnUploadBytes(Task<StorageMetadata> task)
            {
                if (task.IsFaulted)
                {
                    Debug.LogError($"Error POST: {task.Exception.ToString()}");
                    //user.POST(data);
                }
                else if (task.IsCanceled)
                {
                    Debug.LogError($"Canceled POST: {task.Exception.ToString()}");
                    //user.POST(data);
                }
                else
                {
                    StorageMetadata metadata = task.Result;
                    Debug.Log($"POST successfully ...\tmd5 hash = {metadata.Md5Hash}");
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
                if (task.IsFaulted)
                {
                    Debug.LogError($"Error POST: {task.Exception.ToString()}");
                    //POST(data);
                }
                else if (task.IsCanceled)
                {
                    Debug.LogError($"Canceled POST: {task.Exception.ToString()}");
                    //POST(data);
                }
                else
                {
                    StorageMetadata metadata = task.Result;
                    Debug.Log($"POST successfully ...\tmd5 hash = {metadata.Md5Hash}");
                }
            }

        }
        public static void POST<T>(string fullPath, T data)
        {
            string[] path = fullPath.Split('/');
            if (path.Length <= 0)
                return;

            StorageReference reference = RootStorageReference;

            foreach (string pathItem in path)
            {
                if (!reference.TryGetReference(pathItem, out reference))
                    return;
            }

            byte[] byteArray = Encoding.UTF8.GetBytes(JsonConvert.SerializeObject(data));
            if (byteArray.Length > maxAllowedSize)
                return;

            reference.PutBytesAsync(byteArray).ContinueWith(OnUploadBytes);

            void OnUploadBytes(Task<StorageMetadata> task)
            {
                if (task.IsFaulted)
                {
                    Debug.LogError($"Error POST: {task.Exception.ToString()}");
                    //POST(data);
                }
                else if (task.IsCanceled)
                {
                    Debug.LogError($"Canceled POST: {task.Exception.ToString()}");
                    //POST(data);
                }
                else
                {
                    StorageMetadata metadata = task.Result;
                    Debug.Log($"POST successfully ...\tmd5 hash = {metadata.Md5Hash}");
                }
            }

        }




        public static void DELETE<T>(this IUser user)
        { 
            switch (user)
            {
                case LocalUser localUser:
                    DELETE<T>(localUser);
                    break;
                case PlayGamesUser playGamesUser:
                    DELETE<T>(playGamesUser);
                    break;
                default:
                    Debug.LogError("Unsupported user type for DELETE operation.");
                    break;
            }
        }
        public static void DELETE<T>(this LocalUser user)
        {
            DatabaseReference databaseReference;
            if (!TryGetReferenceByType<T>(out databaseReference))
            {
                Debug.LogError($"Error DELETE: wrong send type [type: {typeof(T).Name}]");
                return;
            }

            string key = $"{databaseReference.DataReference}";

            if (!PlayerPrefs.HasKey(key))
            {
                Debug.LogError($"Error DELETE: key doesn't exist in PlayerPrefs [key: {key}]");
                return;
            }

            PlayerPrefs.DeleteKey(key);
            PlayerPrefs.Save();
            Debug.Log($"DELETE successfully");
        }
        public static void DELETE<T>(this PlayGamesUser user)
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
                if (task.IsFaulted)
                {
                    Debug.LogError($"Error DELETE: {task.Exception.ToString()}");
                    //user.DELETE<T>();
                }
                else if (task.IsCanceled)
                {
                    Debug.LogError($"Canceled DELETE: {task.Exception.ToString()}");
                    //user.DELETE<T>();
                }
                else
                {
                    Debug.Log("DELETE successfully.");
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
                if (task.IsFaulted)
                {
                    Debug.LogError($"Error DELETE: {task.Exception.ToString()}");
                    //DELETE<T>();
                }
                else if (task.IsCanceled)
                {
                    Debug.LogError($"Canceled DELETE: {task.Exception.ToString()}");
                    //DELETE<T>();
                }
                else
                {
                    Debug.Log("DELETE successfully.");
                }
            }

        }
        public static void DELETE(string fullPath)
        {
            string[] path = fullPath.Split('/');
            if (path.Length <= 0)
                return;

            StorageReference reference = RootStorageReference;

            foreach (string pathItem in path)
            {
                if (!reference.TryGetReference(pathItem, out reference))
                    return;
            }

            reference.DeleteAsync().ContinueWithOnMainThread(OnDeleteFile);

            void OnDeleteFile(Task task)
            {
                if (task.IsFaulted)
                {
                    Debug.LogError($"Error DELETE: {task.Exception.ToString()}");
                    //DELETE(fullPath);
                }
                else if (task.IsCanceled)
                {
                    Debug.LogError($"Canceled DELETE: {task.Exception.ToString()}");
                    //DELETE(fullPath);
                }
                else
                {
                    Debug.Log("DELETE successfully.");
                }

            }

        }



        public static void FilesName(string fullPath, Action<List<string>> callback)
        {
            //string[] path = fullPath.Split('/');
            //if (path.Length <= 0)
            //    return;

            //StorageReference reference = RootStorageReference;

            //foreach (string pathItem in path)
            //{
            //    if (!reference.TryGetReference(pathItem, out reference))
            //        return;
            //}

            GetFilesName_Internal(fullPath, callback);
        }

        async static void GetFilesName_Internal(string fullPath, Action<List<string>> callback)
        {
            string url = $"https://firebasestorage.googleapis.com/v0/b/{RootStorageReference.Bucket}/o?prefix={UnityWebRequest.EscapeURL(fullPath)}/";

            UnityWebRequest request = UnityWebRequest.Get(url);

            var asyncOp = request.SendWebRequest();

            while (!asyncOp.isDone)
                await Task.Yield();

            if (request.result != UnityWebRequest.Result.Success)
            {
                callback?.Invoke(new List<string>());
                return;
            }
            var json = request.downloadHandler.text;
            var fileList = JsonConvert.DeserializeObject<FirebaseFileList>(json);


            if (fileList.items == null)
            {
                callback?.Invoke(new List<string>());
                return;
            }

            callback?.Invoke( fileList.items.Select(item => Path.GetFileName(item.name)).ToList() );
        }

        [Serializable]
        public class FirebaseFileItem
        {
            public string name;
            public string bucket;
        }

        [Serializable]
        public class FirebaseFileList
        {
            public List<FirebaseFileItem> prefixes;
            public List<FirebaseFileItem> items;
        }

    }
    
}
