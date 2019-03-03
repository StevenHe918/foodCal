using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class WebCamController : MonoBehaviour {

	public int desiredWidth = 1280;
	public int desiredHeight = 720;
	public int desiredFPS = 24;
	public RawImage output;
	[HideInInspector]
	public WebCamTexture webcamTexture;

	void Start () {
		webcamTexture = new WebCamTexture(desiredWidth, desiredHeight, desiredFPS);
		output.texture = webcamTexture;
		webcamTexture.Play();
	}

}
