using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bullet : MonoBehaviour {
    
    private float deathTime = 0.3f;
    //public float speed = 1.0f;
    //public bool movesVertical = false;
   // public bool movesHorizontal = false;
    public float movementSpeed = 1.0f;

	// Use this for initialization
	void Start () {
        transform.Translate(Vector3.right * 0.1f);
	}
	
	// Update is called once per frame
	void Update () {
        //Vector3 position = gameObject.transform.position;  
        transform.Translate(Vector3.right * Time.deltaTime * movementSpeed);
        /*
        if (movesVertical) {
            float newY = position.y + (movementSpeed * Time.deltaTime);
            position.y = newY;
        }
        if (movesHorizontal)
        {
            float newX = position.x + (movementSpeed * Time.deltaTime);
            position.x = newX;
        }*/
	}

    private void OnTriggerEnter2D(Collider2D collision)
    {
        
        Launcher launcher = collision.gameObject.GetComponent<Launcher>();
        if (launcher == null)
        {
            iTween.FadeTo(gameObject, 0.0f, deathTime);
            iTween.ScaleTo(gameObject, new Vector3(0, 0, 0), deathTime);
            StartCoroutine(Kill());

        }
       
    }

    IEnumerator Kill() {
            yield return new WaitForSeconds(deathTime);
            DestroyImmediate(gameObject);
    }
}
