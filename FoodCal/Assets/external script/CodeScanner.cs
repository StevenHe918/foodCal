using UnityEngine;
using System.Collections;

using ZXing;
using ZXing.QrCode;
using ZXing.Common;

public class CodeScanner : MonoBehaviour {

	public WebCamController wcc;
	private BarcodeReader codeScanner;
	private string lastScanned = "";

	public delegate void Found(string text, string type);
	public event Found OnCodeScanned;
	public delegate void Lost();
	public event Lost OnCodeLost;

	void Start () {
		codeScanner = new BarcodeReader();
		InvokeRepeating ("ReadCode", 2f, 0.75f);
	}
	
	void ReadCode () {
		var data = codeScanner.Decode(wcc.webcamTexture.GetPixels32(), wcc.webcamTexture.width, wcc.webcamTexture.height);
		if (data != null)
		{
			if (data.Text != lastScanned) {
				OnCodeScanned (data.Text, data.BarcodeFormat.ToString());
			}
			lastScanned = data.Text;
		}
		else
		{
			if (lastScanned != "") {
				lastScanned = "";
				OnCodeLost ();
			}
		}
	}
}
