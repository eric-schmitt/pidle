using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class SelectorManager : MonoBehaviour {

    public Button level1;
    public Button level2;
    public Button level3;
    public Button level4;
    public Button level5;
    private Data data;

	// Use this for initialization
	void Start () {
        GameObject dataGO = GameObject.Find("Data");
        data = dataGO.GetComponent<Data>();

        if (!data.blockLevels)
        {
            updateLevelText(1, level1);
            updateLevelText(2, level2);
            updateLevelText(3, level3);
            updateLevelText(4, level4);
        }
        else
        {

            switch (data.highestLevel)
            {
                case 1:
                    level2.gameObject.SetActive(false);
                    level3.gameObject.SetActive(false);
                    level4.gameObject.SetActive(false);
                    level5.gameObject.SetActive(false);
                    updateLevelText(1, level1);

                    break;

                case 2:

                    level3.gameObject.SetActive(false);
                    level4.gameObject.SetActive(false);
                    level5.gameObject.SetActive(false);
                    updateLevelText(1, level1);
                    updateLevelText(2, level2);

                    break;

                case 3:


                    level4.gameObject.SetActive(false);
                    level5.gameObject.SetActive(false);
                    updateLevelText(1, level1);
                    updateLevelText(2, level2);
                    updateLevelText(3, level3);

                    break;

                case 4:

                    level5.gameObject.SetActive(false);
                    updateLevelText(1, level1);
                    updateLevelText(2, level2);
                    updateLevelText(3, level3);
                    updateLevelText(4, level4);

                    break;

                case 5:


                    updateLevelText(1, level1);
                    updateLevelText(2, level2);
                    updateLevelText(3, level3);
                    updateLevelText(4, level4);
                    // updateLevelText(5, level5);

                    break;
                default:

                    break;
            }
        }
	}

    void updateLevelText(int level, Button buttonObject)
    {
        Text textObject = buttonObject.GetComponentInChildren<Text>();
        float percent = data.GetHighestPercentForLevel(level);
        textObject.text = level.ToString() + "\r\n" + percent.ToString("F0") + "%";
    }

	
    public void startLevel1() {
        SceneManager.LoadScene("Level1");
    }

    public void startLevel2()
    {
        SceneManager.LoadScene("Level2");
    }

    public void startLevel3()
    {
        SceneManager.LoadScene("Level3");
    }

    public void startLevel4()
    {
        SceneManager.LoadScene("Level4");
    }
    /*
    public void startLevel5()
    {
        SceneManager.LoadScene("Level5");
    }*/

}
