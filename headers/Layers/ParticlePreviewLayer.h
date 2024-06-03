#ifndef __PARTICLEPREVIEWLAYER_H__
#define __PARTICLEPREVIEWLAYER_H__


#include "../includes.h"

class ParticlePreviewLayer: public cocos2d::CCLayerColor {
public:
    static ParticlePreviewLayer* create(cocos2d::CCParticleSystemQuad* p0);
    bool init(cocos2d::CCParticleSystemQuad* p0);
    TodoReturn postVisit();
    TodoReturn preVisitWithClippingRect(cocos2d::CCRect p0);
    virtual void draw();
    virtual void visit();
};

#endif /* __PARTICLEPREVIEWLAYER_H__ */