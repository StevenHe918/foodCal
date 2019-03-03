using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class CustomCodeEventHandler : MonoBehaviour {


	public Text txt;
	public CodeScanner codeScanner;
	void Awake() {
		//We add the desired events to do custom actions
		codeScanner.OnCodeScanned += OnCodeScanned;
		codeScanner.OnCodeLost += OnCodeLost;
	}

    public void SceneLoad(int Index)
    {

        SceneManager.LoadScene(Index);

    }



    void OnCodeScanned(string text, string type) {
		txt.text = text;
        SceneLoad(2);


    }

    void OnCodeLost () {
		txt.text = "No code here";
	}
}
