using MMK;
using Player;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class PlayerProfile : MonoBehaviour
{
    

    [SerializeField] TMP_Text gameCountText;
    [SerializeField] TMP_Text maxWaveText;
    [SerializeField] TMP_Text playerNameText;

    // Start is called before the first frame update
    void Start()
    {
        gameCountText.text = "Games Played: " + PlayerController.GetLocalPlayerData.Invoke().PlayerGamesData.Survival_GamesCount.ToString() + " ";
        gameCountText.text += StringFormatter.GetSpriteText(new SpriteTextData() { SpriteName = GlobalSettingsManager.GetGlobalSettings.Invoke().TrophyIconName });

        maxWaveText.text = "Max Wave: " + PlayerController.GetLocalPlayerData.Invoke().PlayerGamesData.MaxWaveCount.ToString() + " ";
        maxWaveText.text += StringFormatter.GetSpriteText(new SpriteTextData() { SpriteName = GlobalSettingsManager.GetGlobalSettings.Invoke().ZombieIconName });


        playerNameText.text = PlayerController.GetLocalPlayerData.Invoke().Nickname.ToString();
    }
    
    public void UpdateNickname(string nickname) => PlayerController.GetLocalPlayerData.Invoke().Nickname = nickname;
}
