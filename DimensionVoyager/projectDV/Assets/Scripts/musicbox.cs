using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class musicbox : MonoBehaviour
{
    public GameObject musicobject;
    public AudioSource audioSource;
    private void Start()
    {
        if (audioSource == null)
        {
            audioSource = gameObject.GetComponent<AudioSource>();
        }
    }

    public void PlayMusic()
    {
        audioSource.Play();
    }
    public void StopMusic()
    {
        audioSource.Stop();
    }
}
