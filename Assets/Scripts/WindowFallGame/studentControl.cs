using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class studentControl : MonoBehaviour
{
    public static event Action<float> OnMove;
    private float currentX = 0f;
    private float xDirection = 0f;

    // Update is called once per frame
    private void Update()
    {
#if UNITY_EDITOR
        OnMove?.Invoke(Input.GetAxis("Horizontal"));
#endif
#if UNITY_ANDROID
        GetTouchInput();
#endif
    }

    private void GetTouchInput()
    {
        if (Input.touchCount > 0)
        {
            Touch touch = Input.GetTouch(0);

            switch (touch.phase)
            {
                case TouchPhase.Moved:
                    xDirection = touch.position.x > currentX ? 1f : -1f;
                    
                    break;
                default:
                    currentX = touch.position.x;
                    xDirection = 0f;
                    break;
            }

            OnMove?.Invoke(xDirection);
        }
    }
}