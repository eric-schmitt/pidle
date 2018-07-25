using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class IntroManager : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {

        if (Input.touchCount > 1 || Input.anyKeyDown)
        {
            GameObject dataGO = GameObject.Find("Data");
            Data data = dataGO.GetComponent<Data>();

            if (data.highestLevel > 1) {
                SceneManager.LoadScene("LevelSelector");
            } else {
                SceneManager.LoadScene("Level1");
            }


        }
	}
}
