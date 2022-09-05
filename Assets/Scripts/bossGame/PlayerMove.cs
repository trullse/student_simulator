using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using TMPro;


public class PlayerMove : MonoBehaviour
{
    private Rigidbody2D _rigidbody;
    public delegate void OnSceneEnd();
    public static OnSceneEnd onSceneEnd;

    private float speed = 5f;
    [SerializeField] int lives = 3;
    [SerializeField] int timeToSurvive = 61;
    private bool isDead = false;
    private int money;

    private Vector3 screenLeft, screenRight;
    private float objectWidth;
    private bool facingRight = false;
    

    private void Start()
    {
        screenLeft = Camera.main.ViewportToWorldPoint(new Vector2(0f, 0f));
        screenRight = Camera.main.ViewportToWorldPoint(new Vector2(1f, 1f));
        objectWidth = transform.GetComponent<SpriteRenderer>().bounds.size.x / 2;
        Debug.Log("object width " + objectWidth);
        money = PlayerPrefs.GetInt("money");
        StartCoroutine(WinGame());
    }

    IEnumerator WinGame()
    {
        yield return new WaitForSeconds(timeToSurvive);
        
        SceneResult();
    }

    private void MoveLeft()
    {
        if (facingRight)
            Flip();
        float positionX = _rigidbody.position.x - speed * Time.fixedDeltaTime;
        if (positionX > screenLeft.x + objectWidth)
        {
            _rigidbody.MovePosition(new Vector2(positionX, _rigidbody.position.y));
        }
    }

    private void MoveRight()
    {
        if (!facingRight)
            Flip();
        float positionX = _rigidbody.position.x + speed * Time.fixedDeltaTime;
        if (positionX < screenRight.x - objectWidth)
        {
            _rigidbody.MovePosition(new Vector2(positionX, _rigidbody.position.y));
        }
    }

    void Flip()
    {
        facingRight = !facingRight;
        Vector3 Scaler = transform.localScale;
        Scaler.x *= -1;
        transform.localScale = Scaler;
    }

    private void OnEnable()
    {
        Buttons.leftpush += MoveLeft;
        Buttons.rightpush += MoveRight;
    }

    private void OnDisable()
    {
        Buttons.leftpush -= MoveLeft;
        Buttons.rightpush -= MoveRight;
    }

    private void Awake()
    {
        _rigidbody = GetComponent<Rigidbody2D>();
    }

    private void OnTriggerEnter2D(Collider2D other)
    {
        if (other.gameObject.tag == "coin")
        {
            Destroy(other.gameObject);
            ++money;
        }
        else if (other.gameObject.tag == "enemy")
        {
            Destroy(other.gameObject);
            --lives;
            if (lives == 0)
            {
                isDead = true;

                SceneResult();
            }
        }        
    }

    private void SceneResult()
    {
        onSceneEnd?.Invoke();
        string sceneName = isDead ? "LabFailed" : "LabPassed";
        if (!isDead)
        {
            money += 40;
            PlayerPrefs.SetFloat("study", 1f);
        }

        int delta = money - PlayerPrefs.GetInt("money");
        PlayerPrefs.SetInt("delta", delta);
        PlayerPrefs.SetInt("money", money);
        StartCoroutine(EndWait(sceneName));
    }

    IEnumerator EndWait(string sceneName)
    {
        yield return new WaitForSeconds(1);
        
        SceneManager.LoadScene(sceneName);
    }
}
