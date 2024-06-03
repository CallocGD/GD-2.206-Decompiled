#ifndef __SONGINFOLAYER_H__
#define __SONGINFOLAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayer;

class SongInfoLayer: public FLAlertLayer {
public:
    static SongInfoLayer* create(std::string p0, std::string p1, std::string p2, std::string p3, std::string p4, std::string p5, int p6, std::string p7, int p8);
    static SongInfoLayer* create(int p0);
    bool init(std::string p0, std::string p1, std::string p2, std::string p3, std::string p4, std::string p5, int p6, std::string p7, int p8);
    void onBPM(cocos2d::CCObject* sender);
    void onClose(cocos2d::CCObject* sender);
    void onDownload(cocos2d::CCObject* sender);
    void onFB(cocos2d::CCObject* sender);
    void onMenuMusic(cocos2d::CCObject* sender);
    void onNG(cocos2d::CCObject* sender);
    void onPracticeMusic(cocos2d::CCObject* sender);
    void onYT(cocos2d::CCObject* sender);
    void showCustomMusicUnlockInfo();
    virtual void keyBackClicked();
};

#endif /* __SONGINFOLAYER_H__ */