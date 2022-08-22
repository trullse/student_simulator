using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class naighbourSpeak : MonoBehaviour
{
    public GameObject[] answers;
    public GameObject[] free_phrases;
    private GameObject created, self_created;
    private bool exists = false;
    private bool double_clicked = false;
    private bool banned = false;
    private int ms = 0;
    private int banned_ms = 0;


    private int gaming_ms = 0;
    private int self_saying_ms = 0;
    private int wnd = 0;

    public void saySomething()
    {
        if (!banned)
        {
            if (!exists)
            {
                int windowType = Random.Range(0, answers.Length - 2);
                created = Instantiate(answers[windowType], new Vector3(0.5f, -2f, 0f), Quaternion.identity);
                exists = true;
                gaming_ms = 0;
            }
            else if (exists && !double_clicked)
            {
                ms = 0;
                Destroy(created);
                // int windowType = Random.Range(0, objects.Length - 1);
                created = Instantiate(answers[2], new Vector3(0.5f, -2f, 0f), Quaternion.identity);
                double_clicked = true;
                gaming_ms = 0;
            }
            else
            {
                ms = 0;
                Destroy(created);
                created = Instantiate(answers[3], new Vector3(0.5f, -2f, 0f), Quaternion.identity);
                banned = true;
                gaming_ms = 0;
            }
        }
    }

    private void dota2Screaming()
    {
        if (!exists)
        {
            self_created = Instantiate(free_phrases[wnd], new Vector3(0.5f, -2f, 0f), Quaternion.identity);
            wnd = (wnd == 0) ? 1 : 0;
            exists = true;
        }
    }

    private void Update()
    {
        if (created) ms++;
        if (banned) banned_ms++;
        if (ms == 500)
        {
            Destroy(created);
            ms = 0;
            exists = false;
            double_clicked = false;
        }
        if (banned_ms == 1000)
        {
            banned = false;
            banned_ms = 0;

        }
        gaming_ms++;
        if (gaming_ms == 3000) dota2Screaming();
        if (self_created) self_saying_ms++;
        if(self_saying_ms == 500)
        {
            Destroy(self_created);
            self_saying_ms = 0;
            exists = false;
            gaming_ms = 0;
        }

    }
}