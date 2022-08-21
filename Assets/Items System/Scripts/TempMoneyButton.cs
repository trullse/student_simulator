using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TempMoneyButton : MonoBehaviour
{
    [SerializeField] int money;
    public Text moneyText;

    // Start is called before the first frame update
    private void Start()
    {
        money = PlayerPrefs.GetInt("money");
    }

    public void GetMoneyClick()
    {
        money += 20;
        PlayerPrefs.SetInt("money", money);
    }

    // Update is called once per frame
    void Update()
    {
        //money = PlayerPrefs.GetInt("money");
        moneyText.text = money.ToString();
    }
}
