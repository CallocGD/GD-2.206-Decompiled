#ifndef __FINDBPMLAYER_H__
#define __FINDBPMLAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class CreateGuidelinesLayer;

class FindBPMLayer: public CreateGuidelinesLayer {
public:
    static FindBPMLayer* create(int p0);
    TodoReturn calculateBPM();
    bool init(int p0);
    virtual void onClose(cocos2d::CCObject* sender);
    virtual TodoReturn playMusic();
    virtual TodoReturn registerTouch();
    virtual void onInfo(cocos2d::CCObject* sender);
    virtual void onRecord(cocos2d::CCObject* sender);
    virtual TodoReturn recordingDidStop();
};

#endif /* __FINDBPMLAYER_H__ */