using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class FridgeCell : MonoBehaviour
{
    //[SerializeField] private Text _nameField;
    [SerializeField] private Image _imageField;
    [SerializeField] private Button _eatBttn;
    [SerializeField] private Text _foodNumber;
    private Item _food = null;

    private GameObject player;

    public void Render(Item item)
    {
        _food = item;
        //_nameField.text = item.ItemName;
        _imageField.sprite = item.ItemImage;
        _foodNumber.text = item.ItemNumber.ToString();
    }

    public void OnEatClicked()
    {
        //player.IncreaseFood(0.2f);
    }
}
