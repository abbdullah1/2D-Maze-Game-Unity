using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HareketliObje : MonoBehaviour
{
    [SerializeField] private Transform[] waypoints;
    [SerializeField] private float speed;
    [SerializeField] private bool randomSystem = true;
    private int destinationNumber = 0;

    void Update()
    {
        var distance = Vector3.Distance(transform.position, waypoints[destinationNumber].position);

        if (distance > 0f)
        {
            Move();
            // rotateMe(); // Bu isteğe bağlı kullanılabilir ben kendi oyunlarımda kullanıyordum karakterin kafasını hedefe çeviriyor(z eksenine göre)
        }
        else
        {
            if (!randomSystem)
            {
                destinationNumber = destinationNumber + 1 == waypoints.Length ? 0 : destinationNumber + 1;
            }
            else
                destinationNumber = GetRandomDestNumber();
        }
    }
    private void Move()
    {
        transform.position = Vector3.MoveTowards(transform.position, waypoints[destinationNumber].position, speed * Time.deltaTime);
    }
    private int GetRandomDestNumber()
    {
        int retVal = Random.Range(0, waypoints.Length);
        return retVal;
    }

    private void rotateMe()
    {
        Vector3 toTargetVector = waypoints[destinationNumber].position - transform.position;
        // float zRotation = Mathf.Atan2(toTargetVector.y, toTargetVector.x) * Mathf.Rad2Deg;
        float zRotation = (Mathf.Atan2(toTargetVector.y, toTargetVector.x) * Mathf.Rad2Deg) - 90.0f;
        transform.rotation = Quaternion.Euler(new Vector3(0, 0, zRotation));
    }
}
