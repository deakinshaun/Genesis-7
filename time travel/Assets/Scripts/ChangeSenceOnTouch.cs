using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ChangeSenceOnTouch : MonoBehaviour
{
    private int touchCount = 0;

    private void OnTriggerEnter(Collider other)
    {
        touchCount++;

        if (touchCount % 2 == 1)
        {
            SceneManager.LoadScene("VirtulSceneToStereo");
        }
        else
        {
            SceneManager.LoadScene("TestScenes");
        }
    }
}
