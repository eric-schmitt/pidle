
using UnityEngine;
using UnityEngine.SceneManagement;
using System.Collections;
using System.IO;        
                                                // The System.IO namespace contains functions related to loading and saving files
[System.Serializable]
public class PlayerData
{
    public float[] allLevelPercent;
    public int highestLevel;
    public int lives;
}

public class Data : MonoBehaviour
{
    public float[] allLevelPercent = new float[] { 0f,0f,0f,0f };
    public int highestLevel;
    public int lives;
    public int maxLives = 18;
    public bool blockLevels = true;

    private string gameDataFileName = "data.json";

    void Start()
    {
        DontDestroyOnLoad(gameObject);

        LoadGameData();

    }

    public float GetLevelPercent(int level)
    {
       
        return allLevelPercent[level-1];
    }

    public void UpdatedLevel(int level, float percent, int updateLives, bool complete)
    {
        // If newScore is greater than playerProgress.highestScore, update playerProgress with the new value and call SavePlayerProgress()
       
        if(allLevelPercent.Length < level - 2) {
            allLevelPercent = new float[] { 0f, 0f, 0f, 0f };
        }

        if (percent > allLevelPercent[level-1])
        {
            allLevelPercent[level-1] = percent;

        }

        if (complete) {
            if (highestLevel < level+1)
            {
                highestLevel = level+1;
                allLevelPercent[highestLevel] = 0;
            }

        }

        lives = updateLives;

        SaveGameData();
    }

    public void UpdateLives(int updateLives) {
        lives = updateLives;
        SaveGameData();
    }


    public float GetHighestPercentForLevel(int level)
    {
        return allLevelPercent[level-1];
    }
    /*
    private void LoadGameData()
    {
        // Path.Combine combines strings into a file path
        // Application.StreamingAssets points to Assets/StreamingAssets in the Editor, and the StreamingAssets folder in a build
        string filePath = Path.Combine(Application.streamingAssetsPath, gameDataFileName);

        if (File.Exists(filePath))
        {
            // Read the json from the file into a string
            string dataAsJson = File.ReadAllText(filePath);
            // Pass the json to JsonUtility, and tell it to create a GameData object from it
            PlayerData loadedData = JsonUtility.FromJson<PlayerData>(dataAsJson);

            // Retrieve the allRoundData property of loadedData
            allLevelPercent = loadedData.allLevelPercent;
            lives = loadedData.lives;
            highestLevel = loadedData.highestLevel;
        }
        else
        {
            Debug.LogError("Cannot load game data!");
        }
    }*/

    private void LoadGameData()
    {
        string filePath = Path.Combine(Application.persistentDataPath, gameDataFileName);

        if (File.Exists(filePath))
        {
            string dataAsJson = File.ReadAllText(filePath);
            PlayerData loadedData = JsonUtility.FromJson<PlayerData>(dataAsJson);

            // Retrieve the allRoundData property of loadedData
            allLevelPercent = loadedData.allLevelPercent;
            lives = loadedData.lives;
            highestLevel = loadedData.highestLevel;
        }
        else
        {
            allLevelPercent = new float[] { 0f, 0f, 0f, 0f };
            lives = maxLives;
            highestLevel = 1;
        }
    }



    private void SaveGameData()
    {

        PlayerData saveData = new PlayerData();
        saveData.allLevelPercent = allLevelPercent;
        saveData.lives = lives;
        saveData.highestLevel = highestLevel;

        string dataAsJson = JsonUtility.ToJson(saveData);

        string filePath = Path.Combine(Application.persistentDataPath, gameDataFileName);

        File.WriteAllText(filePath, dataAsJson);

    }
}