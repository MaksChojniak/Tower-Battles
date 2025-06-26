using System.Collections;
using System.Collections.Generic;
using UI.Animations;
using UnityEngine;
using UnityEngine.UI;

public class FloatingBannerManager : MonoBehaviour
{

    [SerializeField] GameObject pageCounter;
    GameObject[] pageCounters;

    [SerializeField] GameObject[] banners;
    [SerializeField] Banner[] bannerAnimations;

    [SerializeField] float pageInterval = 5f; // Time in seconds to switch pages automatically
    private int currentPage;
    private float pageTimer = 0f;

    // Start is called before the first frame update

    void Awake()
    {
        bannerAnimations = new Banner[banners.Length];
        for (int i = 0; i < banners.Length; i++)
            bannerAnimations[i] = banners[i].GetComponent<Banner>();

    }

    void Start()
    {
        if(banners.Length != pageCounter.transform.childCount)
        {
            Debug.LogError("Number of banners does not match the number of page buttons in FloatingBannerManager.");
            return;
        }
        if (banners.Length > 0)
        {
            currentPage = -1;

            float l = pageCounter.GetComponent<HorizontalLayoutGroup>().padding.left;
            float r = pageCounter.GetComponent<HorizontalLayoutGroup>().padding.right;
            float s = pageCounter.GetComponent<HorizontalLayoutGroup>().spacing;

            RectTransform rectTransform = pageCounter.GetComponent<RectTransform>();
            rectTransform.sizeDelta = new Vector2(22.5f * banners.Length + l + r + s * (banners.Length - 1), rectTransform.sizeDelta.y);

            // Instantiate page buttons
            pageCounters = new GameObject[banners.Length];
            for (int i = 0; i < banners.Length; i++)
            {
                pageCounters[i] = pageCounter.transform.GetChild(i).gameObject;
                pageCounters[i].gameObject.GetComponent<CanvasGroup>().alpha = 0.2f;
            }

            // Deactivate all banners first
            for (int i = 0; i < banners.Length; i++)
                banners[i].SetActive(false);

            ChangePage(0);
            pageTimer = 0f; //Start timer at 0
        }
        else
        {
            Debug.LogWarning("No page buttons assigned in FloatingBannerManager.");
            return;
        }
    }
    // Update is called once per frame
    void Update()
    {
        if (banners.Length == 0) return;

        pageTimer += Time.deltaTime;
        if (pageTimer >= pageInterval)
        {
            pageTimer = 0f;
            int nextPage = (currentPage + 1) % banners.Length;
            ChangePage(nextPage);
        }
    }
    public void OnPageButtonClick(int pageIndex)
    {
        ChangePage(pageIndex);
        pageTimer = 0f; // Reset the timer when a button is clicked
    }
    public void TEST()
    {
        int nextPage = currentPage + 1;
        ChangePage(nextPage >= banners.Length ? 0 : nextPage);
        pageTimer = 0f; // Reset the timer when testing
    }



    void ChangePage(int pageIndex) => StartCoroutine(ChangePageCoroutine(pageIndex));

    IEnumerator ChangePageCoroutine(int pageIndex)
    {
        if (pageIndex < 0 || pageIndex >= banners.Length)
        {
            Debug.LogWarning("Invalid page index: " + pageIndex);
            currentPage = -1;
            yield break;
        }

        if (pageIndex == currentPage)
        {
            // Handle double-click on the same page
            if (bannerAnimations[currentPage] != null && bannerAnimations[currentPage].fadeInAnimation != null)
            {
                Debug.Log("Double-click detected on page: " + pageIndex);
                yield break;
            }
        }

        
        if (currentPage != -1)
        {
            pageCounters[currentPage].gameObject.GetComponent<CanvasGroup>().alpha = 0.2f;
            bannerAnimations[currentPage].fadeOutAnimation.PlayAnimation();
            // yield return bannerAnimations[currentPage].fadeOutAnimation.Wait();
            banners[currentPage].SetActive(false);
        }

        pageCounters[pageIndex].gameObject.GetComponent<CanvasGroup>().alpha = 1f;
        banners[pageIndex].SetActive(true);
        bannerAnimations[pageIndex].fadeInAnimation.PlayAnimation();
        // yield return bannerAnimations[pageIndex].fadeInAnimation.Wait();


        currentPage = pageIndex;
    }
}
