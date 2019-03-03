using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class getSearch : MonoBehaviour
{

    public InputField Search;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    public void SceneLoader(int Index)
    {

        SceneManager.LoadScene(Index);

    }

    // Update is called once per frame
    public void Check_search()
    {
        if (Search.text == "0842234000988") //the returned value is null or empty string
            SceneLoader(2);
        else
             SceneLoader(3);
    }

}
