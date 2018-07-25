using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Character : MonoBehaviour {

    public float defaultVerticalGravity = 1f;
    public float verticalSwipeChange = 0.5f;
    public float verticalSwipeDecayTime = 0.5f;
    public float horizontalSwipeChange = 0.5f;
    public float horizontalSwipeDecayTime = 0.5f;
    private float verticalAccelerationRemaining = 0.0f;
    private float horizontalAccelerationRemaining = 0.0f;
    private bool isDead = false;

    public Manager manager;

	// Use this for initialization
	void Start () {
		
	}

    // Update is called once per frame
    void Update()
    {

        if (!isDead) { 

            Vector3 position = gameObject.transform.position;
            float newPositionY = position.y + getVerticalBonusMovement() + (defaultVerticalGravity * Time.deltaTime);
            float newPositionX = position.x + getHorizontalBonusMovement();
            gameObject.transform.position = new Vector3(newPositionX, newPositionY, position.z);
        } 

        if(Input.GetKeyDown(KeyCode.RightArrow)) {
            NudgeRight();
        }
        if (Input.GetKeyDown(KeyCode.LeftArrow))
        {
            NudgeLeft();
        }
        if (Input.GetKeyDown(KeyCode.UpArrow))
        {
            NudgeUp();
        }
        if (Input.GetKeyDown(KeyCode.DownArrow))
        {
            NudgeDown();
        }


	}


    private void OnTriggerEnter2D(Collider2D collision)
    {

        string colliderName = collision.gameObject.name;

        if (colliderName == "FinishLine")
        {
            manager.completeLevel();
            iTween.FadeTo(gameObject, 0.0f, 1.0f);
            iTween.ScaleTo(gameObject, new Vector3(2.0f, 2.0f, 2.0f), 1.0f);
        }
        else
        {
            isDead = true;

            iTween.FadeTo(gameObject, 0.0f, 1.0f);
            iTween.ScaleTo(gameObject, new Vector3(0, 0, 0), 1.0f);

            manager.characterDied();
        }
    }

    public void Nudge(SwipeDirection direction) {
        if(direction == SwipeDirection.Up || direction == SwipeDirection.Down) {
            verticalAccelerationRemaining = (direction == SwipeDirection.Up) ? verticalSwipeChange : -verticalSwipeChange;
        } else {
            horizontalAccelerationRemaining = (direction == SwipeDirection.Right) ? horizontalSwipeChange : -horizontalSwipeChange;
        }
    }

    private float getVerticalBonusMovement() {
        if (verticalAccelerationRemaining > 0) {
            float additionalAmount = verticalAccelerationRemaining;
            if (verticalAccelerationRemaining < 0) verticalAccelerationRemaining = 0;
            verticalAccelerationRemaining = verticalAccelerationRemaining - (verticalAccelerationRemaining * (Time.deltaTime / verticalSwipeChange));
            return additionalAmount;
        } else if (verticalAccelerationRemaining < 0) {
            float additionalAmount = verticalAccelerationRemaining;
            verticalAccelerationRemaining = verticalAccelerationRemaining - (verticalAccelerationRemaining * (Time.deltaTime / verticalSwipeChange));
            if (verticalAccelerationRemaining > 0) verticalAccelerationRemaining = 0;
            return additionalAmount;
        }
        return 0;
    }

    private float getHorizontalBonusMovement()
    {
        if (horizontalAccelerationRemaining > 0)
        {
            float additionalAmount = horizontalAccelerationRemaining;
            if (horizontalAccelerationRemaining < 0) horizontalAccelerationRemaining = 0;
            horizontalAccelerationRemaining = horizontalAccelerationRemaining - (horizontalAccelerationRemaining * (Time.deltaTime / horizontalSwipeChange));
            return additionalAmount;
        }
        else if (horizontalAccelerationRemaining < 0)
        {
            float additionalAmount = horizontalAccelerationRemaining;
            horizontalAccelerationRemaining = horizontalAccelerationRemaining - (horizontalAccelerationRemaining * (Time.deltaTime / horizontalSwipeChange));
            if (horizontalAccelerationRemaining > 0) horizontalAccelerationRemaining = 0;
            return additionalAmount;
        }
        return 0;
    }

    public void NudgeUp() 
    {
        Nudge(SwipeDirection.Up);
    }

    public void NudgeDown() 
    {
        Nudge(SwipeDirection.Down);
    }

    public void NudgeRight()
    {
        Nudge(SwipeDirection.Right);
    }

    public void NudgeLeft()
    {
        Nudge(SwipeDirection.Left);
    }
}
