using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class mazeTurn : MonoBehaviour
{
    //private float turnSpeed = 0,8f;

    private int movementSpeed = 0;



    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.A))
        {
            Left();
        }
        if (Input.GetKeyDown(KeyCode.D))
        {
            Right();
        }

        if (Input.GetKeyUp(KeyCode.A) || Input.GetKeyUp(KeyCode.D))
        {
            dur();
        }

        Move();

    }

    private void Move()
    {
        this.transform.RotateAround(new Vector3(0f, 0f, 0f), new Vector3(0f, 0f, movementSpeed), 51f * Time.deltaTime);
    }

    public void Left()
    {
        movementSpeed = 1;
    }
    public void Right()
    {
        movementSpeed = -1;
    }
    public void dur()
    {
        movementSpeed = 0;
    }
}
