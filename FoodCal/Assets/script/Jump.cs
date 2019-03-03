using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Jump : MonoBehaviour
{

    // Start is called before the first frame updat

    public void SceneLoad(int Index)
    {

        SceneManager.LoadScene(Index);

    }


}
