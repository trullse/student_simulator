using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ItemVisual : MonoBehaviour
{
    public void Init(Item item)
    {
        GetComponent<Image>().sprite = item.ItemImage;
    }
}
