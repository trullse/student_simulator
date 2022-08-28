using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class PlayerControl : MonoBehaviour
{
    public static event Action<float> OnMove;
    private Vector2 startPosition = Vector2.zero;
    private float dragDirection = 0f;

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
                    dragDirection = touch.position.x > startPosition.x ? 1f : -1f;
                    break;
                default:
                    startPosition = touch.position;
                    dragDirection = 0f;
                    break;
            }

            OnMove?.Invoke(dragDirection);
        }
    }
}
