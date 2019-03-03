using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DisResult : MonoBehaviour
{
    public Text display;

    // Start is called before the first frame update
    void Start()
    {
        display.text = CustomCodeEventHandler.passName;
        Console.WriteLine(display.text);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
