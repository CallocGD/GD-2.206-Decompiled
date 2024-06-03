#ifndef __GJACCOUNTSETTINGSLAYER_H__
#define __GJACCOUNTSETTINGSLAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayer;
class TextInputDelegate;

class GJAccountSettingsLayer: public FLAlertLayer, public TextInputDelegate {
public:
    static GJAccountSettingsLayer* create(int p0);
    TodoReturn createToggleButton(std::string p0, cocos2d::SEL_MenuHandler p1, bool p2, cocos2d::CCMenu* p3, cocos2d::CCPoint p4, float p5, float p6);
    bool init(int p0);
    void onClose(cocos2d::CCObject* sender);
    void onCommentSetting(cocos2d::CCObject* sender);
    void onFriendRequests(cocos2d::CCObject* sender);
    void onMessageSetting(cocos2d::CCObject* sender);
    void onUpdate(cocos2d::CCObject* sender);
    TodoReturn updateScoreValues();
    virtual void keyBackClicked();
    virtual void textInputShouldOffset(CCTextInputNode* p0, float p1);
    virtual void textInputReturn(CCTextInputNode* p0);
};

#endif /* __GJACCOUNTSETTINGSLAYER_H__ */