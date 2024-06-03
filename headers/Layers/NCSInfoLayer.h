#ifndef __NCSINFOLAYER_H__
#define __NCSINFOLAYER_H__


#include "../includes.h"

class NCSInfoLayer {
public:
    static NCSInfoLayer* create(CustomSongLayer* p0);
    bool init(CustomSongLayer* p0);
    void onClose(cocos2d::CCObject* sender);
    void onLibrary(cocos2d::CCObject* sender);
    void onNCS(cocos2d::CCObject* sender);
    void onNCSIO(cocos2d::CCObject* sender);
    void onNCSUsage(cocos2d::CCObject* sender);
    virtual void keyBackClicked();
};

#endif /* __NCSINFOLAYER_H__ */