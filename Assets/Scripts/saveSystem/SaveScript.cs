using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Runtime.Serialization.Formatters.Binary;
using System.IO;

[RequireComponent(typeof(Player))]
public class SaveScript : MonoBehaviour
{
    private Player player;
    private string filepath;
    // Start is called before the first frame update
    void Start()
    {
        player = GetComponent<Player>();
        filepath = Application.persistentDataPath + "/student.save";
    }

    public void SaveData()
    {
        var save = new Save()
        {
            FoodData = player.currentFood,
            SleepData = player.currentSleep,
            StudyData = player.currentStudy,
            ToiletData = player.currentToilet
        };

        var binaryFormatter = new BinaryFormatter();
        using (var filestream = File.Create(filepath)) //using облегчает жизнь, ибо не нужно закрывать filestream
        {
            binaryFormatter.Serialize(filestream, save);
        }

        Debug.Log("Data saved");
    }

    public void LoadData()
    {
        if (File.Exists(filepath))
        {
            Save save;
            var binaryFormatter = new BinaryFormatter();
            using (var fileStream = File.Open(filepath, FileMode.Open))
            {
                save = (Save)binaryFormatter.Deserialize(fileStream);
            }

            player.currentFood = save.FoodData;
            player.currentSleep = save.SleepData;
            player.currentStudy = save.StudyData;
            player.currentToilet = save.ToiletData;

            Debug.Log("Loaded data");
        }
        else
        {
            Debug.Log("Warning, data doesn't exist");
        }
    }
}
