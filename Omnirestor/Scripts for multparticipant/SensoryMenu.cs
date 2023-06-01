using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SensoryMenu : MonoBehaviour
{
    public void PlayScene()
    {
        SceneManager.LoadScene("SensoryFeedback");
    }

}