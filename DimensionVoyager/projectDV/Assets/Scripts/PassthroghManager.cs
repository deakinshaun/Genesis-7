using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class PassthroghManager : MonoBehaviour
{
    public OVRPassthroughLayer passthroughLayer;
    public GameObject passthrougCanvas;
    public void StartPassthrough()
    {
        passthroughLayer.hidden = !passthroughLayer.hidden;

    }

    public void showupCanvas()
    {
        passthrougCanvas.SetActive(!passthrougCanvas.activeSelf);
    }
}
