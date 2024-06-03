#ifndef __CHALLENGESPAGE_H__
#define __CHALLENGESPAGE_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayer;
class FLAlertLayerProtocol;
class GJChallengeDelegate;
class CurrencyRewardDelegate;

class ChallengesPage: public FLAlertLayer, public FLAlertLayerProtocol, public GJChallengeDelegate, public CurrencyRewardDelegate {
public:
    static ChallengesPage* create();
    TodoReturn claimItem(ChallengeNode* p0, GJChallengeItem* p1, cocos2d::CCPoint p2);
    ChallengeNode* createChallengeNode(int number, bool skipAnimation, float animLength, bool isNew);
    TodoReturn exitNodeAtSlot(int p0, float p1);
    void onClose(cocos2d::CCObject* sender);
    TodoReturn tryGetChallenges();
    TodoReturn updateDots();
    void updateTimers(float p0);
    virtual bool init();
    virtual void registerWithTouchDispatcher();
    virtual void keyBackClicked();
    virtual void show();
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
    virtual TodoReturn challengeStatusFinished();
    virtual TodoReturn challengeStatusFailed();
    virtual void currencyWillExit(CurrencyRewardLayer* p0);
    cocos2d::CCArray* m_dots;
    cocos2d::CCLabelBMFont* m_countdownLabel;
    LoadingCircle* m_circle;
    bool m_triedToLoad;
    bool m_unkBool;
    CurrencyRewardLayer* m_currencyRewardLayer;
    cocos2d::CCDictionary* m_challengeNodes;
};

#endif /* __CHALLENGESPAGE_H__ */