using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(menuName = "Item")]
public class Item : ScriptableObject
{
    public string ItemName;
    public int ID;
    public float Calories;
    public Sprite ItemImage;
    public int ItemNumber;
    public int ItemPrice;
}
