using System;
using System.Threading.Tasks;
using MMK.ScriptableObjects;
using UnityEngine;

namespace UI
{

    public class ConfirmationInvoker : MonoBehaviour
    {

        public void ShowConfirmation(string contentText, Func<Task> onAccept)
        {
            Confirmation.ShowOffert?.Invoke(
                contentText,
                OnAccept);

            async void OnAccept(Func<Task> closePanel)
            {
                Debug.Log("Hello World 1");
                await onAccept.Invoke();
            
                await Task.Yield();
            
                // closePanel?.Invoke();
                await closePanel.Invoke();
            }
            
        }
        
        public void ShowConfirmation(string contentText, Tower tower, Func<Task> onAccept)
        {
            Confirmation.ShowTower?.Invoke(
                contentText,
                async (closePanel) => OnAccept(closePanel),
                tower);
            
            async void OnAccept(Func<Task> closePanel)
            {
                await onAccept.Invoke();
            
                await Task.Yield();
            
                // closePanel?.Invoke();
                await closePanel.Invoke();
            }
            
        }
        
        public void ShowConfirmation(string contentText, TowerSkin skin, Func<Task> onAccept)
        {
            Tower tower = Tower.GetTowerBySkinID(skin.ID);
            
            Confirmation.ShowSkin?.Invoke(
                contentText,
                async (closePanel) => OnAccept(closePanel),
                tower, skin);

            async void OnAccept(Func<Task> closePanel)
            {
                await onAccept.Invoke();
            
                await Task.Yield();
            
                // closePanel?.Invoke();
                await closePanel.Invoke();
            }
            
        }
        
    }
}
