using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using UnityEngine.Advertisements;

public class Manager : MonoBehaviour {
    
    private static int lives = 1;
    private static int maxLives;

    public int levelNumber;
    public Character character;
    private float delay = 0.5f;
    private float fadeTime = 0.5f;

    public GameObject startLine;
    public GameObject finishline;

    public Text percentComplete;
    public Text livesText;
    public Text addLivesText;
    public Image livesImage;

    public GameObject level;

    public bool isDead;
    public bool allowContinue = false;
    public bool isComplete;
    public bool showingAd = false;

    private Data data;

    [SerializeField] string gameID = "2695715";

    void Awake()
    {
        Advertisement.Initialize(gameID, true);
    }

    void Start()
    {
        GameObject dataGO = GameObject.Find("Data");
        data = dataGO.GetComponent<Data>();


        Color color = percentComplete.color;
        color.a = 0;
        percentComplete.color = color;
        livesText.color = color;

        Color imageColor = livesImage.color;
        imageColor.a = 0;
        livesImage.color = imageColor;

        addLivesText.color = color;

        lives = data.lives;
        maxLives = data.maxLives;

        if (lives > maxLives) {
            lives = maxLives;
        }

    }

    public void Update()
    {
        if(isDead && allowContinue) {
            if (Input.touchCount > 1 || Input.anyKeyDown) {
                if (lives <= 0)
                {
                    if (!showingAd)
                    {
                        showingAd = true;
                        ShowAd("video");
                    }
                }
                else
                {
                    Scene scene = SceneManager.GetActiveScene();
                    SceneManager.LoadScene(scene.name);
                }
            }
        } else if (isComplete) {
            if (Input.touchCount > 1 || Input.anyKeyDown)
            {
                SceneManager.LoadScene("LevelSelector");
            }
        }
    }

    public void characterDied() {

        if (isDead) return;

        isDead = true;
        allowContinue = false;

        float levelLength = finishline.transform.position.y -startLine.transform.position.y;
        float characterDistance = ((character.transform.position.y - startLine.transform.position.y) / levelLength) * 100;
        string text = characterDistance.ToString("F0") + "%";
        percentComplete.text = text;

        lives--;

        if (lives < 0) lives = 0;

        livesText.text = lives.ToString();

        data.UpdatedLevel(levelNumber, characterDistance, lives, false);

        Fade();
        StartCoroutine(allowInput());
    }

    public void completeLevel() {
        isComplete = true;

        percentComplete.text = "100%";
        livesText.text = lives.ToString();

        data.UpdatedLevel(levelNumber, 100.0f, lives, true);

        Fade();
    }

    private void Fade() {
        StartCoroutine(FadeLevel());
        StartCoroutine(FadeText());
    }

    IEnumerator allowInput() {
        yield return new WaitForSeconds(1.0f);
        allowContinue = true;
    }

    IEnumerator FadeLevel()
    {
        yield return new WaitForSeconds(delay);
        iTween.FadeTo(level, 0, fadeTime);
        yield return new WaitForSeconds(fadeTime+2);
        iTween.Stop();
    }



    IEnumerator FadeText()
    {
        yield return new WaitForSeconds(delay);

        Color color = percentComplete.color;
        Color imageColor = livesImage.color;

        while (color.a < 1)
        {
            float alpha = Time.deltaTime / fadeTime;
            color.a += alpha;
            percentComplete.color = color;
            livesText.color = color;

            imageColor.a += alpha;
            livesImage.color = imageColor;

            yield return null;
        }
    }

    IEnumerator FadeAddLivesText(bool skipped, bool failed)
    {
        if (failed)
        {
            addLivesText.text = "+1";
            lives += 1;
        }
        else if (skipped)
        {
            addLivesText.text = "+2 (skipped)";
            lives += 2;
        }
        else 
        {
            addLivesText.text = "+" + maxLives.ToString();
            lives += maxLives;
        }

        data.UpdateLives(lives);

       // yield return new WaitForSeconds(delay);

        Color color = addLivesText.color;

        while (color.a < 1)
        {
            float alpha = Time.deltaTime / fadeTime;
            color.a += alpha;
            percentComplete.color = color;
            addLivesText.color = color;

            yield return null;
        }
    }




    // ADS



    public void ShowAd(string zone = "")
    {
        
        Debug.Log("Starting Ads");

#if UNITY_EDITOR
        StartCoroutine(WaitForAd());
#endif

        if (string.Equals(zone, ""))
            zone = "video";

        ShowOptions options = new ShowOptions();
        options.resultCallback = AdCallbackhandler;

        if (Advertisement.IsReady(zone))
            Advertisement.Show(zone, options);
    }

    void AdCallbackhandler(ShowResult result)
    {
        showingAd = false;
        switch (result)
        {
            case ShowResult.Finished:
                StartCoroutine(FadeAddLivesText(false, false));
                break;
            case ShowResult.Skipped:
                StartCoroutine(FadeAddLivesText(true, false));
                break;
            case ShowResult.Failed:
                StartCoroutine(FadeAddLivesText(false, true));
                break;
        }
    }

    IEnumerator WaitForAd()
    {
        
        float currentTimeScale = Time.timeScale;
        Time.timeScale = 0f;
        //yield return new WaitForSeconds(10);

        while (Advertisement.isShowing)
            yield return null;

        Time.timeScale = currentTimeScale;
    }

}
