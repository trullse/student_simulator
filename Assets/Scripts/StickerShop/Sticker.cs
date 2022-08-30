using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(menuName = "Sticker")]
public class Sticker : ScriptableObject
{
    public string StickerName;
    public int ID;
    public Sprite StickerImage;
    public int StickerPrice;
}
