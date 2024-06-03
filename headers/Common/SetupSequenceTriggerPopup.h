#ifndef __SETUPSEQUENCETRIGGERPOPUP_H__
#define __SETUPSEQUENCETRIGGERPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupTriggerPopup;

class SetupSequenceTriggerPopup: public SetupTriggerPopup {
public:
    static SetupSequenceTriggerPopup* create(SequenceTriggerGameObject* p0);
    bool init(SequenceTriggerGameObject* p0);
    void onAddChance(cocos2d::CCObject* sender);
    void onChangeOrder(cocos2d::CCObject* sender);
    void onDeleteSelected(cocos2d::CCObject* sender);
    void onSelect(cocos2d::CCObject* sender);
    void updateGroupIDButtons();
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);
};

#endif /* __SETUPSEQUENCETRIGGERPOPUP_H__ */