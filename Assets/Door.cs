using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Door : MonoBehaviour {

    public float openSpeed = 1.5f;
    public float closeSpeed = 0.3f;
    public float maxRotation = -90;
    public float originalRotation;
    //public float rotationDirection = -1;

	// Use this for initialization
	void Start () {
        originalRotation = gameObject.transform.eulerAngles.z;
        StartCoroutine(Open());
	}
	
	// Update is called once per frame
	void Update () {
        
	}

    IEnumerator Close()
    {
        iTween.RotateTo(gameObject, new Vector3(0, 0, originalRotation), closeSpeed);
        yield return new WaitForSeconds(closeSpeed);
        StartCoroutine(Open());

    }

    IEnumerator Open()
    {
        iTween.RotateTo(gameObject, new Vector3(0, 0, maxRotation), openSpeed);
        yield return new WaitForSeconds(openSpeed);
        StartCoroutine(Close());
    }
}
