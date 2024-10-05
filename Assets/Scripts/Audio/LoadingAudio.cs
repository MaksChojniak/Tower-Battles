using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LoadingAudio : MonoBehaviour
{

    [SerializeField] AudioSource aud1;
    [SerializeField] AudioSource aud2;
    [SerializeField] AudioSource aud3;
    [SerializeField] AudioSource aud4;
    [SerializeField] AudioSource aud5;
    // Start is called before the first frame update
    void Start()
    {

        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    public void SpinAudio()
    {
        aud1.Play();
    }
    public void ShootAudio()
    {
        aud2.Play();
    }
    public void LoadAudio()
    {
        aud3.Play();
    }
    public void EndAudio()
    {
        aud4.Play();
    }
    public void BloodAudio()
    {
        aud5.Play();
    }
}
