using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class DisplayUI : MonoBehaviour
{

    public TextMeshProUGUI UIElement;


    private void Start()
    {
        UIElement.gameObject.SetActive(false);
    }

    private void OnTriggerEnter(Collider other)
    {
        UIElement.gameObject.SetActive(true);
    }
}
