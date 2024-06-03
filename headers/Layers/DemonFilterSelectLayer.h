#ifndef __DEMONFILTERSELECTLAYER_H__
#define __DEMONFILTERSELECTLAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayer;

class DemonFilterSelectLayer: public FLAlertLayer {
public:
    static DemonFilterSelectLayer* create();
    void onClose(cocos2d::CCObject* sender);
    void selectRating(cocos2d::CCObject* sender);
    virtual bool init();
    virtual void keyBackClicked();
};

#endif /* __DEMONFILTERSELECTLAYER_H__ */