using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System.IO;
using System.Net;
using Newtonsoft.Json;
using System;

public class CustomCodeEventHandler : MonoBehaviour {


	public Text txt;
    static public string passT;
	public CodeScanner codeScanner;

    static public string passName;
    protected string api = "https://chompthis.com/api/product-code.php";
    protected string query_base = "?token=HngToisRJcGnXzCd";

   
    void Awake() {
		//We add the desired events to do custom actions
		codeScanner.OnCodeScanned += OnCodeScanned;
		codeScanner.OnCodeLost += OnCodeLost;
	}

    public string SearchAPI(string text)
    {
        string result;
        query_base += ("&code=" + text);
        HttpWebRequest request = (HttpWebRequest)WebRequest.Create(api + query_base);
        request.AutomaticDecompression = DecompressionMethods.GZip | DecompressionMethods.Deflate;
        using (HttpWebResponse response = (HttpWebResponse)request.GetResponse())
        using (Stream stream = response.GetResponseStream())
        using (StreamReader reader = new StreamReader(stream))

        { result = reader.ReadToEnd(); }

        var json = JsonUtility.ToJson(result);
     //  char name = json[1];
     //   string brand = json["products"][text]["brand"];
       // string ingredients = json["product"][text]["details"]["ingredients"];

        return result;
    }

    public void SceneLoad(int Index)
    {

        SceneManager.LoadScene(Index);

    }



    void OnCodeScanned(string text, string type) {
		txt.text = text;
        passT = text;
        passName = SearchAPI(text);
        SceneLoad(2);


    }

    void OnCodeLost () {
		txt.text = "No code here";
	}
}
