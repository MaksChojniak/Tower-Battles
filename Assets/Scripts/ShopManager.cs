using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.Threading;
using System.Threading.Tasks;

public class ShopManager : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public ScrollRect scrollRect;


    [ContextMenu(nameof(CoinsScrollRect))]
    public void CoinsScrollRect()
    {
        //scrollRect.verticalNormalizedPosition = 0f;
        ScrollBarAnimation(0f);
    }

    [ContextMenu(nameof(DailyRewardScrollRect))]
    public void DailyRewardScrollRect()
    {

        // scrollRect.verticalNormalizedPosition = Mathf.Lerp(1f, 0.275f, );
        ScrollBarAnimation(0.275f);


    }


    async void ScrollBarAnimation(float targetPosition)
    {

        while ( Mathf.Abs(scrollRect.verticalNormalizedPosition - targetPosition) >= 0.05f )
        {
            scrollRect.verticalNormalizedPosition = Mathf.Lerp(scrollRect.verticalNormalizedPosition, targetPosition, 0.05f);

            await Task.Yield();
        }

        scrollRect.verticalNormalizedPosition = targetPosition;
    }
}
