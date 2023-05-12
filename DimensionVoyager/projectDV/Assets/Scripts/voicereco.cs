using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using UnityEditor;
public class voicereco : MonoBehaviour
{
    public Transform head;
    public GameObject Mymenu;
    public float spawnDistance = 1.5f;
    [SerializeField]
    private TextMeshPro text;

    public void editMenu(string[] values)
    {
        if (values[0] == "open")
        {
            Mymenu.SetActive(true);
            Mymenu.transform.position = head.position + new Vector3(head.forward.x, 0, head.forward.z).normalized * spawnDistance;
            Mymenu.transform.LookAt(new Vector3(head.position.x, Mymenu.transform.position.y, head.position.z));
            Mymenu.transform.forward *= -1;
            text.text = "open successed";
        }
        else if (values[0] == "close")
        {
            Mymenu.SetActive(false);
            text.text = "close successed";
        }
        else
        {
            text.text = "it's not working";
        }
    }

}
