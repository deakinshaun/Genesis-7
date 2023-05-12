using Oculus.Interaction;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
public class PoseDetector : MonoBehaviour
{
    public List<ActiveStateSelector> poses;
    public TextMeshPro text;
    void Start()
    {
        foreach (var pose in poses)
        {
            pose.WhenSelected += () => SetTextToPoseName (pose.gameObject.name);
            pose.WhenUnselected += () => SetTextToPoseName ("");
        }
    }

    private void SetTextToPoseName(string newText)
    {
        text.text = newText;
    }
}
