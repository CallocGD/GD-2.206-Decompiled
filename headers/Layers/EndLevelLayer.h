#ifndef __ENDLEVELLAYER_H__
#define __ENDLEVELLAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class GJDropDownLayer;

class EndLevelLayer: public GJDropDownLayer {
public:
    static EndLevelLayer* create();
    TodoReturn coinEnterFinished(cocos2d::CCPoint p0);
    TodoReturn coinEnterFinishedO(cocos2d::CCObject* p0);
    TodoReturn currencyEnterFinished();
    TodoReturn diamondEnterFinished();
    TodoReturn getCoinString();
    TodoReturn getEndText();
    void goEdit();
    void onEdit(cocos2d::CCObject* sender);
    void onEveryplay(cocos2d::CCObject* sender);
    void onLevelLeaderboard(cocos2d::CCObject* sender);
    void onMenu(cocos2d::CCObject* sender);
    void onReplay(cocos2d::CCObject* sender);
    void playCoinEffect(float p0);
    void playCurrencyEffect(float p0);
    void playDiamondEffect(float p0);
    void playEndEffect();
    void playStarEffect(float p0);
    TodoReturn starEnterFinished();
    TodoReturn tryShowBanner(float p0);
    virtual void keyBackClicked();
    virtual void keyDown(cocos2d::enumKeyCodes p0);
    virtual void customSetup();
    virtual void showLayer(bool p0);
    virtual void enterAnimFinished();
    virtual void keyUp(cocos2d::enumKeyCodes p0);
    PlayLayer* m_playLayer;
    bool m_unknown1;
    bool m_unknown2;
    bool m_unknown3;
    bool m_unknown4;
    bool m_unknown5;
    int m_unknown6;
    cocos2d::CCArray* m_coinsToAnimate;
};

#endif /* __ENDLEVELLAYER_H__ */