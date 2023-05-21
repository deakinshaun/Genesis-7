using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using UnityEngine.SceneManagement;

public class FadeToBlack : MonoBehaviour
{
    public Image blackScreen;
    public TextMeshProUGUI centerText;
    public float fadeDuration = 1f;

    private bool isFading = false;

    void OnTriggerEnter(Collider other)
    {
        isFading = true;
        Invoke("LoadScene0Scene", fadeDuration);
    }
    void LoadScene0Scene()
    {
        SceneManager.LoadScene("Scene0");
    }
    void Update()
    {
        if (isFading)
        {
            float alpha = blackScreen.color.a + Time.deltaTime / fadeDuration;
            blackScreen.color = new Color(0, 0, 0, alpha);
            centerText.color = new Color(centerText.color.r, centerText.color.g, centerText.color.b, alpha);

            if (alpha >= 1)
            {
                isFading = false;
            }
        }
    }
}
