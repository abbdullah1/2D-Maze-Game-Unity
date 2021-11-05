using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class musicVolume : MonoBehaviour
{
    public Text VolumeAmount;
    public Slider slider;

	private void Start()
	{
		
	}
	public void SetAudio(float value)
	{
        AudioListener.volume = value;
        VolumeAmount.text = ((int)(value * 100)).ToString();
        SaveAudio();
    }
        // Start is called before the first frame update
    private void SaveAudio()
	{
		PlayerPrefs.SetFloat("audioVolume", AudioListener.volume);
	}
	private void LoadAudio()
	{
		if (PlayerPrefs.HasKey("audioVolume"))
		{
			AudioListener.volume = PlayerPrefs.GetFloat("audioVolume");
			slider.value = PlayerPrefs.GetFloat("audioVolume");
		}
		else
		{
			PlayerPrefs.SetFloat("audioVolume",0.4f);
			AudioListener.volume = PlayerPrefs.GetFloat("audioVolume");
			slider.value = PlayerPrefs.GetFloat("audioVolume");
		}
	}
       
}
