using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Buttons : MonoBehaviour
{
    public delegate void LeftPush();
    public static LeftPush leftpush;
    public delegate void RightPush();
    public static RightPush rightpush;

    [SerializeField] private GameObject player;
    private Animator anim;

    bool rightClicked = false;
    bool leftClicked = false;

    public void LeftButtonPushed()
    {
        leftClicked = true;
        anim.SetBool("isRunning", true);
    }

    public void RightButtonPushed()
    {
        rightClicked = true;
        anim.SetBool("isRunning", true);
    }

    public void LeftButtonNotPushed()
    {
        leftClicked = false;
        anim.SetBool("isRunning", false);
    }

    public void RightButtonNotPushed()
    {
        rightClicked = false;
        anim.SetBool("isRunning", false);
    }
    public void Start()
    {
        anim =  player.GetComponentInChildren<Animator>();
    }

    public void Update()
    {
        if (leftClicked) leftpush?.Invoke();
        if (rightClicked) rightpush?.Invoke();
    }
}
