using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class FinishScript2 : MonoBehaviour
{

   
    public int toplananItem;
    public Text skor;
    public AudioClip[] sesler;



    private void OnTriggerEnter2D(Collider2D other)
    {

        if (other.gameObject.tag.Contains("Finish"))
        {
            sonrakiLevelKontrolcusu();
            GetComponent<AudioSource>().PlayOneShot(sesler[1]);

        }
        if (other.gameObject.tag.Contains("End"))
        {
            SceneManager.LoadScene(1);

        }

        if (other.gameObject.tag.Contains("Star"))
        {
            Destroy(other.gameObject);
            toplananItem += 1;
            skor.text = "Stars = " + toplananItem;
            GetComponent<AudioSource>().PlayOneShot(sesler[0]);
        }
        if (other.gameObject.tag.Contains("Deneme"))
        {
            GetComponent<AudioSource>().PlayOneShot(sesler[1]);
        }


    }

    public void sonrakiLevelKontrolcusu()
    {
        int currentLevel = SceneManager.GetActiveScene().buildIndex;

        int savedCollectedStars = PlayerPrefs.GetInt("LevelStarCount_" + currentLevel, 0);

        if (toplananItem > savedCollectedStars)
        {
            PlayerPrefs.SetInt("LevelStarCount_" + currentLevel, toplananItem);
        }

        if (currentLevel == PlayerPrefs.GetInt("seviyeSayisi") + 1)
        {
            Debug.Log("Oyun Sonu");
        }
        else
        {

            if (PlayerPrefs.GetInt("LastActiveLevel", 1) < currentLevel + 1)
            {
                PlayerPrefs.SetInt("LastActiveLevel", currentLevel + 1);
            }

            SceneManager.LoadScene(currentLevel + 1);
        }
    }
    private void Start()
    {



    }
    private void Update()
    {


    }




}