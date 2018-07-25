using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Spur : MonoBehaviour {
    
    public bool movesVertical = false;
    public bool movesHorizontal = true;

    public float rotationSpeed = 90;
    public float movesSpeed = 1;

	// Use this for initialization
	void Start () {
        
	}
	
	// Update is called once per frame
	void Update () {
        Vector3 rotation = gameObject.transform.eulerAngles;
        rotation.z = rotation.z + (rotationSpeed * Time.deltaTime);
        gameObject.transform.eulerAngles = rotation;

        if (movesHorizontal) {
            Vector3 position = gameObject.transform.position;
            position.x = position.x + (movesSpeed * Time.deltaTime);
            gameObject.transform.position = position;
        } 

        if (movesVertical)
        {
            Vector3 position = gameObject.transform.position;
            position.y = position.y + (movesSpeed * Time.deltaTime);
            gameObject.transform.position = position;
        }
	}

    public void OnCollisionEnter2D(Collision2D collision)
    {
        movesSpeed *= -1;
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        movesSpeed *= -1;
    }
}
