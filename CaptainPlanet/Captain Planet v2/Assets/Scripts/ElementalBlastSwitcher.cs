using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ElementalBlastSwitcher : MonoBehaviour
{
    public GameObject shoot;
    public GameObject elemental;
  
    void Start()
    {
        shoot.SetActive(false);
        elemental.SetActive(true);
    }

    public void enableShoot()
    {
        shoot.SetActive(true);
        elemental.SetActive(false);
    }

    public void disableShoot()
    {
        shoot.SetActive(false);
        elemental.SetActive(true);

    }
}
