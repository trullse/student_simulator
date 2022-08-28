using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class StickerLaptop : MonoBehaviour
{
    public int PlaceID;

    public Image img;
    public GameObject laptopObj;
    private LaptopStudy laptop;

    // Start is called before the first frame update
    void Start()
    {
        laptop = laptopObj.GetComponent<LaptopStudy>();

        if (PlayerPrefs.HasKey("sticker" + PlaceID))
        {
            int tempID = PlayerPrefs.GetInt("sticker" + PlaceID);
            for (int i = 0; i < laptop.allStickers.Length; i++)
            {
                if (laptop.allStickers[i].ID == tempID)
                {
                    img.GetComponent<Image>().sprite = laptop.allStickers[i].StickerImage;
                }
            }
        }
    }


}
