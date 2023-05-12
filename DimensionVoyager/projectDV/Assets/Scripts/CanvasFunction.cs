using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class CanvasFunction : MonoBehaviour
{
    // click button to quit the application
    public void Quit()
    {
        Application.Quit();
    }

    public void SwitchSceneMulti()
    {
        SceneManager.LoadScene("Multi-user");
    }

    public void SwitchSceneVirtual()
    {
        SceneManager.LoadScene("VirtualWorld");
    }

    public void SwitchSceneMR()
    {
        SceneManager.LoadScene("MR");
    }
}
