using System;
using System.Globalization;
using System.Linq;
using System.Net;
using System.Net.Http;
using System.Threading.Tasks;
using UI.Battlepass;

namespace MMK
{

    public class ServerDateReseult
    {
        public DateTime ServerDate;
        public TimeSpan LocalTimeOffset;
    }
    
    
    public static class ServerDate
    {
        
        
        #region Date/Time

        const string DATE_URL =  "http://www.google.com";
        
        public static ServerDateReseult GetDateFromServer()
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
        
        public async static Task<ServerDateReseult> GetDateFromServerAsync()
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
