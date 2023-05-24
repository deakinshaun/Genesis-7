using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class activeWit : MonoBehaviour
{
    public List<GameObject> shapes;

    public void SetColor(string[] response)
    {
        string color = response[0];
        string shape = response[1];

        GameObject targetShape = shapes.Find(x => x.name == response[1]);
        
        switch(color)
        {
            case "red":
                targetShape.GetComponent<Renderer>().material.color = Color.red;
                break;
        }
    }
}
