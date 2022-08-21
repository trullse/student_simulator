using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CharacterItems : MonoBehaviour
{
    //public List<Item> charItems = new List<Item>();
    public Item[] InitialCharacterItem;
    public FridgePanel fridgePanel;
    private List<Item> fridgeItems = new List<Item>();

    private void Start()
    {
        foreach (Item item in InitialCharacterItem)
        {
            AddItem(item);
        }
        //foreach (Item item in charItems)
        //{
        //    AddItem(item);
        //}
    }

    private void AddItem(Item item)
    {
        fridgeItems.Add(item);
        fridgePanel.AddItem(item);
    }

    //public void AddCharItem(Item item)
    //{
        //charItems.Add(item);
    //}
}
