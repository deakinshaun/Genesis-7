using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class TestCubeButton : MonoBehaviour
{
    public GameObject lightObject;
    public Material on;
    public Material off;
    public TextMeshProUGUI touchCountText;
    public TextMeshProUGUI buttonStatusText;

    public Button sceneButton1; // 引用场景切换按钮
    public Button sceneButton2; // 引用第二个场景切换按钮

    private bool lightOn = false;
    private int touchCount = 0;
    public string SceneName;

    private float delay = 2f;
    private float timeOfLastSwitch;
    private void Start()
    {        
        timeOfLastSwitch = Time.time;
    }

    void OnTriggerEnter(Collider other)
    {

        touchCount++;
        touchCountText.text = "Touch Count: " + touchCount.ToString();
        SceneManager.LoadScene(SceneName);
        if (Time.time - timeOfLastSwitch > delay)
        {
            SceneManager.LoadScene(SceneName);
            
            timeOfLastSwitch = Time.time;
        }
    }
}


