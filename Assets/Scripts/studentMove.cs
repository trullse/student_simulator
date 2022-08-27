using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class studentMove : MonoBehaviour
{

    public float speed;
    private float moveInput;
    public GameObject escapePanel;
    public GameObject failPanel;
    public GameObject birds;

    private Rigidbody2D fallingBody;

    void Start()
    {
        fallingBody = GetComponent<Rigidbody2D>();
    }


    private void OnTriggerEnter2D(Collider2D other)
    {
        if(other.tag == "ground")
        {

            Destroy(birds);

            escapePanel.SetActive(true);
            Destroy(this.gameObject);

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

            failPanel.SetActive(true);
            Destroy(this.gameObject);
        }

    }


    void Update()
    {
        moveInput = Input.GetAxis("Horizontal");
        fallingBody.velocity = new Vector2(moveInput * speed, fallingBody.velocity.y);
        if (fallingBody.position.x >= 2.75f) fallingBody.position = new Vector2(2.75f, fallingBody.position.y);
        if (fallingBody.position.x <= -2.75f) fallingBody.position = new Vector2(-2.75f, fallingBody.position.y);
        fallingBody.rotation = fallingBody.velocity.x * 5f;
    }
}
