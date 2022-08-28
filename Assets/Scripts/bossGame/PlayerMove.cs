using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerMove : MonoBehaviour
{
    private Rigidbody2D rigidbody;

    private float distanceX = 0f;
    private float speed = 15f;

    private void Move(float _distanceX)
    {
        distanceX = _distanceX;
    }

    private void OnEnable()
    {
        PlayerControl.OnMove += Move;
    }

    private void OnDisable()
    {
        PlayerControl.OnMove -= Move;
    }

    private void FixedUpdate()
    {
        float positionX = rigidbody.position.x + distanceX * speed * Time.fixedDeltaTime;

        rigidbody.MovePosition(new Vector2(positionX, rigidbody.position.y));
    }

    private void Awake()
    {
        rigidbody = GetComponent<Rigidbody2D>();
    }
}
