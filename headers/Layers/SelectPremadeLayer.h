#ifndef __SELECTPREMADELAYER_H__
#define __SELECTPREMADELAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayer;

class SelectPremadeLayer: public FLAlertLayer {
public:
    static SelectPremadeLayer* create();
    void onClose(cocos2d::CCObject* sender);
    void onSelectPremade(cocos2d::CCObject* sender);
    virtual bool init();
    virtual void keyBackClicked();
};

#endif /* __SELECTPREMADELAYER_H__ */