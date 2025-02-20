namespace Pooling
{
    using System;
    using System.Collections;
    using System.Collections.Generic;
    using UnityEngine;

    public class Pool<ObjectType> where ObjectType : UnityEngine.Object
    {
        readonly public int ObjectsLimit;

        List<ObjectType> objectsInUse;
#region In Use

        void InUseAdd(ObjectType objectToAdd) => this.objectsInUse.Add(objectToAdd);

        void InUseRemove(ObjectType objectToRemove) => this.objectsInUse.Remove(objectToRemove);

        ObjectType InUsePop()
        {
            ObjectType objectToPop = this.objectsInUse[this.objectsInUse.Count-1];

            this.objectsInUse.RemoveAt(this.objectsInUse.Count-1);

            return objectToPop;
        }

#endregion


        List<ObjectType> objectsFree;
#region Free

        void FreeAdd(ObjectType objectToAdd) => this.objectsFree.Add(objectToAdd);
        
        void FreeRemove(ObjectType objectToRemove) => this.objectsFree.Remove(objectToRemove);

        ObjectType FreePop()
        {
            ObjectType objectToPop = this.objectsFree[this.objectsFree.Count-1];

            this.objectsFree.RemoveAt(this.objectsFree.Count - 1);

            return objectToPop;
        }

#endregion



        Func<ObjectType> createFunction;
        Action<ObjectType> destroyFunction;

        Action<ObjectType> resetObjectFunction;

        public Pool(Func<ObjectType> createFunction, Action<ObjectType> destroyFunction, Action<ObjectType> resetObjectFunction, int objectsLimit)
        {
            this.ObjectsLimit = objectsLimit;

            this.objectsInUse = new List<ObjectType>();

            this.objectsFree = new List<ObjectType>();

            //this.temporaryObjects = new List<ObjectType>();

            this.createFunction = createFunction;
            this.destroyFunction = destroyFunction;

            this.resetObjectFunction = resetObjectFunction;
        }


        public ObjectType Get(Action<ObjectType> initBeforeSpawn = null)
        {
            ObjectType objectToRegister;

            if (IsAnyFreeObject)
            {
                objectToRegister = FreePop();
                InUseAdd(objectToRegister);
            }
            else
            {
                //objectToRegister = createFunction.Invoke();

                if (this.objectsInUse.Count < ObjectsLimit)
                {
                    objectToRegister = createFunction.Invoke();
                    InUseAdd(objectToRegister);
                }
                else
                    return null;
                //else
                    //TempAdd(objectToRegister);

            }

            this.resetObjectFunction?.Invoke(objectToRegister);

            initBeforeSpawn?.Invoke(objectToRegister);

            return objectToRegister;
        }

        public void Release(ObjectType objectToRelease)
        {
            if (!objectsInUse.Contains(objectToRelease))
            {
                //if(!temporaryObjects.Contains(objectToRelease))
                throw new Exception("Object to release is not exist in pool");

                //TempRemove(objectToRelease);
                //destroyFunction.Invoke(objectToRelease);
                //return;
            }

            this.resetObjectFunction?.Invoke(objectToRelease);

            InUseRemove(objectToRelease);
            FreeAdd(objectToRelease);
        }


        bool IsAnyFreeObject => this.objectsFree.Count > 0;

    }
}