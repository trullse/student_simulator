using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class FoodBarScript : MonoBehaviour
{
    public Slider slider;
    public Image image;
    public Gradient gradient;
    public void SetMaxFood(float food)
    {
        slider.maxValue = 1f;
        slider.value = food;

        image.color = gradient.Evaluate(food);
    }
    public void SetFood(float food)
    {
        slider.value = food;

        image.color = gradient.Evaluate(food);
    }
}
