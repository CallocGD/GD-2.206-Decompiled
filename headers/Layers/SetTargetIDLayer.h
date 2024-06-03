#ifndef __SETTARGETIDLAYER_H__
#define __SETTARGETIDLAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupTriggerPopup;

class SetTargetIDLayer: public SetupTriggerPopup {
public:
    static SetTargetIDLayer* create(EffectGameObject* p0, cocos2d::CCArray* p1, std::string p2, std::string p3, int p4, int p5, int p6);
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1, std::string p2, std::string p3, int p4, int p5, int p6);
    virtual TodoReturn determineStartValues();
    virtual void valueDidChange(int p0, float p1);
};

#endif /* __SETTARGETIDLAYER_H__ */