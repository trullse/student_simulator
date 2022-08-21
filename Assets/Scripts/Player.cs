using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour
{
    public float maxSleep;
    public float currentSleep;
    private float sleepDecrease = 0.02f;

    public float maxFood;
    public float currentFood;
    private float foodDecrease = 0.02f;

    public float maxToilet;
    public float currentToilet;
    private float toiletDecrease = 0.02f;

    public float maxStudy;
    public float currentStudy;
    private float studyDecrease = 0.02f;

    public SleepBarScript sleepBar;
    public FoodBarScript foodBar;
    public ToiletBarScript toiletBar;
    public StudyBarScript studyBar;

    // Start is called before the first frame update
    void Start()
    {
        maxSleep = (PlayerPrefs.HasKey("sleep")) ? PlayerPrefs.GetFloat("sleep") : 1f;
        maxFood = (PlayerPrefs.HasKey("food")) ? PlayerPrefs.GetFloat("food") : 1f;
        maxToilet = (PlayerPrefs.HasKey("toilet")) ? PlayerPrefs.GetFloat("toilet") : 1f;
        maxStudy = (PlayerPrefs.HasKey("study")) ? PlayerPrefs.GetFloat("study") : 1f;

        currentSleep = maxSleep;
        sleepBar.SetMaxSleep(maxSleep);

        currentFood = maxFood;
        foodBar.SetMaxFood(maxFood);

        currentToilet = maxToilet;
        toiletBar.SetMaxToilet(maxToilet);

        currentStudy = maxStudy;
        studyBar.SetMaxStudy(maxStudy);
    }

    // Update is called once per frame
    void Update()
    {
        DecreaseSleep(sleepDecrease * Time.deltaTime);
        sleepBar.SetSleep(currentSleep);

        DecreaseFood(foodDecrease * Time.deltaTime);
        foodBar.SetFood(currentFood);

        DecreaseToilet(toiletDecrease * Time.deltaTime);
        toiletBar.SetToilet(currentToilet);

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
