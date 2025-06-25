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
        if (banners.Length > 0)
        {
            currentPage = 0;

            float l = pageCounter.GetComponent<HorizontalLayoutGroup>().padding.left;
            float r = pageCounter.GetComponent<HorizontalLayoutGroup>().padding.right;
            float s = pageCounter.GetComponent<HorizontalLayoutGroup>().spacing;

            RectTransform rectTransform = pageCounter.GetComponent<RectTransform>();
            rectTransform.sizeDelta = new Vector2(22.5f * banners.Length + l + r + s * (banners.Length - 1), rectTransform.sizeDelta.y);

            // Instantiate page buttons
            pageCounters = new GameObject[banners.Length];
            pageCounters[0] = pageCounter.transform.GetChild(0).gameObject;
            pageCounters[0].gameObject.GetComponent<CanvasGroup>().alpha = 0.2f;
            for (int i = 1; i < banners.Length; i++)
                pageCounters[i] = Instantiate(pageCounters[0], pageCounter.transform);


            // Add listeners for all page buttons
            for (int i = 0; i < banners.Length; i++)
            {
                int pageIndex = i; // Capture the correct index
                pageCounters[i].GetComponent<Button>().onClick.RemoveAllListeners();
                pageCounters[i].gameObject.GetComponent<Button>().onClick.AddListener(() => OnPageButtonClick(pageIndex));
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
            currentPage = 0;
            yield break;
        }


        pageCounters[currentPage].gameObject.GetComponent<CanvasGroup>().alpha = 0.2f;
        pageCounters[pageIndex].gameObject.GetComponent<CanvasGroup>().alpha = 1f;

        Debug.Log(bannerAnimations[currentPage]);
        Debug.Log(bannerAnimations[currentPage].fadeOutAnimation);
        Debug.Log(bannerAnimations[currentPage].fadeOutAnimation.animationName);

        bannerAnimations[currentPage].fadeOutAnimation.PlayAnimation();
        // yield return bannerAnimations[currentPage].fadeOutAnimation.Wait();
        banners[currentPage].SetActive(false);


        banners[pageIndex].SetActive(true);
        bannerAnimations[pageIndex].fadeInAnimation.PlayAnimation();
        // yield return bannerAnimations[pageIndex].fadeInAnimation.Wait();

        currentPage = pageIndex;
    }
}
