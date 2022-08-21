using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Fridge : MonoBehaviour
{
    [SerializeField] private List<Item> Items;
    [SerializeField] private FridgeCell fridgeCellTemplate;
    [SerializeField] private Transform _container;
    [SerializeField] private Player _player;

    public void Render(List<Item> items)
    {
        foreach (Transform child in _container)
            Destroy(child.gameObject);

        items.ForEach(item =>
        {
            var cell = Instantiate(fridgeCellTemplate, _container);
            cell.Render(item);
        });
    }

}
