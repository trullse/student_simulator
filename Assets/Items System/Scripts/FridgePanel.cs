using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FridgePanel : MonoBehaviour
{
    public GameObject ItemVisualPrefab;
    public Transform ItemsHub;

    public void AddItem(Item item)
    {
        GameObject newItem = Instantiate(ItemVisualPrefab, Vector3.zero, Quaternion.identity, ItemsHub);
        newItem.GetComponent<ItemVisual>().Init(item);
    }
}
