using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class studentMove : MonoBehaviour
{

    public float speed;
    public float waiting;
    private float moveInput;
    private SpriteRenderer studentRenderer;
    public GameObject escapePanel;
    public GameObject failPanel;
    public GameObject birds;

    private Rigidbody2D fallingBody;

    void Start()
    {
        fallingBody = GetComponent<Rigidbody2D>();
        studentRenderer = GetComponent<SpriteRenderer>();
    }


    private void OnTriggerEnter2D(Collider2D other)
    {
        if(other.tag == "ground")
        {
            StartCoroutine(IntroWait());
            studentRenderer.color = new Color(1f, 1f, 1f, 0f);
            Destroy(birds);

            this.GetComponent<Transform>().localScale = new Vector2(0, 0);
            
            

            PlayerPrefs.SetInt("money", 0);
            PlayerPrefs.SetFloat("sleep", 1f);
            PlayerPrefs.SetFloat("food", 1f);
            PlayerPrefs.SetFloat("toilet", 1f);
            PlayerPrefs.SetFloat("study", 1f);


            
            //     р с р    м ю д н    я д е к ю р э    окщепопетя    я     н а м с к е м х е л    б я е ц н 
        }

        if (other.tag == "Bird")
        {

            Destroy(birds);
            Destroy(GameObject.Find("poolWithBalls").gameObject);

            failPanel.SetActive(true);
            Destroy(this.gameObject);
        }

    }


    void Update()
    {
        //moveInput = Input.GetAxis("Horizontal");
        fallingBody.velocity = new Vector2(moveInput * speed, fallingBody.velocity.y);
        if (fallingBody.position.x >= 2.75f) fallingBody.position = new Vector2(2.75f, fallingBody.position.y);
        if (fallingBody.position.x <= -2.75f) fallingBody.position = new Vector2(-2.75f, fallingBody.position.y);
        fallingBody.rotation = fallingBody.velocity.x * 5f;
    }


    IEnumerator IntroWait()
    {
        yield return new WaitForSeconds(waiting);
        escapePanel.SetActive(true);
        GameObject _balls = GameObject.Find("poolWithBalls");
        
        Destroy(_balls.gameObject);
        Destroy(this.gameObject);
    }

    private void OnEnable()
    {
        studentControl.OnMove += SetDirection;
    }

    private void OnDisable()
    {
        studentControl.OnMove -= SetDirection;
    }

    void SetDirection(float side)
    {
        moveInput = side;
    }
}
