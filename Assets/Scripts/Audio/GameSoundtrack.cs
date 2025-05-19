using MMK;
using MMK.Settings;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameSoundtrack : MonoBehaviour
{
    [SerializeField] AudioSource audioSource;
    [SerializeField] float mutePercentage = 0.2f;
    [SerializeField] float fadeDuration = 5f;

    public bool isMusicStarted = false;
    private float StartVolume = 0f;

    private void Awake()
    {
        GameObject[] soundTracks = GameObject.FindGameObjectsWithTag("Soundtrack");
        // Check if an instance of this object already exists
        if (soundTracks.Length > 1)
        {
            Destroy(this.gameObject); // Destroy this object if another instance exists
            return;
        }

        DontDestroyOnLoad(this.gameObject); // Keep this object alive across scenes]


        SceneManager.sceneLoaded += OnSceneLoaded; // Subscribe to the scene loaded event
        SceneManager.sceneUnloaded += OnSceneUnloaded; // Subscribe to the scene unloaded event
    }
    private void OnDestroy()
    {
        SceneManager.sceneLoaded -= OnSceneLoaded; // Unsubscribe from the scene loaded event
        SceneManager.sceneUnloaded -= OnSceneUnloaded; // Unsubscribe from the scene unloaded event
    }

    private void OnSceneLoaded(Scene scene, LoadSceneMode mode)
    {
        var gameScenes = GlobalSettingsManager.GetGlobalSettings?.Invoke().gameScenes;
        StartVolume = GameObject.FindObjectOfType<SettingsManager>().Settings.AudioSettings.MusicVolume / 100f;

        if (gameScenes.Contains(scene.buildIndex))
        {
            StartCoroutine(LerpVolume(StartVolume * mutePercentage, fadeDuration));
        }
        else if (scene.buildIndex == 1 && !isMusicStarted) // Assuming 1 is the main menu scene
        {
            isMusicStarted = true;
            StartCoroutine(LerpVolume(StartVolume, fadeDuration));
        }

    }

    private void OnSceneUnloaded(Scene scene)
    {
        var gameScenes = GlobalSettingsManager.GetGlobalSettings?.Invoke().gameScenes;

        if (gameScenes.Contains(scene.buildIndex))
        {
            StartCoroutine(LerpVolume(StartVolume, fadeDuration));
        }
    }
    IEnumerator LerpVolume(float targetVolume, float duration)
    {
        float time = 0f;
        float startValue = audioSource.volume;

        while (time < duration)
        {
            audioSource.volume = Mathf.Lerp(startValue, targetVolume, time / duration);
            time += Time.deltaTime;
            yield return null;
        }
        audioSource.volume = targetVolume;
    }
}
