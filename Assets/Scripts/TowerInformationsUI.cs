using System;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace MMK
{
    
    [Serializable]
    public class TowerInformationsUI
    {
        public TMP_Text TowerNameText;
        public Image TowerImage;
        
        [Space(12)]
        public Button SellButton;
        public TMP_Text SellPriceText => SellButton.transform.GetChild(0).GetComponent<TMP_Text>();
        
        [Space(12)]
        public Button UpgradeButton;
        public TMP_Text UpgradePriceText => UpgradeButton.transform.GetChild(0).GetComponent<TMP_Text>();

        [Space(12)]
        public GameObject TargetModeButtonPanel;
        public TMP_Text TargetModeText => TargetModeButtonPanel.transform.GetChild(0).GetComponent<TMP_Text>();

        [Space(12)]
        public GameObject TargetModePanel;
        public Button[] TargetModeButtons;

        [Space(12)]
        public GameObject GivenDamagePanel;
        public TMP_Text GivenDamageText => GivenDamagePanel.GetComponent<TMP_Text>();

        [Space(12)]
        public Image MaxedOutImage;

        [Space(12)]
        public Image UpgradeProgressBar;


        [Space(18)]
        public GameObject Property_01_Panel;
        public TMP_Text Property_01_Text => Property_01_Panel.transform.GetChild(0).GetComponent<TMP_Text>();
        
        [Space(8)]
        public GameObject Property_02_Panel;
        public TMP_Text Property_02_Text => Property_02_Panel.transform.GetChild(0).GetComponent<TMP_Text>();
        
        [Space(8)]
        public GameObject Property_03_Panel;
        public TMP_Text Property_03_Text => Property_03_Panel.transform.GetChild(0).GetComponent<TMP_Text>();
        
        [Space(8)]
        public GameObject Property_04_Panel;
        public TMP_Text Property_04_Text => Property_04_Panel.transform.GetChild(0).GetComponent<TMP_Text>();
        

    }
    
    
}
