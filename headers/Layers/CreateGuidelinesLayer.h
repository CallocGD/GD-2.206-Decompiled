#ifndef __CREATEGUIDELINESLAYER_H__
#define __CREATEGUIDELINESLAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayer;
class FLAlertLayerProtocol;

class CreateGuidelinesLayer: public FLAlertLayer, public FLAlertLayerProtocol {
public:
    static CreateGuidelinesLayer* create(CustomSongDelegate* p0, AudioGuidelinesType p1);
    TodoReturn doClearGuidelines();
    TodoReturn getMergedRecordString(std::string p0, std::string p1);
    bool init(CustomSongDelegate* p0, AudioGuidelinesType p1);
    void onClearGuidelines(cocos2d::CCObject* sender);
    void onStop(cocos2d::CCObject* sender);
    TodoReturn toggleItems(bool p0);
    virtual void update(float p0);
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void registerWithTouchDispatcher();
    virtual void keyBackClicked();
    virtual void keyDown(cocos2d::enumKeyCodes p0);
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
    virtual void onClose(cocos2d::CCObject* sender);
    virtual void keyUp(cocos2d::enumKeyCodes p0);
    virtual TodoReturn playMusic();
    virtual TodoReturn registerTouch();
    virtual void onInfo(cocos2d::CCObject* sender);
    virtual void onRecord(cocos2d::CCObject* sender);
    virtual TodoReturn recordingDidStop();
};

#endif /* __CREATEGUIDELINESLAYER_H__ */