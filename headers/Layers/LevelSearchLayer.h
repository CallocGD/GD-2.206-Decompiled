#ifndef __LEVELSEARCHLAYER_H__
#define __LEVELSEARCHLAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class TextInputDelegate;
class FLAlertLayerProtocol;
class DemonFilterDelegate;

class LevelSearchLayer: public cocos2d::CCLayer, public TextInputDelegate, public FLAlertLayerProtocol, public DemonFilterDelegate {
public:
    static LevelSearchLayer* create(int p0);
    static cocos2d::CCScene* scene(int p0);
    bool checkDiff(int p0);
    bool checkTime(int p0);
    void clearFilters();
    void confirmClearFilters(cocos2d::CCObject* p0);
    gd::string getLevelLenKey();
    gd::string getSearchDiffKey();
    GJSearchObject* getSearchObject(SearchType p0, std::string p1);
    bool init(int p0);
    void onBack(cocos2d::CCObject* sender);
    void onClearFreeSearch(cocos2d::CCObject* sender);
    void onFollowed(cocos2d::CCObject* sender);
    void onFriends(cocos2d::CCObject* sender);
    void onLatestStars(cocos2d::CCObject* sender);
    void onMagic(cocos2d::CCObject* sender);
    void onMoreOptions(cocos2d::CCObject* sender);
    void onMostDownloaded(cocos2d::CCObject* sender);
    void onMostLikes(cocos2d::CCObject* sender);
    void onMostRecent(cocos2d::CCObject* sender);
    void onSearch(cocos2d::CCObject* sender);
    void onSearchMode(cocos2d::CCObject* sender);
    void onSearchUser(cocos2d::CCObject* sender);
    void onSpecialDemon(cocos2d::CCObject* sender);
    void onStarAward(cocos2d::CCObject* sender);
    void onSuggested(cocos2d::CCObject* sender);
    void onTrending(cocos2d::CCObject* sender);
    void toggleDifficulty(cocos2d::CCObject* p0);
    void toggleDifficultyNum(int p0, bool p1);
    void toggleStar(cocos2d::CCObject* p0);
    void toggleTime(cocos2d::CCObject* p0);
    void toggleTimeNum(int p0, bool p1);
    void updateSearchLabel(char const* p0);
    virtual void keyBackClicked();
    virtual void textInputOpened(CCTextInputNode* p0);
    virtual void textInputClosed(CCTextInputNode* p0);
    virtual void textChanged(CCTextInputNode* p0);
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
    virtual void demonFilterSelectClosed(int p0);
    int m_type;
    CCTextInputNode* m_searchInput;
    cocos2d::CCSprite* m_starsSprite;
    cocos2d::CCArray* m_difficultySprites;
    cocos2d::CCArray* m_lengthSprites;
    cocos2d::CCDictionary* m_difficultyDict;
    cocos2d::CCSprite* m_lastDifficultySprite;
    CCMenuItemSpriteExtra* m_demonTypeButton;
};

#endif /* __LEVELSEARCHLAYER_H__ */