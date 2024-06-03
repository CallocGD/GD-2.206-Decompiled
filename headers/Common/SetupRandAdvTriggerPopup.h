#ifndef __SETUPRANDADVTRIGGERPOPUP_H__
#define __SETUPRANDADVTRIGGERPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupTriggerPopup;

class SetupRandAdvTriggerPopup: public SetupTriggerPopup {
public:
    static SetupRandAdvTriggerPopup* create(RandTriggerGameObject* p0, cocos2d::CCArray* p1);
    void addChance(int p0, int p1);
    void addChanceToObject(RandTriggerGameObject* p0, int p1, int p2);
    void callRemoveFromGroup(float p0);
    bool init(RandTriggerGameObject* p0, cocos2d::CCArray* p1);
    void onAddChance(cocos2d::CCObject* sender);
    void onRemoveFromGroup(cocos2d::CCObject* sender);
    void removeGroupID(int p0);
    void removeGroupIDFromObject(RandTriggerGameObject* p0, int p1);
    void updateGroupIDButtons();
    virtual void onClose(cocos2d::CCObject* sender);
    virtual void textChanged(CCTextInputNode* p0);
};

#endif /* __SETUPRANDADVTRIGGERPOPUP_H__ */