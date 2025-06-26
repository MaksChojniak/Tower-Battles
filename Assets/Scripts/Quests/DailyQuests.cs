using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using MMK;
using MMK.Towers;
using UI;
using Player;

public class DailyQuests : MonoBehaviour
{
    [SerializeField] TMP_Text resetTimeText;
    [SerializeField] GameObject questStorage;
    public static Action<float> OnUpdate;
    public List<Quest> displayedQuests;

    // Only definitions, not live quest objects!
    public QuestDefinition[] questPool = new QuestDefinition[]
    {
        new QuestDefinition("Play for 15 minutes.", QuestTier.Common, () => new PlayTimeQuest(15), 15),
        new QuestDefinition("Play for 20 minutes.", QuestTier.Rare, () => new PlayTimeQuest(20), 25),
        new QuestDefinition("Play for 30 minutes.", QuestTier.Epic, () => new PlayTimeQuest(30), 50),
        new QuestDefinition("Play for 45 minutes.", QuestTier.Extraordinary, () => new PlayTimeQuest(45), 75),
        new QuestDefinition("Play for 60 minutes.", QuestTier.Legendary, () => new PlayTimeQuest(60), 100),

        new QuestDefinition("Kill 100 zombies.", QuestTier.Common, () => new KillEnemiesQuest(100), 15),
        new QuestDefinition("Kill 125 zombies.", QuestTier.Rare, () => new KillEnemiesQuest(125), 25),
        new QuestDefinition("Kill 175 zombies.", QuestTier.Epic, () => new KillEnemiesQuest(175), 50),
        new QuestDefinition("Kill 275 zombies.", QuestTier.Extraordinary, () => new KillEnemiesQuest(275), 75),
        new QuestDefinition("Kill 400 zombies.", QuestTier.Legendary, () => new KillEnemiesQuest(400), 100),

        new QuestDefinition("Place 3 towers.", QuestTier.Common, () => new PlaceTowersQuest(3), 15),
        new QuestDefinition("Place 8 towers.", QuestTier.Rare, () => new PlaceTowersQuest(8), 25),
        new QuestDefinition("Place 15 towers.", QuestTier.Epic, () => new PlaceTowersQuest(15), 50),
        new QuestDefinition("Place 20 towers.", QuestTier.Extraordinary, () => new PlaceTowersQuest(20), 75),
        new QuestDefinition("Place 30 towers.", QuestTier.Legendary, () => new PlaceTowersQuest(30), 100),

        new QuestDefinition("Survive 10 waves.", QuestTier.Common, () => new SurviveWavesQuest(10), 15),
        new QuestDefinition("Survive 15 waves.", QuestTier.Rare, () => new SurviveWavesQuest(15), 25),
        new QuestDefinition("Survive 20 waves.", QuestTier.Epic, () => new SurviveWavesQuest(20), 50),
        new QuestDefinition("Survive 25 waves.", QuestTier.Extraordinary, () => new SurviveWavesQuest(25), 75),
        new QuestDefinition("Survive 40 waves.", QuestTier.Legendary, () => new SurviveWavesQuest(40), 100),
    };

    void Start()
    {
        string nextResetStr = PlayerPrefs.GetString("NextDailyQuestReset", "");
        DateTime nextReset;

        if (string.IsNullOrEmpty(nextResetStr) || !DateTime.TryParse(nextResetStr, out nextReset) || DateTime.Now >= nextReset)
        {
            ResetAndRandomizeDailyQuests();
        }
        else
        {
            // Load the saved quest indices
            string indicesStr = PlayerPrefs.GetString("DailyQuestIndices", "");
            List<Quest> loadedQuests = new List<Quest>();
            if (!string.IsNullOrEmpty(indicesStr))
            {
                var indices = indicesStr.Split(',').Select(s => int.Parse(s)).ToArray();
                foreach (var idx in indices)
                {
                    if (idx >= 0 && idx < questPool.Length)
                    {
                        var def = questPool[idx];
                        loadedQuests.Add(new Quest(def.description, def.tier, def.questTypeFactory(), def.reward));
                    }
                }
            }
            // Fallback if something went wrong
            if (loadedQuests.Count != 4)
            {
                var indices = Enumerable.Range(0, questPool.Length).ToList();
                RandomizeQuests(indices);
                loadedQuests = indices.Take(4)
                    .Select(i => new Quest(
                        questPool[i].description,
                        questPool[i].tier,
                        questPool[i].questTypeFactory(),
                        questPool[i].reward))
                    .ToList();
            }

            // Deinit old quests if needed (optional, for safety)
            if (displayedQuests != null)
                foreach (var quest in displayedQuests)
                    quest.Deinit();

            displayedQuests = loadedQuests;

            foreach (var quest in displayedQuests)
                quest.Init();

            UpdateQuestUI(displayedQuests);
        }
    }

    void Update()
    {
        UpdateQuestUI(displayedQuests);

        // Show reset time
        string nextResetStr = PlayerPrefs.GetString("NextDailyQuestReset", "");
        if (!string.IsNullOrEmpty(nextResetStr))
        {
            DateTime nextReset;
            if (DateTime.TryParse(nextResetStr, out nextReset))
            {
                if (DateTime.Now >= nextReset)
                {
                    ResetAndRandomizeDailyQuests();
                }
                else if (resetTimeText != null)
                {
                    TimeSpan timeLeft = nextReset - DateTime.Now;
                    resetTimeText.text = $"New quests in: {timeLeft.Hours:D2}h {timeLeft.Minutes:D2}min";
                }
            }
            else if (resetTimeText != null)
            {
                resetTimeText.text = "Next reset: unknown";
            }
        }
        else if (resetTimeText != null)
        {
            resetTimeText.text = "Next reset: unknown";
        }
    }

    public enum QuestTier : int
    {
        Common = 1,
        Rare = 2,
        Epic = 3,
        Extraordinary = 4,
        Legendary = 5
    };

    [Serializable]
    public class QuestDefinition
    {
        public string description;
        public QuestTier tier;
        public Func<QuestType> questTypeFactory;
        public int reward;

        public QuestDefinition(string desc, QuestTier tier, Func<QuestType> factory, int reward)
        {
            description = desc;
            this.tier = tier;
            questTypeFactory = factory;
            this.reward = reward;
        }
    }

    [Serializable]
    public class Quest
    {
        public string description;
        public QuestTier questTier;
        public QuestType questType;
        public int reward;

        public Quest(string desc, QuestTier tier, QuestType type, int rewardAmount)
        {
            description = desc;
            questTier = tier;
            questType = type;
            reward = rewardAmount;
        }
        public void Init()
        {
            questType.Init();
            if (!questType.isCompleted && questType.GetCurrentProgress() >= questType.GetTargetProgress())
                CompleteQuest();

        }
        public void Deinit()
        {
            questType.Deinit();
        }
        public void CompleteQuest()
        {
            questType.CompleteQuest();
            // Logic to give the reward to the player
            Debug.Log($"Quest completed! Reward: {reward}");

            MessageQueue.AddMessageToQueue?.Invoke(new Message()
            {
                MessageType = MessageType.Normal,
                Tittle = $"{StringFormatter.GetColoredText($"Quest completed!", QuestRarityColor(questTier))}",
                Properties = new List<MessageProperty>()
                {
                    new MessageProperty() {Name = $"Coins", Value = $"{StringFormatter.GetCoinsText(reward, true, "66%")}"},
                },
            });
            PlayerData.ChangeCoinsBalance(reward);
        }
        public void ResetQuest() => questType.ResetQuest();
    };

    public abstract class QuestType
    {
        public bool isCompleted;
        protected string saveKey;

        public abstract float GetProgressPercentage();
        public abstract float GetTargetProgress();
        public abstract float GetCurrentProgress();
        public abstract void ResetProgress();
        public virtual void Init()
        {
            isCompleted = PlayerPrefs.GetInt($"{saveKey}_Completed", 0) != 0;
        }
        public abstract void Deinit();

        public void CompleteQuest()
        {
            isCompleted = true;
            PlayerPrefs.SetInt($"{saveKey}_Completed", isCompleted ? 1 : 0);
        }

        public void ResetQuest()
        {
            isCompleted = false;
            PlayerPrefs.SetInt($"{saveKey}_Completed", isCompleted ? 1 : 0);

            ResetProgress();
        }
        

    };

    public class PlayTimeQuest : QuestType
    {
        int targetTime;
        int currentTime;
        float timer;
        public PlayTimeQuest(int targetTimeValue)
        {
            targetTime = targetTimeValue;
            saveKey = $"PlayTimeQuest_{targetTime}";
            timer = 0f;
        }

        public override void Init()
        {
            Debug.Log("Init: " + saveKey);
            base.Init();

            currentTime = PlayerPrefs.GetInt(saveKey, 0);
            DailyQuests.OnUpdate += OnUpdate;
        }
        public override void Deinit()
        {
            Debug.Log("Deinit: " + saveKey);
            DailyQuests.OnUpdate -= OnUpdate;
        }
        public override float GetProgressPercentage() => Mathf.Clamp01(GetCurrentProgress() / GetTargetProgress());
        public override float GetCurrentProgress() => currentTime;
        public override float GetTargetProgress() => targetTime;
        public override void ResetProgress()
        {
            currentTime = 0;
            PlayerPrefs.SetInt(saveKey, 0);
            PlayerPrefs.Save();
        }
        void OnUpdate(float deltaTime)
        {
            if (currentTime >= targetTime) return; // Stop updating if completed

            timer += deltaTime;
            if (timer >= 60f)
            {
                timer -= 60f;
                currentTime++;
                PlayerPrefs.SetInt(saveKey, currentTime);
                PlayerPrefs.Save();
            }
        }
    }
    public class KillEnemiesQuest : QuestType
    {
        public static Action AddKill;
        int targetKills;
        int currentKills;
        public KillEnemiesQuest(int targetKillsValue)
        {
            targetKills = targetKillsValue;
            saveKey = $"KillEnemiesQuest_{targetKills}";
            currentKills = 0;
        }
        public override void Init()
        {
            base.Init();

            currentKills = PlayerPrefs.GetInt(saveKey, 0);
            AddKill += OnEnemyKilled;
        }
        public override void Deinit()
        {
            AddKill -= OnEnemyKilled;
        }
        public override float GetProgressPercentage() => Mathf.Clamp01(GetCurrentProgress() / GetTargetProgress());
        public override float GetCurrentProgress() => currentKills;
        public override float GetTargetProgress() => targetKills;
        public override void ResetProgress()
        {
            currentKills = 0;
            PlayerPrefs.SetInt(saveKey, 0);
            PlayerPrefs.Save();
        }
        void OnEnemyKilled()
        {
            if (currentKills >= targetKills) return; // Stop updating if completed
            currentKills += 1;
            PlayerPrefs.SetInt(saveKey, currentKills);
            PlayerPrefs.Save();
        }
    }
    public class PlaceTowersQuest : QuestType
    {
        int targetTowers;
        int currentTowers;

        public PlaceTowersQuest(int targetKillsValue)
        {
            targetTowers = targetKillsValue;
            saveKey = $"PlaceTowersQuest_{targetTowers}";
            currentTowers = 0;
        }
        public override void Init()
        {
            base.Init();

            currentTowers = PlayerPrefs.GetInt(saveKey, 0);
            TowerSpawner.OnTowerPlaced += OnTowerPlaced;
        }
        public override void Deinit()
        {
            TowerSpawner.OnTowerPlaced -= OnTowerPlaced;
        }

        public override float GetProgressPercentage() => Mathf.Clamp01(GetCurrentProgress() / GetTargetProgress());
        public override float GetCurrentProgress() => currentTowers;
        public override float GetTargetProgress() => targetTowers;
        public override void ResetProgress()
        {
            currentTowers = 0;
            PlayerPrefs.SetInt(saveKey, 0);
            PlayerPrefs.Save();
        }
        void OnTowerPlaced(TowerController Tower)
        {
            if (currentTowers >= targetTowers) return; // Stop updating if completed
            currentTowers += 1;
            PlayerPrefs.SetInt(saveKey, currentTowers);
            PlayerPrefs.Save();
        }
    }
    public class SurviveWavesQuest : QuestType
    {
        int targetWaves;
        int currentWaves;
        public SurviveWavesQuest(int targetWavesValue)
        {
            targetWaves = targetWavesValue;
            saveKey = $"SurviveWavesQuest_{targetWaves}";
            currentWaves = 0;
        }
        public override void Init()
        {
            base.Init();

            currentWaves = PlayerPrefs.GetInt(saveKey, 0);
            WaveManager.OnEndWave += OnSurvivedWave;
        }
        public override void Deinit()
        {
            WaveManager.OnEndWave -= OnSurvivedWave;
        }

        public override float GetProgressPercentage() => Mathf.Clamp01(GetCurrentProgress() / GetTargetProgress());
        public override float GetCurrentProgress() => currentWaves;
        public override float GetTargetProgress() => targetWaves;
        public override void ResetProgress()
        {
            currentWaves = 0;
            PlayerPrefs.SetInt(saveKey, 0);
            PlayerPrefs.Save();
        }
        void OnSurvivedWave(uint _)
        {
            if (currentWaves >= targetWaves) return; // Stop updating if completed
            currentWaves += 1;
            PlayerPrefs.SetInt(saveKey, currentWaves);
            PlayerPrefs.Save();
        }
    }

    public void RandomizeQuests(List<int> indices)
    {
        for (int i = 0; i < indices.Count; ++i)
        {
            int j = UnityEngine.Random.Range(0, indices.Count);
            int temp = indices[j];
            indices[j] = indices[i];
            indices[i] = temp;
        }
    }
    void UpdateQuestUI(List<Quest> quests)
    {
        for (int i = 0; i < Mathf.Min(4, quests.Count); i++)
        {
            Quest quest = quests[i];

            questStorage.transform.GetChild(i).gameObject.GetComponent<Image>().color = QuestRarityColor(quest.questTier);
            questStorage.transform.GetChild(i).GetChild(0).GetComponentInChildren<TMP_Text>().text = $"tier \n{(int)quest.questTier}";
            questStorage.transform.GetChild(i).GetChild(1).GetComponentInChildren<TMP_Text>().text = $"{quest.description}";

            questStorage.transform.GetChild(i).GetChild(2).GetComponentInChildren<TMP_Text>().text = $"{quest.questType.GetCurrentProgress()}/{quest.questType.GetTargetProgress()}";
            questStorage.transform.GetChild(i).GetChild(2).GetChild(1).GetChild(0).GetChild(0).GetComponentInChildren<Image>().fillAmount = quest.questType.GetProgressPercentage();

            questStorage.transform.GetChild(i).GetChild(3).GetComponentInChildren<TMP_Text>().text = $"{StringFormatter.GetCoinsText((long)quest.reward, true, "66%")}";
            questStorage.transform.GetChild(i).GetChild(4).gameObject.SetActive(quest.questType.isCompleted);
        }
    }
    public void ResetAndRandomizeDailyQuests()
    {
        // Reset and deinit old quests    
        if (displayedQuests != null)
        {
            foreach (var quest in displayedQuests)
            {
                quest.Deinit();
                quest.ResetQuest();   // <-- This clears progress in PlayerPrefs
            }
        }

        // Randomize indices
        List<int> indices = Enumerable.Range(0, questPool.Length).ToList();
        RandomizeQuests(indices);

        // Pick 4 and create Quest objects
        displayedQuests = indices.Take(4)
            .Select(i => new Quest(
                questPool[i].description,
                questPool[i].tier,
                questPool[i].questTypeFactory(),
                questPool[i].reward))
            .ToList();

        // Save their indices for persistence
        PlayerPrefs.SetString("DailyQuestIndices", string.Join(",", indices.Take(4)));

        // Initialize quest progress from PlayerPrefs for new quests
        foreach (var quest in displayedQuests)
            quest.Init();

        // Calculate next 12:00 PM (noon) UTC using server time
        DateTime nowUtc = ServerDate.SimulatedDateOnServerUTC();
        DateTime nextReset = new DateTime(nowUtc.Year, nowUtc.Month, nowUtc.Day, 12, 0, 0, DateTimeKind.Utc);
        if (nowUtc >= nextReset)
            nextReset = nextReset.AddDays(1); // If it's past noon, set to next day's noon

        PlayerPrefs.SetString("NextDailyQuestReset", nextReset.ToString("yyyy-MM-dd HH:mm", System.Globalization.CultureInfo.InvariantCulture));
        PlayerPrefs.Save();

        // Update the UI
        UpdateQuestUI(displayedQuests);
    }

    public  static Color QuestRarityColor(QuestTier tier)
    {
        switch (tier)
        {
            case QuestTier.Common:
                return new Color(0.1988445f, 0.5188679f, 0.01713244f, 1f); // Green
            case QuestTier.Rare:
                return new Color(0.01568626f, 0.391495f, 0.5176471f, 1f); // Blue
            case QuestTier.Epic:
                return new Color(0.4656722f, 0.01568626f, 0.5176471f, 1f); // Purple
            case QuestTier.Extraordinary:
                return new Color(0.5176471f, 0.09338088f, 0.01568626f, 1f); // Red
            case QuestTier.Legendary:
                return new Color(0.8207547f, 0.615566f, 0.0f, 1f); // Yellow
            default:
                return Color.white; // Default color
        }
    }

    public void ShowProgress()
    {
        foreach (var def in questPool)
        {
            // Build the saveKey string manually based on the quest type and parameters
            string saveKey = "";
            if (def.description.StartsWith("Play for"))
                saveKey = $"PlayTimeQuest_{def.description.Split(' ')[2]}";
            else if (def.description.StartsWith("Kill"))
                saveKey = $"KillEnemiesQuest_{def.description.Split(' ')[1]}";
            else if (def.description.StartsWith("Place"))
                saveKey = $"PlaceTowersQuest_{def.description.Split(' ')[1]}";
            else if (def.description.StartsWith("Survive"))
                saveKey = $"SurviveWavesQuest_{def.description.Split(' ')[1]}";
            else
                continue;

            int progress = PlayerPrefs.GetInt(saveKey, 0);
            Debug.Log($"{def.description} ({saveKey}): {progress}");
        }
    }
}