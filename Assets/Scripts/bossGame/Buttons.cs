using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Buttons : MonoBehaviour
{
    public delegate void LeftPush();
    public static LeftPush leftpush;
    public delegate void RightPush();
    public static RightPush rightpush;

    bool rightClicked = false;
    bool leftClicked = false;

    public void LeftButtonPushed()
    {
        leftClicked = true;
    }

    public void RightButtonPushed()
    {
        rightClicked = true;
    }

    public void LeftButtonNotPushed()
    {
        leftClicked = false;
    }

    public void RightButtonNotPushed()
    {
        rightClicked = false;
    }

    public void Update()
    {
        if (leftClicked) leftpush?.Invoke();
        if (rightClicked) rightpush?.Invoke();
    }
}
