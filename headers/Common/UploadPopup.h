#ifndef __UPLOADPOPUP_H__
#define __UPLOADPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayer;
class LevelUploadDelegate;

class UploadPopup: public FLAlertLayer, public LevelUploadDelegate {
public:
    static UploadPopup* create(GJGameLevel* p0);
    bool init(GJGameLevel* p0);
    void onBack(cocos2d::CCObject* sender);
    void onClose(cocos2d::CCObject* sender);
    void onReturnToLevel(cocos2d::CCObject* sender);
    virtual void keyBackClicked();
    virtual void show();
    virtual void levelUploadFinished(GJGameLevel* p0);
    virtual void levelUploadFailed(GJGameLevel* p0);
};

#endif /* __UPLOADPOPUP_H__ */