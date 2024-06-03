#ifndef __GJUSERMESSAGE_H__
#define __GJUSERMESSAGE_H__


#include "../includes.h"

class GJUserMessage: public cocos2d::CCNode {
public:
    static GJUserMessage* create();
    static GJUserMessage* create(cocos2d::CCDictionary* p0);
    virtual bool init();
    int m_messageID;
};

#endif /* __GJUSERMESSAGE_H__ */