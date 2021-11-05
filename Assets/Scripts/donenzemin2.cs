using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class donenzemin2 : MonoBehaviour
{
    private float rotationSpeed = 0.6f;
    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        transform.Rotate(0, 0, (rotationSpeed));
    }
}
