using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class PlayerMove : MonoBehaviour
{
    private Rigidbody2D rigidbody;
    public delegate void OnSceneEnd();
    public static OnSceneEnd onSceneEnd;

    private float distanceX = 0f;
    private float speed = 5f;
    [SerializeField] int lives = 3;

    private Vector3 screenLeft, screenRight;

    private void Start()
    {
        screenLeft = Camera.main.ViewportToWorldPoint(new Vector2(0, 0));
        screenRight = Camera.main.ViewportToWorldPoint(new Vector2(1, 1));
    }

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

        if (positionX < screenRight.x && positionX > screenLeft.x)
        {
            rigidbody.MovePosition(new Vector2(positionX, rigidbody.position.y));
        }
        
    }

    private void Awake()
    {
        rigidbody = GetComponent<Rigidbody2D>();
    }

    private void OnTriggerEnter2D(Collider2D other)
    {
        Destroy(other.gameObject);
        --lives;
        if (lives == 0)
        {
            //вызов анимации смерти, если такая будет

            onSceneEnd?.Invoke();
            //StartCoroutine(EndWait());
            
        }
    }

    IEnumerator EndWait()
    {
        yield return new WaitForSeconds(1);
        
        SceneManager.LoadScene("LabFailed");
    }
}
