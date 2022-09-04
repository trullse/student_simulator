using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SleepScript : MonoBehaviour
{
    [SerializeField] private GameObject playerObj;
    private Player player;

    public SpriteRenderer base_texture;
    public SpriteRenderer lights;
   
    public GameObject neighboor;
    private GameObject breathingPiece;
    private GameObject dayStudent;
    

    private bool isSleeping;
    private float sleepIncrease = 0.1f;
    void Start()
    {
        player = playerObj.GetComponent<Player>();

        breathingPiece = GameObject.Find("nightBreathingTexture");
        dayStudent = GameObject.Find("BedroomStudent");

        isSleeping = false;
    }

    // Update is called once per frame
    void Update()
    {
        if (isSleeping)
        {
            if (player.currentSleep + sleepIncrease * Time.deltaTime >= 1f)
            {
                player.IncreaseSleep(sleepIncrease * Time.deltaTime);
                OnSleepBttnClick();
            }
            player.IncreaseSleep(sleepIncrease * Time.deltaTime);
        }
    }

    public void OnSleepBttnClick()
    {
        if (isSleeping)
        {
            isSleeping = false;

            base_texture.color = new Color(1f, 1f, 1f, 1f);
            lights.color = new Color(1f, 1f, 1f, 0);
            breathingPiece.GetComponent<SpriteRenderer>().color = new Color(1f, 1f, 1f, 0);
            dayStudent.SetActive(true);
            foreach (SpriteRenderer sprite in neighboor.GetComponentsInChildren<SpriteRenderer>())
            {
                sprite.color = new Color(1f, 1f, 1f, 1f);
            }
        }
        else if (player.currentSleep != 1f)
        {
            isSleeping = true;

            base_texture.color = new Color(0.0728f, 0.0902f, 0.6226f, 1f);
            lights.color = new Color(1f, 1f, 1f, 1f);
            breathingPiece.GetComponent<SpriteRenderer>().color = new Color(1f, 1f, 1f, 1f);
            dayStudent.SetActive(false);
            foreach (SpriteRenderer sprite in neighboor.GetComponentsInChildren<SpriteRenderer>())
            {
                sprite.color = new Color(0.0728f, 0.0902f, 0.6226f, 1f);
            }
        }

        player.SleepStatusChange(isSleeping);
    }
}
