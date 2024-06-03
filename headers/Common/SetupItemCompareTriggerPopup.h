#ifndef __SETUPITEMCOMPARETRIGGERPOPUP_H__
#define __SETUPITEMCOMPARETRIGGERPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupTriggerPopup;

class SetupItemCompareTriggerPopup: public SetupTriggerPopup {
public:
    static SetupItemCompareTriggerPopup* create(ItemTriggerGameObject* p0, cocos2d::CCArray* p1);
    bool init(ItemTriggerGameObject* p0, cocos2d::CCArray* p1);
    void onOpButton(cocos2d::CCObject* sender);
    TodoReturn updateFormulaLabel();
    TodoReturn updateOpButton(CCMenuItemSpriteExtra* p0, int p1, int p2);
    virtual void valueDidChange(int p0, float p1);
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);
};

#endif /* __SETUPITEMCOMPARETRIGGERPOPUP_H__ */