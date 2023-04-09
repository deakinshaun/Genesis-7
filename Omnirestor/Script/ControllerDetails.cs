using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Runtime.Serialization.Formatters.Binary;
using System.IO;
using System;

[Serializable]

public class ControllerDetails
{

    public string id;
    public float gyrox;
    public float gyroy;
    public float gyroz;
    public float gyrow;
    public bool center;
    public bool trigger;
    public bool left;
    public bool right;
    public bool forward;
   




    public ControllerDetails(Quaternion ori, bool centre, bool trig, bool lef, bool righ, bool forw)
    {
        id = getID ();
        gyrox = ori.x;
        gyroy = ori.y;
        gyroz = ori.z;
        gyrow = ori.w;
        center = centre;
        trigger = trig;
        left = lef;
        right = righ;
        forward = forw;
       


    }

    public byte[] serialize()
    {
        BinaryFormatter bf = new BinaryFormatter();
        MemoryStream ms = new MemoryStream();
        bf.Serialize(ms, this);
        return ms.ToArray();
    }

    public static ControllerDetails deserialize(byte[] b)
    {
        BinaryFormatter formatter = new BinaryFormatter();
        ControllerDetails cd = (ControllerDetails)formatter.Deserialize(new MemoryStream(b));
        return cd;
    }

    public static string getID()
    {
        return SystemInfo.deviceUniqueIdentifier;
    }
    
}