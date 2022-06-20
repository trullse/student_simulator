using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour
{
    public float maxSleep = 1f;
    public float currentSleep;
    private float sleepDecrease = 0.01f;

    public float maxFood = 1f;
    public float currentFood;

    public float maxToilet = 1f;
    public float currentToilet;

    public float maxStudy = 1f;
    public float currentStudy;

    public SleepBarScript sleepBar;
    public FoodBarScript foodBar;
    public ToiletBarScript toiletBar;
    public StudyBarScript studyBar;

    // Start is called before the first frame update
    void Start()
    {
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
    }

    void DecreaseSleep(float sleep)
    {
        if (currentSleep < sleep)
            currentSleep = 0;
        else
            currentSleep -= sleep;
    }

    void DecreaseFood(float food)
    {
        if (currentFood < food)
            currentFood = 0;
        else
            currentFood -= food;
    }

    void DecreaseToilet(float toilet)
    {
        if (currentToilet < toilet)
            currentToilet = 0;
        else
            currentToilet -= toilet;
    }

    void DecreaseStudy(float study)
    {
        if (currentStudy < study)
            currentStudy = 0;
        else
            currentStudy -= study;
    }
}
