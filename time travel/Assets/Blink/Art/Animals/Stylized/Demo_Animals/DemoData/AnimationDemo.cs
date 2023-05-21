using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace BLINK
{
    public class AnimationDemo : MonoBehaviour
    {

        public enum AnimationType
        {
            Trigger,
            Bool
        }

        [System.Serializable]
        public class AnimationEntry
        {
            public string animationName;
            public AnimationType type;
        }

        public List<AnimationEntry> entries = new List<AnimationEntry>();

        public List<Animator> animators = new List<Animator>();

        public int entryIndex;
        public Text animationNameText;

        private void Update()
        {
            if (Input.GetKeyDown(KeyCode.A))
            {
                NextAnimation();
            }

            if (Input.GetKeyDown(KeyCode.R))
            {
                ReplayAnimation();
            }
        }

        public void NextAnimation()
        {
            entryIndex++;
            if (entries.Count - 1 < entryIndex) entryIndex = 0;
            animationNameText.text = entries[entryIndex].animationName;
            PlayAnimation();
        }

        public void PreviousAnimation()
        {
            entryIndex--;
            if (entryIndex < 0) entryIndex = entries.Count - 1;
            animationNameText.text = entries[entryIndex].animationName;
            PlayAnimation();
        }

        public void ReplayAnimation()
        {
            PlayAnimation();
        }

        private void ResetAllBool()
        {
            foreach (var entry in entries)
            {
                if (entry.type != AnimationType.Bool) continue;
                foreach (var animator in animators)
                {
                    animator.SetBool(entry.animationName, false);
                }
            }
        }

        private void PlayAnimation()
        {
            ResetAllBool();

            if (entries[entryIndex].type == AnimationType.Bool)
            {
                foreach (var animator in animators)
                {
                    animator.SetBool(entries[entryIndex].animationName, true);
                }
            }
            else
            {
                foreach (var animator in animators)
                {
                    animator.SetTrigger(entries[entryIndex].animationName);
                }
            }
        }
        void OnCollisionEnter(Collision collision)
        {
            // 检查发生碰撞的物体是否满足触发条件，例如你可以通过标签或者名称来判断
            if (collision.gameObject.tag == "SomeTag")
            {
                // 设置entryIndex为要播放的动画条目的索引，例如假设你要播放的动画是第二个动画
                entryIndex = 1;
                // 更新显示的动画名称
                animationNameText.text = entries[entryIndex].animationName;
                // 播放动画
                PlayAnimation();
            }
        }
    }
}
