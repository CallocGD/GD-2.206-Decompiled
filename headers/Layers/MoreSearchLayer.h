#ifndef __MORESEARCHLAYER_H__
#define __MORESEARCHLAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayer;
class TextInputDelegate;

class MoreSearchLayer: public FLAlertLayer, public TextInputDelegate {
public:
    static MoreSearchLayer* create();
    TodoReturn audioNext(cocos2d::CCObject* p0);
    TodoReturn audioPrevious(cocos2d::CCObject* p0);
    TodoReturn createToggleButton(std::string p0, cocos2d::SEL_MenuHandler p1, bool p2, cocos2d::CCMenu* p3, cocos2d::CCPoint p4);
    void onClose(cocos2d::CCObject* sender);
    void onCoins(cocos2d::CCObject* sender);
    void onCompleted(cocos2d::CCObject* sender);
    void onEpic(cocos2d::CCObject* sender);
    void onFeatured(cocos2d::CCObject* sender);
    void onFollowed(cocos2d::CCObject* sender);
    void onFriends(cocos2d::CCObject* sender);
    void onInfo(cocos2d::CCObject* sender);
    void onLegendary(cocos2d::CCObject* sender);
    void onMythic(cocos2d::CCObject* sender);
    void onNoStar(cocos2d::CCObject* sender);
    void onOriginal(cocos2d::CCObject* sender);
    void onSongFilter(cocos2d::CCObject* sender);
    void onSongMode(cocos2d::CCObject* sender);
    void onTwoPlayer(cocos2d::CCObject* sender);
    void onUncompleted(cocos2d::CCObject* sender);
    TodoReturn selectSong(int p0);
    TodoReturn toggleSongNodes(bool p0, bool p1);
    TodoReturn updateAudioLabel();
    virtual bool init();
    virtual void keyBackClicked();
    virtual void textInputShouldOffset(CCTextInputNode* p0, float p1);
    virtual void textInputReturn(CCTextInputNode* p0);
    cocos2d::CCLabelBMFont* m_audioTrackName;
    CCMenuItemSpriteExtra* m_songLeftBtn;
    CCMenuItemSpriteExtra* m_songRightBtn;
    CCMenuItemSpriteExtra* m_normalBtn;
    CCMenuItemSpriteExtra* m_customBtn;
    CCTextInputNode* m_enterSongID;
};

#endif /* __MORESEARCHLAYER_H__ */