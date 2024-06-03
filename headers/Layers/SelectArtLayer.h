#ifndef __SELECTARTLAYER_H__
#define __SELECTARTLAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayer;

class SelectArtLayer: public FLAlertLayer {
public:
    static SelectArtLayer* create(SelectArtType p0, int p1);
    bool init(SelectArtType p0, int p1);
    void onClose(cocos2d::CCObject* sender);
    void onSelectCustom(cocos2d::CCObject* sender);
    TodoReturn selectArt(cocos2d::CCObject* p0);
    TodoReturn updateSelectedCustom(int p0);
    virtual void keyBackClicked();
};

#endif /* __SELECTARTLAYER_H__ */