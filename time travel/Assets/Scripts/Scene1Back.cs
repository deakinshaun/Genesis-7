using UnityEngine;
using UnityEngine.UI;
using TMPro;
using UnityEngine.SceneManagement;
using System.Collections;

public class Scene1Back : MonoBehaviour
{
    public Image blackScreen;
    public TextMeshProUGUI messageText; 
    public float waitTime = 2f; 

    public void SwitchScene()
    {
        StartCoroutine(SwitchSceneCoroutine());
    }

    IEnumerator SwitchSceneCoroutine()
    {
 
        float fadeSpeed = 0.005f;
        messageText.text = "You are back in the real world!";
        messageText.color = new Color(messageText.color.r, messageText.color.g, messageText.color.b, 0);

        while (blackScreen.color.a < 1.0f)
        {
            blackScreen.color += new Color(0, 0, 0, fadeSpeed);
            messageText.color += new Color(0, 0, 0, fadeSpeed);
            yield return null; 
        }


     
        yield return new WaitForSeconds(waitTime);

      
        SceneManager.LoadScene("Scene0");
    }
}