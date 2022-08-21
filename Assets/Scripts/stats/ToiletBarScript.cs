using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ToiletBarScript : MonoBehaviour
{
    public Slider slider;
    public Image image;
    public Gradient gradient;
    public void SetMaxToilet(float toilet)
    {
        slider.maxValue = 1f;
        slider.value = toilet;

        image.color = gradient.Evaluate(toilet);
    }
    public void SetToilet(float toilet)
    {
        slider.value = toilet;

        image.color = gradient.Evaluate(toilet);
    }
}
