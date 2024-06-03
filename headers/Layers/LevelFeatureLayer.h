#ifndef __LEVELFEATURELAYER_H__
#define __LEVELFEATURELAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayer;

class LevelFeatureLayer: public FLAlertLayer {
public:
    static LevelFeatureLayer* create(int p0);
    bool init(int p0);
    void onClose(cocos2d::CCObject* sender);
    void onDown(cocos2d::CCObject* sender);
    void onDown2(cocos2d::CCObject* sender);
    void onRemoveValues(cocos2d::CCObject* sender);
    void onSetEpicOnly(cocos2d::CCObject* sender);
    void onSetFeatured(cocos2d::CCObject* sender);
    void onToggleEpic(cocos2d::CCObject* sender);
    void onUp(cocos2d::CCObject* sender);
    void onUp2(cocos2d::CCObject* sender);
    TodoReturn updateStars();
    virtual void keyBackClicked();
};

#endif /* __LEVELFEATURELAYER_H__ */