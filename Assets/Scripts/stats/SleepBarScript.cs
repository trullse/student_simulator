using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SleepBarScript : MonoBehaviour
{
    public Slider slider;
    public Image image;
    public Gradient gradient;
    public void SetMaxSleep(float sleep)
    {

        slider.maxValue = sleep;

        slider.value = sleep;

        image.color = gradient.Evaluate(sleep);
        
    }
    public void SetSleep(float sleep)
    {
        slider.value = sleep;

        image.color = gradient.Evaluate(sleep);
    }

}
