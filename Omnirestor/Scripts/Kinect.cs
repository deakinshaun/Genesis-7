using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Kinect : MonoBehaviour
{
    public void PlayScene()
    {
        SceneManager.LoadScene("Kinect");
    }
}
