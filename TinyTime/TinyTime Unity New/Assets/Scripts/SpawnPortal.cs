using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnPortal : MonoBehaviour
{
    public GameObject PortalIN;
    //public Vector3 spawnPosition = (0, 0, 0);

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.P))
        {
            OnSpawnPortal();
        }
    }

    public void OnSpawnPortal()
    {
        var RandPosition = new Vector3(Random.Range(-10.0f, 10.0f), 1, Random.Range(-10.0f, 10.0f));
        Instantiate(PortalIN, RandPosition, Quaternion.identity);
        Debug.Log("P pressed");
    }
}
