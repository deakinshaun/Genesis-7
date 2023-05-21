using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class TestCubeButton : MonoBehaviour
{

    public string SceneName;

    private float delay = 2f;
    private float timeOfLastSwitch;
    private void Start()
    {        
        timeOfLastSwitch = Time.time;
    }

    void OnTriggerEnter(Collider other)
    {

        SceneManager.LoadScene(SceneName);
        if (Time.time - timeOfLastSwitch > delay)
        {
            SceneManager.LoadScene(SceneName);
            
            timeOfLastSwitch = Time.time;
        }
    }
}


