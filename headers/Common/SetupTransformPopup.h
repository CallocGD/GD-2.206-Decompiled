#ifndef __SETUPTRANSFORMPOPUP_H__
#define __SETUPTRANSFORMPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupTriggerPopup;

class SetupTransformPopup: public SetupTriggerPopup {
public:
    static SetupTransformPopup* create(TransformTriggerGameObject* p0, cocos2d::CCArray* p1);
    bool init(TransformTriggerGameObject* p0, cocos2d::CCArray* p1);
};

#endif /* __SETUPTRANSFORMPOPUP_H__ */