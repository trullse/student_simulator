using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;

public class Player : MonoBehaviour
{
    private int money;
    [SerializeField] private Text moneyText;

    public float maxSleep = 1f;
    public float currentSleep;
    private float sleepDecrease = 0.0001f;
    private float sleepIncrease = 0.1f;
    private bool isSleeping;

    public float maxFood = 1f;
    public float currentFood;
    private float foodDecrease = 0.0001f;

    public float maxToilet = 1f;
    public float currentToilet;
    private float toiletDecrease = 0.001f;
    private bool isUsingToilet;

    public float maxStudy = 1f;
    public float currentStudy;
    private float studyDecrease = 0.001f;
    private bool isStudying;

    public SleepBarScript sleepBar;
    public FoodBarScript foodBar;
    public ToiletBarScript toiletBar;
    public StudyBarScript studyBar;

    public bool isBusy;

    private

    // Start is called before the first frame update
    void Start()
    {

        isBusy = false;

        isStudying = false;
        isSleeping = false;
        isUsingToilet = false;

        money = PlayerPrefs.GetInt("money");
        if (moneyText != null)
        {
            moneyText.text = money.ToString();
        }

        currentSleep = (PlayerPrefs.HasKey("sleep")) ? PlayerPrefs.GetFloat("sleep") : 1f;
        sleepBar.SetSleep(currentSleep);

        currentFood = (PlayerPrefs.HasKey("food")) ? PlayerPrefs.GetFloat("food") : 1f;
        foodBar.SetFood(currentFood);

        currentToilet = (PlayerPrefs.HasKey("toilet")) ? PlayerPrefs.GetFloat("toilet") : 1f;
        toiletBar.SetToilet(currentToilet);

        currentStudy = (PlayerPrefs.HasKey("study")) ? PlayerPrefs.GetFloat("study") : 1f;
        studyBar.SetStudy(currentStudy);

        OfflineTime();
    }

    public void StudyStatusChange(bool toStudy)
    {
        isStudying = toStudy;
    }

    public void SleepStatusChange(bool toSleep)
    {
        isSleeping = toSleep;
    }

    public void ToiletStatusChange(bool toUse)
    {
        isUsingToilet = toUse;
    }

    // Update is called once per frame
    void Update()
    {
        if (!isSleeping)
            DecreaseSleep(sleepDecrease * Time.deltaTime);
        sleepBar.SetSleep(currentSleep);

        DecreaseFood(foodDecrease * Time.deltaTime);
        foodBar.SetFood(currentFood);

        if (!isUsingToilet)
            DecreaseToilet(toiletDecrease * Time.deltaTime);
        toiletBar.SetToilet(currentToilet);

        if (!isStudying)
            DecreaseStudy(studyDecrease * Time.deltaTime);
        studyBar.SetStudy(currentStudy);

        if (Input.GetKeyDown(KeyCode.F))
        {
            DecreaseFood(0.1f);
            foodBar.SetFood(currentFood);
        }

        if (Input.GetKeyDown(KeyCode.T))
        {
            DecreaseToilet(0.1f);
            toiletBar.SetToilet(currentToilet);
        }

        if (Input.GetKeyDown(KeyCode.S))
        {
            DecreaseStudy(0.1f);
            studyBar.SetStudy(currentStudy);
        }

        if (Input.GetKeyDown(KeyCode.Z))
        {
            DecreaseSleep(0.1f);
            sleepBar.SetSleep(currentSleep);
        }
    }

    private void OfflineTime()
    {
        TimeSpan timeSpan;
        if (PlayerPrefs.HasKey("LastSession"))
        {
            timeSpan = DateTime.Now - DateTime.Parse(PlayerPrefs.GetString("LastSession"));
            if (PlayerPrefs.HasKey("isSleeping"))
            {
                IncreaseSleep(sleepIncrease * ((float)timeSpan.TotalSeconds));
                PlayerPrefs.DeleteKey("isSleeping");
            }
            else
            {
                DecreaseSleep(sleepDecrease * (float)timeSpan.TotalSeconds);
            }
            sleepBar.SetSleep(currentSleep);

            DecreaseFood(foodDecrease * (float)timeSpan.TotalSeconds);
            foodBar.SetFood(currentFood);

            DecreaseToilet(toiletDecrease * (float)timeSpan.TotalSeconds);
            toiletBar.SetToilet(currentToilet);

            DecreaseStudy(studyDecrease * (float)timeSpan.TotalSeconds);
            studyBar.SetStudy(currentStudy);

            PlayerPrefs.DeleteKey("LastSession");
        }
    }

#if UNITY_ANDROID && !UNITY_EDITOR
    private void OnApplicationPause(bool pause)
    {
        if (pause)
        {
            PlayerPrefs.SetString("LastSession", DateTime.Now.ToString());
                if (isSleeping)
            {
                PlayerPrefs.SetInt("isSleeping", 1);
            }
        }
    }

#else
    private void OnApplicationQuit()
    {
        PlayerPrefs.SetString("LastSession", DateTime.Now.ToString());
        if (isSleeping)
        {
            PlayerPrefs.SetInt("isSleeping", 1);
        }
    }

#endif
    public void GetMoney(int _money)
    {
        money += _money;
        PlayerPrefs.SetInt("money", money);
        if (moneyText != null)
        {
            moneyText.text = money.ToString();
        }
    }

    public bool SpendMoney(int _money)
    {
        if (money >= _money)
        {
            money -= _money;
            PlayerPrefs.SetInt("money", money);
            if (moneyText != null)
            {
                moneyText.text = money.ToString();
            }
            return true;
        }
        return false;
    }
    public void SleepButtonPush()
    {
        IncreaseSleep(0.5f);
        sleepBar.SetSleep(currentSleep);
    }

    public void FoodButtonPush()
    {
        IncreaseFood(0.5f);
        foodBar.SetFood(currentFood);
    }


    public void ToiletButtonPush()
    {
        IncreaseToilet(0.5f);
        toiletBar.SetToilet(currentToilet);
    }


    public void StudyButtonPush()
    {
        IncreaseStudy(0.5f);
        studyBar.SetStudy(currentStudy);
    }

    public void IncreaseSleep(float sleep)
    {
        if (currentSleep < 1f)
        {
            if (1f - currentSleep > sleep)
                currentSleep += sleep;
            else currentSleep = 1f;
        }

        PlayerPrefs.SetFloat("sleep", currentSleep);
    }

    void DecreaseSleep(float sleep)
    {
        if (currentSleep < sleep)
            currentSleep = 0;
        else
            currentSleep -= sleep;

        PlayerPrefs.SetFloat("sleep", currentSleep);
    }

    public void IncreaseFood(float food)
    {
        if (currentFood < 1f)
        {
            if (1f - currentFood > food)
                currentFood += food;
            else currentFood = 1f;
        }

        PlayerPrefs.SetFloat("food", currentFood);
    }

    void DecreaseFood(float food)
    {
        if (currentFood < food)
            currentFood = 0;
        else
            currentFood -= food;

        PlayerPrefs.SetFloat("food", currentFood);
    }


    public void IncreaseToilet(float toilet)
    {
        if (currentToilet < 1f)
        {
            if (1f - currentToilet > toilet)
                currentToilet += toilet;
            else currentToilet = 1f;
        }

        PlayerPrefs.SetFloat("toilet", currentToilet);
    }

    void DecreaseToilet(float toilet)
    {
        if (currentToilet < toilet)
            currentToilet = 0;
        else
            currentToilet -= toilet;

        PlayerPrefs.SetFloat("toilet", currentToilet);
    }


    public void IncreaseStudy(float study)
    {
        if (currentStudy < 1f)
        {
            if (1f - currentStudy > study)
                currentStudy += study;
            else currentStudy = 1f;
        }

        PlayerPrefs.SetFloat("study", currentStudy);
    }

    void DecreaseStudy(float study)
    {
        if (currentStudy < study)
            currentStudy = 0;
        else
            currentStudy -= study;

        PlayerPrefs.SetFloat("study", currentStudy);
    }
}
