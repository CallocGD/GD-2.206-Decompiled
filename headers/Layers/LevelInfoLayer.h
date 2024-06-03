#ifndef __LEVELINFOLAYER_H__
#define __LEVELINFOLAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class LevelDownloadDelegate;
class LevelUpdateDelegate;
class RateLevelDelegate;
class LikeItemDelegate;
class FLAlertLayerProtocol;
class LevelDeleteDelegate;
class NumberInputDelegate;
class SetIDPopupDelegate;
class TableViewCellDelegate;

class LevelInfoLayer: public cocos2d::CCLayer, public LevelDownloadDelegate, public LevelUpdateDelegate, public RateLevelDelegate, public LikeItemDelegate, public FLAlertLayerProtocol, public LevelDeleteDelegate, public NumberInputDelegate, public SetIDPopupDelegate, public TableViewCellDelegate {
public:
    static LevelInfoLayer* create(GJGameLevel* p0, bool p1);
    void confirmClone(cocos2d::CCObject* p0);
    void confirmDelete(cocos2d::CCObject* p0);
    void confirmMoveToBottom(cocos2d::CCObject* p0);
    void confirmMoveToTop(cocos2d::CCObject* p0);
    void confirmOwnerDelete(cocos2d::CCObject* p0);
    void downloadLevel();
    TodoReturn incrementDislikes();
    TodoReturn incrementLikes();
    bool init(GJGameLevel* p0, bool p1);
    TodoReturn loadLevelStep();
    void onAddToList(cocos2d::CCObject* sender);
    void onBack(cocos2d::CCObject* sender);
    void onClone(cocos2d::CCObject* sender);
    void onDelete(cocos2d::CCObject* sender);
    void onFavorite(cocos2d::CCObject* sender);
    void onFeatured(cocos2d::CCObject* sender);
    void onGarage(cocos2d::CCObject* sender);
    void onInfo(cocos2d::CCObject* sender);
    void onLevelInfo(cocos2d::CCObject* sender);
    void onLevelLeaderboard(cocos2d::CCObject* sender);
    void onLike(cocos2d::CCObject* sender);
    void onLowDetailMode(cocos2d::CCObject* sender);
    void onOwnerDelete(cocos2d::CCObject* sender);
    void onPlay(cocos2d::CCObject* sender);
    void onPlayReplay(cocos2d::CCObject* sender);
    void onRate(cocos2d::CCObject* sender);
    void onRateDemon(cocos2d::CCObject* sender);
    void onRateStars(cocos2d::CCObject* sender);
    void onRateStarsMod(cocos2d::CCObject* sender);
    void onSetFolder(cocos2d::CCObject* sender);
    void onUpdate(cocos2d::CCObject* sender);
    void onViewProfile(cocos2d::CCObject* sender);
    TodoReturn playStep2();
    TodoReturn playStep3();
    TodoReturn playStep4();
    static cocos2d::CCScene* scene(GJGameLevel* p0, bool p1);
    void setupLevelInfo();
    void setupPlatformerStats();
    void setupProgressBars();
    bool shouldDownloadLevel();
    void showSongWarning();
    void showUpdateAlert(UpdateResponse p0);
    void tryCloneLevel(cocos2d::CCObject* p0);
    TodoReturn tryShowAd();
    void updateLabelValues();
    TodoReturn updateSideButtons();
    virtual void keyBackClicked();
    virtual void keyDown(cocos2d::enumKeyCodes p0);
    virtual void numberInputClosed(NumberInputLayer* p0);
    virtual TodoReturn cellPerformedAction(TableViewCell* p0, int p1, CellAction p2, cocos2d::CCNode* p3);
    virtual void levelDownloadFinished(GJGameLevel* p0);
    virtual void levelDownloadFailed(int p0);
    virtual void levelUpdateFinished(GJGameLevel* p0, UpdateResponse p1);
    virtual void levelUpdateFailed(int p0);
    virtual void levelDeleteFinished(int p0);
    virtual void levelDeleteFailed(int p0);
    virtual void rateLevelClosed();
    virtual void likedItem(LikeItemType p0, int p1, bool p2);
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
    virtual void setIDPopupClosed(SetIDPopup* p0, int p1);
    void* m_unk0;
    cocos2d::CCMenu* m_playBtnMenu;
    GJGameLevel* m_level;
    cocos2d::CCArray* m_coins;
    CCMenuItemSpriteExtra* m_likeBtn;
    CCMenuItemSpriteExtra* m_starRateBtn;
    CCMenuItemSpriteExtra* m_demonRateBtn;
    void* m_unk2;
    cocos2d::CCLabelBMFont* m_lengthLabel;
    cocos2d::CCLabelBMFont* m_downloadsLabel;
    cocos2d::CCLabelBMFont* m_likesLabel;
    cocos2d::CCLabelBMFont* m_orbsLabel;
    cocos2d::CCLabelBMFont* m_folderLabel;
    CCMenuItemSpriteExtra* m_cloneBtn;
    void* m_unk3;
    cocos2d::CCSprite* m_likesIcon;
    cocos2d::CCSprite* m_orbsIcon;
    int m_unk6;
    int m_unk7;
    LoadingCircle* m_circle;
    GJDifficultySprite* m_difficultySprite;
    cocos2d::CCSprite* m_starsIcon;
    cocos2d::CCLabelBMFont* m_starsLabel;
    cocos2d::CCArray* m_icons;
    /* PAD */

    bool m_challenge;
    /* PAD */

    cocos2d::CCSprite* m_playSprite;
    cocos2d::CCProgressTimer* m_progressTimer;
    CustomSongWidget* m_songWidget;
};

#endif /* __LEVELINFOLAYER_H__ */