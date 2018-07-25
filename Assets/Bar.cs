using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bar : MonoBehaviour {

    public bool startWithLeftMove = false;
    public float leftSpeed = 1.0f;
    public float rightSpeed = 1.0f;
    public float startDelay = 0.0f;
    public GameObject barObject;
    public BoxCollider2D barCollider;
    public Manager manager;

    void Start()
    {
        GameObject managerGO = GameObject.Find("Manager");
        manager = managerGO.GetComponent<Manager>();

        StartCoroutine(startMovement());
    }

    // Update is called once per frame
    void Update()
    {

    }

    IEnumerator startMovement() {
        
        if (startWithLeftMove) barObject.transform.position = new Vector3(barObject.transform.position.x + barCollider.size.x * gameObject.transform.localScale.x, barObject.transform.position.y, barObject.transform.position.z);
        yield return new WaitForSeconds(startDelay);

        if (startWithLeftMove)
        {
            StartCoroutine(Left());
        }
        else
        {
            StartCoroutine(Right());
        }
    }

    IEnumerator Left()
    {
        if (!manager.isDead && !manager.isComplete)
        {
            iTween.MoveBy(barObject, new Vector3(-barCollider.size.x * gameObject.transform.localScale.x, 0, 0), leftSpeed);
            yield return new WaitForSeconds(leftSpeed);
            StartCoroutine(Right());
        }

    }

    IEnumerator Right()
    {
        if (!manager.isDead && !manager.isComplete)
        {
            iTween.MoveBy(barObject, new Vector3(barCollider.size.x * gameObject.transform.localScale.x, 0, 0), rightSpeed);
            yield return new WaitForSeconds(rightSpeed);
            StartCoroutine(Left());
        }
    }
}
