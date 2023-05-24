using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class PortalScene : MonoBehaviour
{
    
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    
    void OnTriggerEnter (Collider other)
    {
        Debug.Log("Camera is in trigger :))");
        //SceneManager.LoadScene("Example_World_1");
        //int nextSceneIndex = Random.Range(0, 4);
        //SceneManager.LoadScene(nextSceneIndex, LoadSceneMode.Single);

        int nextSceneIndex = Random.Range(0, 4);
        int CurrentScene = SceneManager.GetActiveScene().buildIndex;
        if (nextSceneIndex != CurrentScene)
        {
            SceneManager.LoadScene(nextSceneIndex, LoadSceneMode.Single);
        }
        else
        {
            Debug.Log("Cannot teleport to same scene");
        }
    }
}
