using UnityEngine;

[System.Serializable]
public class CardData
{
    public string cardName;
    [TextArea] public string cardDescription;
    public float duration;
    public AbilityType abilityType;
    public Sprite cardIcon; // Opcjonalnie na ikonę  
    public string effectDescription; // Nowe pole na opis efektu
    public string effectModifier; // Nowe pole na wartość efektu
    public Color cardColor; // Nowe pole na kolor karty
}

public enum AbilityType 
{ 
    WrathSurge, 
    RapidFire, 
    FrostNova, 
    GoldRush, 
    IronFortress 
}
