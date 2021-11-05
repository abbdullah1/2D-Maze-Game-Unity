using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class LockSystem : MonoBehaviour
{
    public List<Button> leveller; 

    private void Start()
    {
        if (!PlayerPrefs.HasKey("level"))
            PlayerPrefs.SetInt("level", 1);
       
        PlayerPrefs.SetInt("seviyeSayisi", leveller.Count);

        kilitleriAc();

        if (!PlayerPrefs.HasKey("yildizlar"))
        {
            yildizlariDoldur();
        }

        yildizlariAktifEt();
    }


    public string yildizSayisi_S;
    public void yildizlariDoldur()
    {
        for (int i = 0; i < leveller.Count; i++)
        {
            yildizSayisi_S += "0,"; 
        }
        PlayerPrefs.SetString("yildizlar", yildizSayisi_S);

        yildizSayisi_S = PlayerPrefs.GetString("yildizlar");
    }

    public string[] yeniYildizlar;
    public void yildizlariAktifEt()
    {
        yeniYildizlar = PlayerPrefs.GetString("yildizlar").Split(',');

        for (int i = 0; i < leveller.Count; i++)
        {
            for (int j = 0; j < int.Parse(yeniYildizlar[i]); j++)
            {
                leveller[i].transform.GetChild(1).GetChild(j).GetComponent<Image>().color = new Color(255, 255, 255, 255);
            }
        }

    }


    public void kilitleriAc()
    {
        for (int i = 0; i < PlayerPrefs.GetInt("level"); i++)
        {
            leveller[i].interactable = true;
        }
    }

    public string levelAdi(int id)
    {
        string scenePath = SceneUtility.GetScenePathByBuildIndex(id);
        string sceneName = System.IO.Path.GetFileNameWithoutExtension(scenePath);
        return sceneName;
    }

    public void levelAc(int id)
    {
       
        SceneManager.LoadScene(levelAdi(id));

        
    }


}
