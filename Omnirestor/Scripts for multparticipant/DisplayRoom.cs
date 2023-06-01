using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DisplayRoom : MonoBehaviour

{
    private string roomName;

    public string GetName()
    {
        return roomName;
    }

    public void SetName(string name)
    {
        roomName = name;
    }

    public void Display(string message)
    {
        GetComponentInChildren<Text>().text = message;
    }
}
