using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Anim_Controller : MonoBehaviour
{
    
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        GetComponent<Animation>().Rewind();
        GetComponent<Animation>().Play();
        GetComponent<Animation>().Sample();
        GetComponent<Animation>().Stop();

    }

    //public void Rewind(string Cup_Spill)
    //{
    // GetComponent<Animation>().Rewind();
    //rewinds animation clips
    //Debug.Log("I pressed rewinding animcations");
    //}
}
