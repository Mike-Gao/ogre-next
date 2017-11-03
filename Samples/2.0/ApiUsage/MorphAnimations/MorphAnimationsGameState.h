
#ifndef _Demo_Morph_H_
#define _Demo_Morph_H_

#include "OgrePrerequisites.h"
#include "TutorialGameState.h"

namespace Ogre
{
    class SkeletonAnimation;
}

namespace Demo
{
    class MorphAnimationsGameState : public TutorialGameState
    {
        Ogre::Item* mSmileyItem;
        float mAccumulator;
        
    public:
        MorphAnimationsGameState(const Ogre::String &helpDescription);

        virtual void createScene01(void);
        virtual void update(float timeSinceLast);
    };
}

#endif
