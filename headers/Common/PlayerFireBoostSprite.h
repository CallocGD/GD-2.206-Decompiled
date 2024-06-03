#ifndef __PLAYERFIREBOOSTSPRITE_H__
#define __PLAYERFIREBOOSTSPRITE_H__


#include "../includes.h"

class PlayerFireBoostSprite: public cocos2d::CCSprite {
public:
    static PlayerFireBoostSprite* create();
    void animateFireIn();
    void animateFireOut();
    TodoReturn loopFireAnimation();
    virtual bool init();
    float m_size;
};

#endif /* __PLAYERFIREBOOSTSPRITE_H__ */