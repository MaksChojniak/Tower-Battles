using System;
using System.Collections.Generic;
using UnityEngine;


namespace Prefabs.Enemies
{


    public class RagdollBones : MonoBehaviour
    {
        [Serializable]
        class BodyPart
        {
            public GameObject Part;
            public float Mass;
            
            public bool IsReady()
            {
                return Part != null;
            }
        }
        
        [Serializable]
        class Body
        {
            public BodyPart Torso;
            public BodyPart Head;
            public BodyPart L_Arm;
            public BodyPart R_Arm;
            public BodyPart L_Leg;
            public BodyPart R_Leg;

            public bool IsReady()
            {
                return Torso.IsReady() && Head.IsReady() && L_Arm.IsReady() && R_Arm.IsReady() && L_Leg.IsReady() && R_Leg.IsReady();
            }
            
        }

        [SerializeField] Body body;
        [SerializeField] bool update;


        [ContextMenu(nameof(GetBodyParts))]
        public void GetBodyParts()
        {
            Transform bodyParent = this.transform.GetChild(0).GetChild(0);
            body.L_Arm.Part = bodyParent.GetChild(0).gameObject;
            body.L_Arm.Mass = 12.5f;
            body.R_Arm.Part = bodyParent.GetChild(1).gameObject;
            body.R_Arm.Mass = 12.5f;
            body.Head.Part = bodyParent.GetChild(2).gameObject;
            body.Head.Mass = 15.5f;
            body.L_Leg.Part = bodyParent.GetChild(3).gameObject;
            body.L_Leg.Mass = 17.5f;
            body.R_Leg.Part = bodyParent.GetChild(4).gameObject;
            body.R_Leg.Mass = 17.5f;
            body.Torso.Part = bodyParent.GetChild(5).gameObject;
            body.Torso.Mass = 25f;
        }
        

        [ContextMenu(nameof(MakeRagdoll))]
        public void MakeRagdoll()
        {
            if(!body.IsReady())
                return;

            List<BodyPart> jointParts = new List<BodyPart>()
            {
                body.Head,
                body.L_Arm,
                body.R_Arm,
                body.L_Leg,
                body.R_Leg
            };
            List<BodyPart> bodyParts = new List<BodyPart>(jointParts);
            bodyParts.Add(body.Torso);

            foreach (var bodyPart in bodyParts)
            {
                if (!bodyPart.Part.TryGetComponent<MeshCollider>(out var meshCollider))
                    meshCollider = bodyPart.Part.AddComponent<MeshCollider>();
                meshCollider.convex = true;
                
                if (!bodyPart.Part.TryGetComponent<Rigidbody>(out var rb))
                    rb = bodyPart.Part.AddComponent<Rigidbody>();
                rb.mass = bodyPart.Mass;
                rb.isKinematic = true;
            }


            foreach (var jointPart in jointParts)
            {
                if (!jointPart.Part.TryGetComponent<CharacterJoint>(out var joint))
                    joint = jointPart.Part.AddComponent<CharacterJoint>();

                joint.connectedBody = body.Torso.Part.GetComponent<Rigidbody>();
                
                joint.anchor = Vector3.zero;
                
                if(jointPart == body.L_Arm)
                    joint.axis = Vector3.forward;
                else if(jointPart == body.R_Arm)
                    joint.axis = -Vector3.forward;
                
                else if(jointPart == body.L_Leg)
                    joint.axis = Vector3.up;
                else if(jointPart == body.R_Leg)
                    joint.axis = -Vector3.up;
                
                else if(jointPart == body.Head)
                    joint.axis = Vector3.up;

                joint.swingAxis = -Vector3.right;

                SoftJointLimit lowTwistLimit = joint.lowTwistLimit;
                lowTwistLimit.limit = -177f;
                joint.lowTwistLimit = lowTwistLimit;
                
                SoftJointLimit highTwistLimit = joint.highTwistLimit;
                highTwistLimit.limit = 177f;
                joint.highTwistLimit = highTwistLimit;
                
                SoftJointLimit swing1Limit = joint.swing1Limit;
                swing1Limit.limit = 177f;
                joint.swing1Limit = swing1Limit;
                
                SoftJointLimit swing2Limit = joint.swing2Limit;
                swing2Limit.limit = 177f;
                joint.swing2Limit = swing2Limit;

                joint.enablePreprocessing = true;

            }
        }
        
        
    }
    
    
}
