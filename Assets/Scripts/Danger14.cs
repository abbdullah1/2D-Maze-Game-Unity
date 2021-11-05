using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class Danger14 : MonoBehaviour
{

    private void OnTriggerEnter2D(Collider2D other)
    {
        if (other.gameObject.tag.Contains("Circle"))
        {
            SceneManager.LoadScene(15);

        }
    }
    // Start is called before the first frame update

}