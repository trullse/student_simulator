using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class FoodBarScript : MonoBehaviour
{
    public Slider slider;

    public void SetMaxFood(float food)
    {
        slider.maxValue = food;
        slider.value = food;
    }
    public void SetFood(float food)
    {
        slider.value = food;
    }
}
