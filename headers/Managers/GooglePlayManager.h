#ifndef __GOOGLEPLAYMANAGER_H__
#define __GOOGLEPLAYMANAGER_H__


#include "../includes.h"

class GooglePlayManager: public cocos2d::CCNode {
public:
    static GooglePlayManager* sharedState();
    void googlePlaySignedIn();
    virtual bool init();
};

#endif /* __GOOGLEPLAYMANAGER_H__ */