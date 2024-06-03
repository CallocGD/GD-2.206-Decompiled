#ifndef __GJFRIENDREQUEST_H__
#define __GJFRIENDREQUEST_H__


#include "../includes.h"

class GJFriendRequest: public cocos2d::CCNode {
public:
    static GJFriendRequest* create();
    static GJFriendRequest* create(cocos2d::CCDictionary* p0);
    virtual bool init();
};

#endif /* __GJFRIENDREQUEST_H__ */