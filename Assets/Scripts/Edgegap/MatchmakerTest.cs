

using System;
using System.Collections;
using System.Net.Http;
using Mirror;
using UnityEngine;
using UnityEngine.Android;
using static Edgegap.MatchmakerManager;

namespace Edgegap
{
    public class MatchmakerTest : MonoBehaviour
    {
            [SerializeField] MatchmakerManager _matchmaker;
            [SerializeField] TicketData? currentTicket = null;
            [SerializeField] bool isWaiting = true;
            [SerializeField] bool isReady = false;
            [SerializeField] float waitingTimeSec = 5;
            [SerializeField] string mode = "casual";
            [SerializeField] int score = 0;
            [SerializeField] int defaultScore = 2000;

        // Start is called before the first frame update
        void Start()
        {
            _matchmaker = (MatchmakerManager)ScriptableObject.CreateInstance("MatchmakerManager");
            _matchmaker.OnStatusUpdate += ServerStatusUpdate;
            
        }

        // Update is called once per frame
        void Update()
        {
            
            if (currentTicket is not null)
            {
                if (currentTicket?.Connection?.Address != null && !isReady)
                {
                    isReady = true;
                    ConnectMatch();
                }

                if (!isWaiting && !isReady)
                {
                    RefreshTicket();
                    StartCoroutine(Waiting());
                }
            }

        }


        void OnDestroy()
        {

            if (currentTicket != null) 
                DeleteTicketClick();

        }


        /// <summary>
        /// This method is invoked by the "MatchmakingSystem" upon any status updates.
        /// It shows the status updates on the GUI and color code them based on their type (error or success)
        /// </summary>
        /// <param name="status"></param>
        /// <param name="isError"></param>
        private void ServerStatusUpdate(string status, bool isError)
        {
            Debug.Log(status);
        }

        [ContextMenu(nameof(CreateTicketClick))]
        public async void CreateTicketClick()
        {
            try
            {
                currentTicket = await _matchmaker.CreateTicket(score, mode);
                isWaiting = false;
            }
            catch (HttpRequestException httpEx)
            {
                _matchmaker.OnStatusUpdate?.Invoke($"Failed To Create Ticket, with message: \n{httpEx.Message}", true);

                currentTicket = null;
            }
        }

        [ContextMenu(nameof(DeleteTicketClick))]
        public async void DeleteTicketClick()
        {
            try
            {
                await _matchmaker.DeleteTicket(currentTicket?.Id);
            }
            catch (HttpRequestException httpEx)
            {
                _matchmaker.OnStatusUpdate?.Invoke($"Failed To Delete Ticket, with message: \n{httpEx.Message}", true);
            }
            finally
            {
                currentTicket = null;
            }
        }

        [ContextMenu(nameof(RefreshTicket))]
        public async void RefreshTicket()
        {
            try
            {
                Debug.Log("refresh");
                currentTicket = await _matchmaker.GetTicket(currentTicket?.Id);
            }
            catch (HttpRequestException httpEx)
            {
                _matchmaker.OnStatusUpdate?.Invoke($"Failed To Refresh Ticket, with message: \n{httpEx.Message}", true);
                currentTicket = null;
            }
        }

        [ContextMenu(nameof(ConnectMatch))]
        public void ConnectMatch()
        {
            try
            {
                var assignment = currentTicket?.Connection?.Address;

                _matchmaker.OnStatusUpdate?.Invoke("Server Is Ready For Connection, Starting The Game...", false);

                string[] networkComponents = assignment.Split(':');
                // InstanceFinder.TransportManager.Transport.SetClientAddress(networkComponents[0]);
                NetworkManager.singleton.networkAddress = networkComponents[0];

                if (ushort.TryParse(networkComponents[1], out ushort port))
                {
                    // InstanceFinder.TransportManager.Transport.SetPort(port);
                    ((TelepathyTransport)NetworkManager.singleton.transport).port = port;
                }
                else
                {
                    throw new Exception("port couldn't be parsed");
                }

                // InstanceFinder.ClientManager.StartConnection();
                NetworkManager.singleton.StartClient();
            }
            catch (Exception e)
            {
                _matchmaker.OnStatusUpdate?.Invoke($"Failed To Connect To Server, with message: \n{e.Message}", true);
                currentTicket = null;
                isWaiting = true;
                isReady = false;

            }
        }

        private void ValidateScore(string scoreStr)
        {
            if (int.TryParse(scoreStr, out int result))
            {
                score = result;
            }
            else if (!string.IsNullOrEmpty(scoreStr))
            {
                Debug.Log("using default value");
            }
        }

        IEnumerator Waiting()
        {
            isWaiting = true;
            yield return new WaitForSeconds(waitingTimeSec);
            isWaiting = false;
        }
        
        
        
    }
}
