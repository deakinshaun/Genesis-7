using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ElementalBlastSwitcher : MonoBehaviour
{
    public GameObject shoot;

    public GameObject elemental;
    // Start is called before the first frame update
    void Start()
    {
        //elemental.SetActive(false);
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

    // Update is called once per frame
    void Update()
    {
        
    }
}
