using System;
using System.Globalization;
using System.Linq;
using System.Net;
using System.Net.Http;
using System.Runtime.CompilerServices;
using System.Threading.Tasks;
using UI.Battlepass;
using UnityEngine;

namespace MMK
{

    public class ServerDateReseult
    {
        public DateTime ServerDate;
        public TimeSpan LocalTimeOffset;
    }
    
    
    public class ServerDate : MonoBehaviour
    {
        static ServerDate Instance;

        public delegate DateTime SimulatedDateOnServerUTCDelegate();
        public static SimulatedDateOnServerUTCDelegate SimulatedDateOnServerUTC;
        
        static DateTime dateFromServer = new DateTime();
        static TimeSpan localTimeOffset = new TimeSpan();
        static DateTime simulateDateOnServer => DateTime.Now - localTimeOffset;
        static DateTime simulatedDateOnServerUTC => simulateDateOnServer.ToUniversalTime();


        void Awake()
        {
            if (Instance != null)
            {
                Destroy(this.gameObject);
                return;
            }

            Instance = this;
            DontDestroyOnLoad(this.gameObject);

            SimulatedDateOnServerUTC += () => simulatedDateOnServerUTC;

        }

        void OnDestroy()
        {
            if (Instance != this)
                return;


            Instance = null;
        }
        
        

        
        async void OnApplicationFocus(bool hasFocus)
        {

            if (hasFocus)
                await GetDateFromSerer();

        }

        public async static Task GetDateFromSerer()
        {
            ServerDateReseult result = await ServerDate.GetDateFromServerAsync();
            dateFromServer = result.ServerDate;
            localTimeOffset = result.LocalTimeOffset;

            await Task.Yield();
        }
        



#region Date/Time

        const string DATE_URL =  "http://www.google.com";
        
         static ServerDateReseult GetDateFromServer()
        {
            DateTime dateFromServer;
            TimeSpan localTimeOffset;
            
            using (var response = 
                WebRequest.Create(DATE_URL).GetResponse())
                //string todaysDates =  response.Headers["date"];
                dateFromServer = DateTime.ParseExact(response.Headers["date"],
                    "ddd, dd MMM yyyy HH:mm:ss 'GMT'",
                    CultureInfo.InvariantCulture.DateTimeFormat,
                    DateTimeStyles.AssumeUniversal);    
            
            // dateFromServer = DateTime.UtcNow;
            localTimeOffset = DateTime.Now - dateFromServer;

            return new ServerDateReseult()
            {
                ServerDate = dateFromServer,
                LocalTimeOffset = localTimeOffset,
            };
        }
        
        async static Task<ServerDateReseult> GetDateFromServerAsync()
        {
            DateTime dateFromServer;
            TimeSpan localTimeOffset;
            
            
            using (var httpClient = new HttpClient())
            {
                HttpResponseMessage response = await httpClient.GetAsync(DATE_URL);
                response.EnsureSuccessStatusCode();
                
                var headers = response.Headers;
                
                if (!headers.TryGetValues("date", out var dateValues))
                    throw new Exception("Date header not found.");

                string dateHeader = dateValues.FirstOrDefault();
                if (string.IsNullOrEmpty(dateHeader))
                    throw new Exception("Date header not found.");
                
                dateFromServer = DateTime.ParseExact(dateHeader,
                    "ddd, dd MMM yyyy HH:mm:ss 'GMT'",
                    CultureInfo.InvariantCulture.DateTimeFormat,
                    DateTimeStyles.AssumeUniversal);
            }
            
            localTimeOffset = DateTime.Now - dateFromServer;

            
            return new ServerDateReseult()
            {
                ServerDate = dateFromServer,
                LocalTimeOffset = localTimeOffset,
            };
        }

#endregion
      
        
        
    }
}
