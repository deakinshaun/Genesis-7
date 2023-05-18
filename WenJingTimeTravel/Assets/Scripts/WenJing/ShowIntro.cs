using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShowIntro : MonoBehaviour
{
    public GameObject TangSanCai;
    public GameObject TscUI;
    public GameObject QingHua;
    public GameObject QingHuaUI;


    private void OnTriggerEnter(Collider other)
    {
        //print(other.gameObject.tag);
        if (other.gameObject.tag == "tang")
        {
            TangSanCai.SetActive(true);
            TscUI.SetActive(true);
        }

        if (other.gameObject.tag == "qinghua")
        {
            QingHua.SetActive(true);
            QingHuaUI.SetActive(true);
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.gameObject.tag == "tang")
        {
            TangSanCai.SetActive(false);
            TscUI.SetActive(false);
        }
        if (other.gameObject.tag == "qinghua")
        {
            QingHua.SetActive(false);
            QingHuaUI.SetActive(false);
        }
    }

}
