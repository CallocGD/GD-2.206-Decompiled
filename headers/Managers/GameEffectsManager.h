#ifndef __GAMEEFFECTSMANAGER_H__
#define __GAMEEFFECTSMANAGER_H__


#include "../includes.h"

class GameEffectsManager: public cocos2d::CCNode {
public:
    static GameEffectsManager* create(PlayLayer* p0);
    TodoReturn addParticleEffect(cocos2d::CCParticleSystemQuad* p0, int p1);
    bool init(PlayLayer* p0);
    TodoReturn scaleParticle(cocos2d::CCParticleSystemQuad* p0, float p1);
};

#endif /* __GAMEEFFECTSMANAGER_H__ */