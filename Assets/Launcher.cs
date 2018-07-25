using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Launcher : MonoBehaviour {

    public Bullet bullet;
    public int salvoCount = 3;
    public float delayBetweenSalvo = 1.0f;
    public float delayBetweenSalvoBullet = 0.4f;
    public float bulletSpeed = 3.0f;
    public float startDelay = 0.0f;
    public Manager manager;

	// Use this for initialization
	void Start () {
        GameObject managerGO = GameObject.Find("Manager");
        manager = managerGO.GetComponent<Manager>();

        StartCoroutine(startSalvos());
	}
	
	// Update is called once per frame
	void Update () {
		
	}

    IEnumerator startSalvos()
    {
        yield return new WaitForSeconds(startDelay);
        StartCoroutine(fireSalvo());
    }

    IEnumerator fireSalvo()
    {
        if (!manager.isDead && !manager.isComplete)
        {
            yield return new WaitForSeconds(delayBetweenSalvo);

            for (int i = 0; i < salvoCount; i++)
            {
                Bullet newBullet = GameObject.Instantiate(bullet);
                newBullet.transform.position = transform.position;
                newBullet.transform.rotation = transform.rotation;
                newBullet.movementSpeed = bulletSpeed;
                yield return new WaitForSeconds(delayBetweenSalvoBullet);
            }
            StartCoroutine(fireSalvo());
        }
    }
}
