using System.Collections;
using TMPro;
using UnityEngine;

namespace MMK.Towers
{

    public class FarmAnimation : TowerAnimation
    {

        
        public GameObject IncomeUIPrefab;


        public FarmController FarmController { private set; get; }

        const float INCOME_ANIMATION_TIME = 0.7f;
        const float INCOME_ANIMATION_LENGHT = 1;
        
        
        protected override void Awake()
        {
            FarmController = this.GetComponent<FarmController>();
            
            base.Awake();
        }

        protected override void OnDestroy()
        {
            base.OnDestroy();
        }

        protected override void Start()
        {
            base.Start();
            
        }

        protected override void Update()
        {
            base.Update();
        }

        protected override void FixedUpdate()
        {
            base.FixedUpdate();
        }



#region Register & Unregister Handlers
        
        protected override void RegisterHandlers()
        {
            base.RegisterHandlers();

            // FarmController.OnLevelUp += PlayLevelUpAnimation;
            // FarmController.OnRemoveTower += PlayRemoveAnimation;
            
            FarmController.TowerIncomeComponent.OnIncome += PlayIncomeAnimation;

        }

        protected override void UnregisterHndlers()
        {
            FarmController.TowerIncomeComponent.OnIncome -= PlayIncomeAnimation;
            
            // FarmController.OnRemoveTower -= PlayRemoveAnimation;
            // FarmController.OnLevelUp -= PlayLevelUpAnimation;

            base.UnregisterHndlers();
            
        }
        
#endregion

        
#region Income Animation

        void PlayIncomeAnimation(long Value)
        {
            IncomeAnimationData incomeAnimationData = new IncomeAnimationData()
            {
                AnimationTime = INCOME_ANIMATION_TIME,
                AnimationLenght = INCOME_ANIMATION_LENGHT
            };
            
            StartCoroutine(InomeUIAnimation(incomeAnimationData, Value));


        }

        

        IEnumerator InomeUIAnimation(IncomeAnimationData AnimationData, long Value)
        {
            float animationEndDelay = 0.35f;

            Canvas incomeUICanvas = Instantiate(IncomeUIPrefab).GetComponent<Canvas>();
            
            // Set Position
            incomeUICanvas.transform.position = this.transform.position;
            // Set Rotation
            Vector3 direction = UnityEngine.Camera.main.transform.position - transform.position;
            incomeUICanvas.transform.rotation = Quaternion.LookRotation(-direction, Vector3.up);
            // Set Scale
            float scale = this.GetGameScaleUI();
            incomeUICanvas.transform.localScale = Vector3.one * scale;
            
            
            TMP_Text[] incomeTexts = incomeUICanvas.GetComponentsInChildren<TMP_Text>();

            foreach (TMP_Text incomeText in incomeTexts)
                incomeText.text = $"{Value}" + StringFormatter.GetSpriteText( new SpriteTextData() { SpriteName = GameSettingsManager.GetGameSettings().CashIconName, WithSpaces = true } );
            

            float time = 0;
            while (time <= AnimationData.AnimationTime)
            {
                incomeUICanvas.transform.position += Vector3.up * AnimationData.AnimationSpeed * Time.deltaTime;
                
                time += Time.deltaTime;
                yield return new WaitForSeconds(Time.deltaTime);
            }
            
            
            Destroy(incomeUICanvas.gameObject, animationEndDelay);
        }
        
        
#endregion

        
        
        
        
        
        
    }
    
    
}
