#ifndef __PLAYERFIREBOOSTSPRITE_H__
#define __PLAYERFIREBOOSTSPRITE_H__


#include "../includes.h"

class PlayerFireBoostSprite: public cocos2d::CCSprite {
public:
    PlayerFireBoostSprite(){
        m_size = 1.0f;
    }

    static PlayerFireBoostSprite* create();
    void animateFireIn();
    void animateFireOut();
    void loopFireAnimation();
    virtual bool init();
    float m_size;
};

#endif /* __PLAYERFIREBOOSTSPRITE_H__ */