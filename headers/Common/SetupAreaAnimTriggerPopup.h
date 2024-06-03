#ifndef __SETUPAREAANIMTRIGGERPOPUP_H__
#define __SETUPAREAANIMTRIGGERPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupAreaTintTriggerPopup;

class SetupAreaAnimTriggerPopup: public SetupAreaTintTriggerPopup {
public:
    static SetupAreaAnimTriggerPopup* create(EnterEffectObject* p0, cocos2d::CCArray* p1, int p2);
    TodoReturn createValueControlAdvancedAnim(int p0, std::string p1, cocos2d::CCPoint p2, float p3, bool p4, InputValueType p5, int p6, bool p7, float min, float max, int p10, int p11, GJInputStyle p12);
    bool init(EnterEffectObject* p0, cocos2d::CCArray* p1, int p2);
    void onDeactivateAnimValue(cocos2d::CCObject* sender);
    TodoReturn updateTargetIDLabel();
    virtual void updateDefaultTriggerValues();
    virtual void valueDidChange(int p0, float p1);
};

#endif /* __SETUPAREAANIMTRIGGERPOPUP_H__ */