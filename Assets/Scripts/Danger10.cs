using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class Danger10 : MonoBehaviour
{

    private void OnTriggerEnter2D(Collider2D other)
    {
        if (other.gameObject.tag.Contains("Circle"))
        {
            SceneManager.LoadScene(11);
            //SceneManager.LoadScene("Leveller"); //level se�im ekran�
        }
    }
    // Start is called before the first frame update

}