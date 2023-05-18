using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GestureEventProcessor : MonoBehaviour
{
    public GameObject playerEntitySpawnLocation;

    public GameObject portalPrefab;

    public GameObject projectilePrefab;

    public GameObject wallPrefab;

    private int gestureCount;


    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void OnGestureCompleted(GestureCompletionData gestureCompletionData)
    {
        gestureCount++;

        Debug.Log("GESTURE_COUNT: " + gestureCount);
        Debug.Log("GESTURE_ID: " + gestureCompletionData.gestureID);
        Debug.Log("NAME->" + gestureCompletionData.gestureName);
        Debug.Log("SIMILARITY->" + gestureCompletionData.similarity);


        if (gestureCompletionData.gestureID < 0)
        {
            return;
        }
        if (gestureCompletionData.similarity >= 0.5)
        {
            Debug.Log("Simlarity above 0.5: ");
            if (gestureCompletionData.gestureName == "Portal")
            {
                Instantiate(portalPrefab, playerEntitySpawnLocation.transform.position, Quaternion.identity);
            }

            if (gestureCompletionData.gestureName == "Projectile")
            {
                Instantiate(projectilePrefab, playerEntitySpawnLocation.transform.position, Quaternion.identity);
            }

            if (gestureCompletionData.gestureName == "Wall")
            {
                Instantiate(wallPrefab, playerEntitySpawnLocation.transform.position, Quaternion.identity);
            }

        }
    }

}
