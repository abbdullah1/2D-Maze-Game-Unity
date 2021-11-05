using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
public class harekeyliNesne : MonoBehaviour
{
    public float speed = 2.0f;
    public Vector3 startPos1;
    public Vector3 startPos2;

    public Transform currentPoint;
    public Transform nextPoint;
    public GameObject platform;
    // Start is called before the first frame update
    
    void Start()
    {
        startPos1 = platform.transform.position;
        startPos2 = nextPoint.transform.position;
    }

    // Update is called once per frame
    void Update()
    {
        startPos1 = platform.transform.position;
        startPos2 = nextPoint.transform.position;

        platform.transform.position = Vector3.MoveTowards(platform.transform.position, startPos1, Time.deltaTime * speed);
        if (platform.transform.position == startPos1)
        {
            startPos1 = startPos2;
            if (startPos1 == startPos2)
            {
                startPos2 = platform.transform.position;
            }
        }
    }
}
