using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Level : MonoBehaviour
{
    public int levelNumber;
    private Button levelButton;

    private GameObject[] stars;
    private int levelStarCount = 0;


    void Start()
    {
        var starsContainer = gameObject.transform.Find("Stars");
        stars = new GameObject[starsContainer.childCount];

        var curStarCount = 0;
        foreach (Transform child in starsContainer)
        {
            stars[curStarCount] = child.gameObject;
            curStarCount++;
        }

        levelButton = gameObject.GetComponent<Button>();

        levelStarCount = PlayerPrefs.GetInt("LevelStarCount_" + levelNumber, 0);

        foreach (var star in stars)
        {
            star.SetActive(false);
        }

        if (levelStarCount > 0)
        {
            for (var i = 0; i < levelStarCount; i++)
            {
                stars[i].SetActive(true);
            }
        }

        levelButton.interactable = PlayerPrefs.GetInt("LastActiveLevel", 2) >= levelNumber ? true : false;
    }
}
