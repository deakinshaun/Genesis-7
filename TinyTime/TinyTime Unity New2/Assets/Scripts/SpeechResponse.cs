using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;
using UnityEngine.Windows.Speech;

public class SpeechResponse : MonoBehaviour
{
    [SerializeField]
    private Rigidbody orangePrefab;
    [SerializeField]
    private Transform orangePoint;

    public AudioSource source;
    public AudioClip clip;

    private Dictionary<string, Action> keywordActions = new Dictionary<string, Action>();
    private KeywordRecognizer keywordRecognizer;

    // Start is called before the first frame update
    void Start()
    {
        //keywordActions.Add("orange", source.PlayOneShot(clip));
        keywordActions.Add("orange", spawn);

        keywordRecognizer = new KeywordRecognizer(keywordActions.Keys.ToArray());
        keywordRecognizer.OnPhraseRecognized += OnKeywordsRecognized;
        keywordRecognizer.Start();
    }

    private void spawn()
    {
        var Orange = Instantiate(orangePrefab, orangePoint.position, orangePoint.rotation);
    }

    private void OnKeywordsRecognized(PhraseRecognizedEventArgs args)
    {
        Debug.Log("Keyword: " + args.text);
        keywordActions[args.text].Invoke();
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
