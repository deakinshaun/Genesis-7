using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using Photon.Bolt;

public class Drawing : Photon.Bolt.EntityBehaviour<IPlayerState1>
{
    public GameObject drawPoint;
    public GameObject drawSpawn;

    public override void Attached()
    {
        state.OnDraw = Draw;
        state.OnDrawR = DrawR;
    }
    public void Draw()
    {
        {
            Instantiate(drawPoint, drawSpawn.transform);
        }
    }

    public void DrawR()
    {
            drawSpawn.transform.DetachChildren();
    }

    public void drawingPress()
    {
        if (entity.IsOwner)
        {
            state.Draw();
        } 
    }

    public void drawingRelease()
    {
        if (entity.IsOwner)
        {
            state.DrawR();
        }
    }
}
