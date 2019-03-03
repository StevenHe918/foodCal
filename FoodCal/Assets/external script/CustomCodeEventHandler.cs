using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System.IO;
using System.Net;
using Newtonsoft.Json;
using System;
using Newtonsoft.Json.Linq;
using System.Collections.Generic;
using System.Linq;

public class CustomCodeEventHandler : MonoBehaviour {


	public Text txt;
    static public string passT;
	public CodeScanner codeScanner;
    public Canvas textBox;

    static public string passName;
    protected string api = "https://chompthis.com/api/product-code.php";
    protected string query_base = "?token=HngToisRJcGnXzCd";

  
    void Awake() {
        textBox.gameObject.SetActive(false);
        //We add the desired events to do custom actions
        codeScanner.OnCodeScanned += OnCodeScanned;
		codeScanner.OnCodeLost += OnCodeLost;
	}

    public class BlogPost
    {
        public string Name { get; set; }
        public string Brand { get; set; }
        public string tags { get; set; }
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

        if (text != "0842234000988")
        {
            SceneLoad(3);
            return result;
        }
        return result;
        // JArray blogPostArray = JArray.Parse(result);
        // IList<BlogPost> blogPosts = blogPostArray.Select(p => new BlogPost
        // {
        //     Brand = (string)p["products"][text]["details"]["brand"],
        //     tags = (string)p["products"][text]["details"]["ingredients"],  
        //     Name = (string)p["products"][text]["details"]["lifestyle"]["gluten-free"]["name"]
        // }).ToList();

        //  char name = json[1];
        //   string brand = json["products"][text]["brand"];
        // string ingredients = json["product"][text]["details"]["ingredients"];


    }

    public void SceneLoad(int Index)
    {

        SceneManager.LoadScene(Index);

    }



    void OnCodeScanned(string text, string type) {
		txt.text = text;
        textBox.gameObject.SetActive(true);
        passT = text;
        passName = SearchAPI(text);
        if(text == "0842234000988")
            SceneLoad(2);
        else
            SceneLoad(3);


    }

    void OnCodeLost () {
		txt.text = "No code here";
	}
}
