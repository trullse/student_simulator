using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class LabFailedControl : MonoBehaviour
{
    public TextMeshProUGUI moneyText;
    public GameObject gameObject;
    private int waiting = 2;
    private int deltaMoney;
    
    void Start()
    {
        gameObject.SetActive(false);
        deltaMoney = PlayerPrefs.GetInt("delta");
        StartCoroutine(CoinsReturn());
    }

    IEnumerator CoinsReturn()
    {
        yield return new WaitForSeconds(waiting);
        waiting = 1;
        moneyGet();
    }

    private void moneyGet()
    {
        PlayerPrefs.SetInt("delta", 0);
        moneyText.text = "+" + deltaMoney.ToString() + " coins";
        gameObject.SetActive(true);
        StartCoroutine(CoinsReturn());
    }
}
