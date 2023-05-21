using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using UnityEngine.UI;
using TMPro;


public class ARTracking : MonoBehaviour
{
    public Image blackScreen;
    public TextMeshProUGUI messageText;
    public float transitionTime = 3f;

    private ARTrackedImageManager trackedImageManager;

    public Button button1; 
    public Button button2;
    private IEnumerator FadeInCoroutine()
    {
        float t = 0f;
        while (t < transitionTime)
        {
            t += Time.deltaTime;
            float alpha = Mathf.Lerp(1, 0, t / transitionTime);
            blackScreen.color = new Color(0, 0, 0, alpha);
            messageText.color = new Color(messageText.color.r, messageText.color.g, messageText.color.b, 1 - alpha);
            yield return null;
        }
    }

    private IEnumerator FadeOutCoroutine()
    {
        float t = 0f;
        while (t < transitionTime)
        {
            t += Time.deltaTime;
            float alpha = Mathf.Lerp(0, 1, t / transitionTime);
            blackScreen.color = new Color(0, 0, 0, alpha);
            messageText.color = new Color(messageText.color.r, messageText.color.g, messageText.color.b, alpha);
            yield return null;
        }
    }

    // 当AR识别预制图片并生成模型时调用
    public void OnModelGenerated()
    {
        StartCoroutine(FadeOutCoroutine());
        StartCoroutine(ShowMessageCoroutine());
        
        Invoke("ShowButtons", transitionTime * 2);
    }

    private IEnumerator ShowMessageCoroutine()
    {
        
        yield return new WaitForSeconds(transitionTime);
        StartCoroutine(FadeInCoroutine());
    }

    private void ShowButtons()
    {
        button1.gameObject.SetActive(true);
        button2.gameObject.SetActive(true);
    }
    void Awake()
    {
        trackedImageManager = FindObjectOfType<ARTrackedImageManager>();
        button1.gameObject.SetActive(false);
        button2.gameObject.SetActive(false);
    }

    void OnEnable()
    {
        trackedImageManager.trackedImagesChanged += OnTrackedImagesChanged;
    }

    void OnDisable()
    {
        trackedImageManager.trackedImagesChanged -= OnTrackedImagesChanged;
    }

    private void OnTrackedImagesChanged(ARTrackedImagesChangedEventArgs eventArgs)
    {
        foreach (ARTrackedImage trackedImage in eventArgs.added)
        {
            // 如果识别到的是你的预制图片
            if (trackedImage.referenceImage.name == "ReferenceImg")
            {
                OnModelGenerated();
            }
        }
    }
}