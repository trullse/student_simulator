using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class Timer : MonoBehaviour
{
    public TextMeshProUGUI timerText;
    private int time = 60;
    private int waitingTime = 2;
    // Start is called before the first frame update
    void Start()
    {
        timerText = GetComponent<TextMeshProUGUI>();
        StartCoroutine(introWait());
    }

    IEnumerator introWait()
    {
        yield return new WaitForSeconds(waitingTime);
        waitingTime = 1;
        timerChange();
    }

    public void timerChange()
    {
        if (time > 0) --time;
        timerText.text = time.ToString();
        StartCoroutine(introWait());
    }

}
