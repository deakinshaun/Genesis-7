using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScaleIndicator : MonoBehaviour
{
    private int maxValue;
    private int value;
    public Material indicatorOffMat;
    public Material indicatorOnMat;

    // Start is called before the first frame update
    void Start()
    {
        maxValue = transform.childCount;
        value = 0;
    }

    void updateIndicators()
    {
        for (int i = 0; i < transform.childCount; i++)
        {
            if (i < value) transform.GetChild(i).GetComponent<MeshRenderer>().material = indicatorOnMat;
            else transform.GetChild(i).GetComponent<MeshRenderer>().material = indicatorOffMat;
        }
    }

    public void increaseValue()
    {
        if (value < maxValue)
        {
            value++;
            updateIndicators();
        }
    }

    public void decreaseValue()
    {
        if (value > 0)
        {
            value--;
            updateIndicators();
        }
    }
}
