#ifndef __SELECTSFXSORTLAYER_H__
#define __SELECTSFXSORTLAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayer;

class SelectSFXSortLayer: public FLAlertLayer {
public:
    static SelectSFXSortLayer* create(AudioSortType p0);
    bool init(AudioSortType p0);
    void onClose(cocos2d::CCObject* sender);
    void onSelect(cocos2d::CCObject* sender);
    virtual void keyBackClicked();
};

#endif /* __SELECTSFXSORTLAYER_H__ */