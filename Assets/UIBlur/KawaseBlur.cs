using UnityEngine;
using UnityEngine.Rendering;
using UnityEngine.Rendering.Universal;

public class KawaseBlur : ScriptableRendererFeature
{
    [System.Serializable]
    public class KawaseBlurSettings
    {
        public RenderPassEvent renderPassEvent = RenderPassEvent.AfterRenderingTransparents;
        public Material blurMaterial = null;

        [Range(2, 15)] public int blurPasses = 1;

        [Range(1, 4)] public int downsample = 1;
        public bool copyToFramebuffer;
        public string targetName = "_blurTexture";
    }

    public KawaseBlurSettings settings = new KawaseBlurSettings();

    class CustomRenderPass : ScriptableRenderPass
    {
        public Material BlurMaterial;
        public int Passes;
        public int Downsample;
        public bool CopyToFramebuffer;
        public string TargetName;
        string _profilerTag;

        private int _tmpId1;
        private int _tmpId2;

        private RenderTargetIdentifier _tmpRT1;
        private RenderTargetIdentifier _tmpRT2;

        private RenderTargetIdentifier Source { get; set; }

        public void Setup(RenderTargetIdentifier source)
        {
            Source = source;
        }

        public CustomRenderPass(string profilerTag)
        {
            _profilerTag = profilerTag;
        }

        public override void Configure(CommandBuffer cmd, RenderTextureDescriptor cameraTextureDescriptor)
        {
            int width = cameraTextureDescriptor.width / Downsample;
            int height = cameraTextureDescriptor.height / Downsample;

            _tmpId1 = Shader.PropertyToID("tmpBlurRT1");
            _tmpId2 = Shader.PropertyToID("tmpBlurRT2");
            cmd.GetTemporaryRT(_tmpId1, width, height, 0, FilterMode.Bilinear, RenderTextureFormat.ARGB32);
            cmd.GetTemporaryRT(_tmpId2, width, height, 0, FilterMode.Bilinear, RenderTextureFormat.ARGB32);

            _tmpRT1 = new RenderTargetIdentifier(_tmpId1);
            _tmpRT2 = new RenderTargetIdentifier(_tmpId2);

            ConfigureTarget(_tmpRT1);
            ConfigureTarget(_tmpRT2);
        }

        public override void Execute(ScriptableRenderContext context, ref RenderingData renderingData)
        {
            CommandBuffer cmd = CommandBufferPool.Get(_profilerTag);

            RenderTextureDescriptor opaqueDesc = renderingData.cameraData.cameraTargetDescriptor;
            opaqueDesc.depthBufferBits = 0;

            // first pass
            // cmd.GetTemporaryRT(tmpId1, opaqueDesc, FilterMode.Bilinear);
            cmd.SetGlobalFloat("_offset", 1.5f);
            cmd.Blit(Source, _tmpRT1, BlurMaterial);

            for (var i = 1; i < Passes - 1; i++)
            {
                cmd.SetGlobalFloat("_offset", 0.5f + i);
                cmd.Blit(_tmpRT1, _tmpRT2, BlurMaterial);

                // pingpong
                (_tmpRT1, _tmpRT2) = (_tmpRT2, _tmpRT1);
            }

            // final pass
            cmd.SetGlobalFloat("_offset", 0.5f + Passes - 1f);
            if (CopyToFramebuffer)
            {
                cmd.Blit(_tmpRT1, Source, BlurMaterial);
            }
            else
            {
                cmd.Blit(_tmpRT1, _tmpRT2, BlurMaterial);
                cmd.SetGlobalTexture(TargetName, _tmpRT2);
            }

            context.ExecuteCommandBuffer(cmd);
            cmd.Clear();

            CommandBufferPool.Release(cmd);
        }

        public override void FrameCleanup(CommandBuffer cmd)
        {
        }
    }

    private CustomRenderPass _scriptablePass;

    public override void Create()
    {
        _scriptablePass = new CustomRenderPass("KawaseBlur")
        {
            BlurMaterial = settings.blurMaterial,
            Passes = settings.blurPasses,
            Downsample = settings.downsample,
            CopyToFramebuffer = settings.copyToFramebuffer,
            TargetName = settings.targetName,
            renderPassEvent = settings.renderPassEvent
        };
    }

    public override void AddRenderPasses(ScriptableRenderer renderer, ref RenderingData renderingData)
    {
        RenderTargetIdentifier src = renderer.cameraColorTarget;
        _scriptablePass.Setup(src);
        renderer.EnqueuePass(_scriptablePass);
    }
}