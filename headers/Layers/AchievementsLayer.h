#ifndef __ACHIEVEMENTSLAYER_H__
#define __ACHIEVEMENTSLAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class GJDropDownLayer;

class AchievementsLayer: public GJDropDownLayer {
public:
    static AchievementsLayer* create();
    void loadPage(int p0);
    void onNextPage(cocos2d::CCObject* sender);
    void onPrevPage(cocos2d::CCObject* sender);
    TodoReturn setupLevelBrowser(cocos2d::CCArray* p0);
    void setupPageInfo(int p0, int p1, int p2);
    virtual void keyDown(cocos2d::enumKeyCodes p0);
    virtual void customSetup();
    int m_currentPage;
};

#endif /* __ACHIEVEMENTSLAYER_H__ */