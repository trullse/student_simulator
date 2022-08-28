using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class StickerShop : MonoBehaviour
{
    public Sticker[] arrayStickers;

    public GameObject _playerObj;
    private Player player;
    public GameObject button;
    public GameObject content;

    private List<GameObject> list = new List<GameObject>();
    private VerticalLayoutGroup _group;

    // Start is called before the first frame update
    void Start()
    {
        //money = PlayerPrefs.GetInt("money");
        player = _playerObj.GetComponent<Player>();

        RectTransform rectT = content.GetComponent<RectTransform>();
        rectT.transform.localPosition = new Vector3(0.0f, 0.0f, 0.0f);
        _group = GetComponent<VerticalLayoutGroup>();
        setStickers();
    }

    private void RemoveList()
    {
        foreach (var elem in list)
        {
            Destroy(elem);
        }
        list.Clear();
    }

    void setStickers()
    {
        RectTransform rectT = content.GetComponent<RectTransform>();
        rectT.transform.localPosition = new Vector3(0.0f, 0.0f, 0.0f);
        RemoveList();
        if (arrayStickers.Length > 0)
        {
            var pr1 = Instantiate(button, transform);
            var h = pr1.GetComponent<RectTransform>().rect.height;
            var tr = GetComponent<RectTransform>();
            tr.sizeDelta = new Vector2(tr.rect.width, h * arrayStickers.Length);
            Destroy(pr1);
            for (var i = 0; i < arrayStickers.Length; i++)
            {
                var pr = Instantiate(button, transform);
                pr.GetComponentInChildren<Text>().text = arrayStickers[i].StickerName;
                pr.transform.Find("PriceText").GetComponent<Text>().text = arrayStickers[i].StickerPrice.ToString();
                pr.GetComponentsInChildren<Image>()[0].sprite = arrayStickers[i].StickerImage;
                var i1 = i;
                pr.GetComponent<Button>().onClick.AddListener(() => GetSticker(arrayStickers[i1], pr.GetComponent<Button>()));
                list.Add(pr);
            }
        }
    }

    void GetSticker(Sticker sticker, Button bttn)
    {
        Debug.Log(sticker.ID);
        if (player.SpendMoney(sticker.StickerPrice))
        {
            PlayerPrefs.SetInt("stickerToPlace", sticker.ID);
            bttn.interactable = false;
            SceneManager.LoadScene("PlaceStickers");
            //player.IncreaseFood(sticker.Calories);
        }
    }
}
