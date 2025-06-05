using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UI.Animations;
using Player;
using MMK;
using TMPro;
using Unity.VisualScripting;
// using Task = System.Threading.Tasks.Task;

public class VersusScreen : MonoBehaviour

{
    [SerializeField] UIAnimation openVersusPanel;
    // Player 1
    [Space(10)]
    [SerializeField] GameObject player1;
    [SerializeField] Sprite player1Avatar;
    [SerializeField] TMP_Text Player1Exp;
    [SerializeField] TMP_Text Player1Lvl;

    // Player 1
    [Space(10)]
    [SerializeField] GameObject player2;
    [SerializeField] Sprite player2Avatar;
    [SerializeField] TMP_Text Player2Exp;
    [SerializeField] TMP_Text Player2Lvl;

    // Zombie Decks
    [Space(10)]
    [SerializeField] Sprite[] zombieSprites = new Sprite[5]; // Assuming Zombies has a deck of 5 towers

    // Start is called before the first frame update
    IEnumerator Start()
    {
        GameObject player1Deck = player1.transform.GetChild(1).gameObject;
        GameObject player1Profile = player1.transform.GetChild(0).gameObject;

        GameObject player2Deck = player2.transform.GetChild(1).gameObject;
        GameObject player2Profile = player2.transform.GetChild(0).gameObject;

        // Set player1 deck
        SetPlayerDeckSprites(player1Deck);

        // Set player1 profile picture
        player1Profile.transform.GetChild(0).GetChild(0).gameObject.GetComponent<Image>().sprite = player1Avatar;

        // Set player1 profile level
        UpdateExperienceText(PlayerController.GetLocalPlayerData().Level, Player1Exp, Player1Lvl);



        // Set player2 deck
        SetZombieDeckSprites(zombieSprites, player2Deck);

        // Set player2 profile picture
        player2Profile.transform.GetChild(0).GetChild(0).gameObject.GetComponent<Image>().sprite = player2Avatar;

        // Set player2 profile level
        UpdateExperienceText(999, Player2Exp, Player2Lvl);




        openVersusPanel.PlayAnimation();
        yield return openVersusPanel.Wait();

        // Wait for the animation to finish before proceeding
        Destroy(this.gameObject); // Destroy the VersusScreen object after the animation
    }

    void UpdateExperienceText(ulong Level, TMP_Text ExperienceText, TMP_Text LevelText)
    {
        ExperienceText.text = $"{StringFormatter.GetSpriteText(new SpriteTextData() { SpriteName = GlobalSettingsManager.GetGlobalSettings().LevelIconName, WithColor = true, Color = (Level == 999 ? new Color(0.454f, 0.149f, 0.723f, 1) : GlobalSettingsManager.GetGlobalSettings().GetCurrentLevelColor(Level)) })}";
        LevelText.text = $"{Level}";
    }

    void SetPlayerDeckSprites(GameObject playerDeck)
    {
        for (int i = 0; i < playerDeck.transform.childCount; i++)
        {
            Image towerSprite = playerDeck.transform.GetChild(i).GetChild(0).GetChild(0).gameObject.GetComponent<Image>();

            if (PlayerController.GetLocalPlayerData().Deck[i].Value != null)
            {
                towerSprite.sprite = PlayerController.GetLocalPlayerData().Deck[i].Value.CurrentSkin.TowerSprite;
                towerSprite.color = new Color(1f, 1f, 1f, 1f); // Set the color to fully opaque
            }
            else
            {
                towerSprite.sprite = null; // Set to null if no tower is selected
                towerSprite.color = new Color(1f, 1f, 1f, 0f); // Set the color to fully transparent
            }
        }
    }

    void SetZombieDeckSprites(Sprite[] zombieSprites, GameObject playerDeck)
    {
        for (int i = 0; i < playerDeck.transform.childCount; i++)
        {
            Image towerSprite = playerDeck.transform.GetChild(i).GetChild(0).GetChild(0).gameObject.GetComponent<Image>();

            if (zombieSprites != null)
            {
                towerSprite.sprite = zombieSprites[i];
                towerSprite.color = new Color(1f, 1f, 1f, 1f); // Set the color to fully opaque
            }
            else
            {
                towerSprite.sprite = null; // Set to null if no tower is selected
                towerSprite.color = new Color(1f, 1f, 1f, 0f); // Set the color to fully transparent
            }
        }
    }
}
