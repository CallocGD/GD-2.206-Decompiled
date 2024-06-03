#ifndef __SETUPSONGTRIGGERPOPUP_H__
#define __SETUPSONGTRIGGERPOPUP_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class SetupAudioTriggerPopup;
class MusicDownloadDelegate;
class SongPlaybackDelegate;

class SetupSongTriggerPopup: public SetupAudioTriggerPopup, public MusicDownloadDelegate, public SongPlaybackDelegate {
public:
    static SetupSongTriggerPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
    void onResetSongTime(cocos2d::CCObject* sender);
    void onSavePlaybackPos(cocos2d::CCObject* sender);
    TodoReturn updateApplyPrepare(bool p0);
    TodoReturn updateLength();
    TodoReturn updateSongTimeSlider();
    virtual void pageChanged();
    virtual void onClose(cocos2d::CCObject* sender);
    virtual void valueDidChange(int p0, float p1);
    virtual TodoReturn onPlayback(SongInfoObject* p0);
};

#endif /* __SETUPSONGTRIGGERPOPUP_H__ */