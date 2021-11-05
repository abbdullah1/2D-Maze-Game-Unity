using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class BackAndExit : MonoBehaviour
{
	
	public void PlayButton()
	{
		SceneManager.LoadScene(1);
	}
	public void BackButton()
	{

		SceneManager.LoadScene(0);
		

	}
	public void ExitButton()
	{
		Application.Quit();
	}
	public void SettingsButton()
	{
		SceneManager.LoadScene(37);
	}



}