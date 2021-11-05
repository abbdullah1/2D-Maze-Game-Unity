using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class Karakter : MonoBehaviour
{
    [Header("Bolum Sonu Panel")]
    public GameObject bolumSonu_P;
    [Space]
    public int toplananItem;
    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag.Contains("Circle"))
        {
            sonrakiLevelKontrolcusu();
            SceneManager.LoadScene("Leveller"); //level seçim ekraný
        }
    }
    public void sonrakiLevelKontrolcusu()
    {
        string currentLevel = levelAdi(SceneManager.GetActiveScene().buildIndex);// (PlayerPrefs.GetString("suankiSecilenLevel");) Yenilendi çünkü level ekranýndan geçiþte kaydettiðimiz leveli alýyorduk fakat sonraki levele bu sahneden geçince kayýtlý level eskisi kalýyor o yüzden direk aktif sahne build indexinden adýný çaðýrýp iþlem yaptýrýyoruz.
        int currentLevelID = int.Parse(currentLevel.Split('_')[1]); //Level_id biçiminde olduðundan saðtaraf yani (id) 

        int nextLevel = PlayerPrefs.GetInt("level") + 1;

        if (currentLevelID == PlayerPrefs.GetInt("seviyeSayisi"))
        {
            Debug.Log("Oyun Sonu");

            bolumSonu_P.transform.GetChild(1).gameObject.SetActive(false); //sonraki level butonunu kapatýyoruz oyun sonuna gelindiði için
        }
        else
        {
            if (nextLevel - currentLevelID == 1)
                PlayerPrefs.SetInt("level", nextLevel);
            else
                Debug.Log("Önceden Açýlmýþ bir bölüme girdiniz.");

            bolumSonu_P.transform.GetChild(1).gameObject.SetActive(true); // sonraki level butonu aktif(eðer son bolüme kadar gidip tekrar onceki bolumlere girerse diye aktif hale getiriyoruz.)          
        }

        bolumSonuPanel(); //bolum sonu panel iþlemlerini baþlat
    }
    SahneGecis sahneGecis;
    private void Start()
    {
        sahneGecis = GameObject.Find("GameManager").GetComponent<SahneGecis>();
    }

    private void bolumSonuPanel()
    {
        bolumSonu_P.SetActive(true);//Panel Aç
       
    }

    string levelAdi(int id)//id den level'in ismini döndürüyor
    {
        string scenePath = SceneUtility.GetScenePathByBuildIndex(id);
        string sceneName = System.IO.Path.GetFileNameWithoutExtension(scenePath);
        return sceneName;
    }
}