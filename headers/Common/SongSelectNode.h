#ifndef __SONGSELECTNODE_H__
#define __SONGSELECTNODE_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayerProtocol;
class CustomSongLayerDelegate;
class CustomSongDelegate;

class SongSelectNode: public cocos2d::CCNode, public FLAlertLayerProtocol, public CustomSongLayerDelegate, public CustomSongDelegate {
public:
    static SongSelectNode* create(int p0, bool p1, LevelSettingsObject* p2, SongSelectType p3, cocos2d::CCPoint p4, cocos2d::CCNode* p5, cocos2d::CCMenu* p6, bool p7);
    void audioNext(cocos2d::CCObject* p0);
    void audioPrevious(cocos2d::CCObject* p0);
    bool init(int p0, bool p1, LevelSettingsObject* p2, SongSelectType p3, cocos2d::CCPoint p4, cocos2d::CCNode* p5, cocos2d::CCMenu* p6, bool p7);
    void onOpenCustomSong(cocos2d::CCObject* sender);
    void onSongMode(cocos2d::CCObject* sender);
    void onSongMode(int p0);
    TodoReturn selectSong(int p0);
    void showCustomSongSelect();
    void updateAudioLabel();
    TodoReturn updateWidgetVisibility();
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
    virtual void customSongLayerClosed();
    virtual TodoReturn songIDChanged(int p0);
    virtual TodoReturn getActiveSongID();
    virtual TodoReturn getSongFileName();
    virtual TodoReturn getLevelSettings();
};

#endif /* __SONGSELECTNODE_H__ */