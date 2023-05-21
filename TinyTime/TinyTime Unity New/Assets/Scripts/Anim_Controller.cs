using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Anim_Controller : MonoBehaviour
{
    public Animator cupAnim;
    //public Animator Cup;
    //public Animation Cup_Spill;
    //public Animation Cup;
    //public Animator Coffee_Anim;
    // Start is called before the first frame update
    void Start()
    {
        //Cup = GetComponent<Animation>();
        //foreach (AnimationState state in Cup)
        //{
        //    state.speed = -1f;
        //}
        //Coffee_Anim = gameObject.GetComponent<Animator>();
        //Cup = gameObject.GetComponent<Animator>();
        //Cup.speed = -1f;
        //cupAnim.speed = 0f;
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown("F"))
        {
            PlayForward();
        }
        if (Input.GetKeyDown("B"))
        {
            PlayBackward();
        }
        if (Input.GetKeyDown("O"))
        {
            Pause();
            Debug.Log("O was pressed");
        }


        //GetComponent<Animation>().Rewind();
        //GetComponent<Animation>().Play();
        //GetComponent<Animation>().Sample();
        //GetComponent<Animation>().Stop();
        //Coffee_Anim = gameObject.GetComponent<Animator>();
    }

    public void PlayForward()
    {
        cupAnim.speed = 1f;
    }

     public void PlayBackward()
    {
        cupAnim.speed = -1f;
    }

     public void Pause()
    {
        cupAnim.speed = 0f;
    }

    public void SpeedofAnim()
    {
        //Coffee_Anim.speed = -1f;
    }
    
    public void rewindCup()
    {

    }

    //public void Rewind(string Cup_Spill)
    //{
    // GetComponent<Animation>().Rewind();
    //rewinds animation clips
    //Debug.Log("I pressed rewinding animcations");
    //}
}
