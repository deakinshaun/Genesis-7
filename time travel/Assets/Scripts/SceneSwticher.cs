using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using TMPro;

public class SceneSwticher : MonoBehaviour
{
    public Button button1;
    public Button button2;
    public Image fadeImage;
    public TextMeshProUGUI transitionText;

    void Awake()
    {
        button1.onClick.AddListener(() => StartCoroutine(TransitionScene("Scene2")));
        button2.onClick.AddListener(() => StartCoroutine(TransitionScene("Scene1")));
    }

    IEnumerator TransitionScene(string sceneName)
    {
        transitionText.gameObject.SetActive(true);
        transitionText.text = "You are traversing through time and space.";
        float transitionTime = 2f;

        // Fade in text.
        for (float t = 0; t < transitionTime; t += Time.deltaTime)
        {
            Color textColor = transitionText.color;
            textColor.a = Mathf.Lerp(0, 1, t / transitionTime);
            transitionText.color = textColor;
            yield return null;
        }

        // Fade in image.
        for (float t = 0; t < transitionTime; t += Time.deltaTime)
        {
            Color color = fadeImage.color;
            color.a = Mathf.Lerp(0, 1, t / transitionTime);
            fadeImage.color = color;
            yield return null;
        }

        SceneManager.LoadScene(sceneName);
    }
}