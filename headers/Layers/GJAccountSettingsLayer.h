#ifndef __GJACCOUNTSETTINGSLAYER_H__
#define __GJACCOUNTSETTINGSLAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayer;
class TextInputDelegate;

class GJAccountSettingsLayer: public FLAlertLayer, public TextInputDelegate {
public:

    GJAccountSettingsLayer() :
        m_accountID(0),
        m_messageStatus(0),
        m_friendStatus(0),
        m_commentHistoryStatus(0),
        m_youtubeURL(""),
        m_twitterURL(""),
        m_twitchURL(""),
        m_youtubeInput(nullptr),
        m_twitterInput(nullptr),
        m_twitchInput(nullptr),
        m_messageSettings(nullptr),
        m_friendRequestSettings(nullptr),
        m_commentSettings(nullptr)
    {
    }

    static GJAccountSettingsLayer* create(int accountID);
    CCMenuItemToggler* createToggleButton(std::string p0, cocos2d::SEL_MenuHandler p1, bool p2, cocos2d::CCMenu* p3, cocos2d::CCPoint p4, float p5, float p6);
    bool init(int accountID);
    void onClose(cocos2d::CCObject* sender);
    void onCommentSetting(cocos2d::CCObject* sender);
    void onFriendRequests(cocos2d::CCObject* sender);
    void onMessageSetting(cocos2d::CCObject* sender);
    void onUpdate(cocos2d::CCObject* sender);
    TodoReturn updateScoreValues();
    virtual void keyBackClicked();
    virtual void textInputShouldOffset(CCTextInputNode* p0, float p1);
    virtual void textInputReturn(CCTextInputNode* p0);

    int	m_accountID;
    int	m_messageStatus;
    int	m_friendStatus;	
    int	m_commentHistoryStatus;	
    std::string	m_youtubeURL;
    std::string	m_twitterURL;	
    std::string	m_twitchURL;
    CCTextInputNode * m_youtubeInput;	
    CCTextInputNode * m_twitterInput;	
    CCTextInputNode * m_twitchInput;
    cocos2d::CCArray *	m_messageSettings;	
    cocos2d::CCArray *	m_friendRequestSettings;	
    cocos2d::CCArray *	m_commentSettings;	
};

#endif /* __GJACCOUNTSETTINGSLAYER_H__ */