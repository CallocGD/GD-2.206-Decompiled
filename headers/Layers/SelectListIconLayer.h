#ifndef __SELECTLISTICONLAYER_H__
#define __SELECTLISTICONLAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayer;

class SelectListIconLayer: public FLAlertLayer {
public:
    static SelectListIconLayer* create(int p0);
    bool init(int p0);
    void onClose(cocos2d::CCObject* sender);
    void onSelect(cocos2d::CCObject* sender);
    virtual void keyBackClicked();
};

#endif /* __SELECTLISTICONLAYER_H__ */