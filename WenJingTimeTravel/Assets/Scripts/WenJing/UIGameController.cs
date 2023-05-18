using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class UIGameController : MonoBehaviour
{
    // Start is called before the first frame update

    Vector3 labelPosition = new Vector3(-670f, 350f, 0f);

    // Update is called once per frame
    void Update()
    {
        GameObject[] gpsObjects = GameObject.FindGameObjectsWithTag("Player");
        if(gpsObjects.Length > 0)
        {
            for(int i = 0; i < gpsObjects.Length; i++)
            {
                if (i == 0)
                {
                    gpsObjects[i].transform.localPosition = labelPosition;
                }
                else
                {
                    gpsObjects[i].transform.localPosition = new Vector3(gpsObjects.Length * 280 - 670f, 350f, 0f);
                }

            }
        }
        
    }
}
