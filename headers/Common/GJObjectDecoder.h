#ifndef __GJOBJECTDECODER_H__
#define __GJOBJECTDECODER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class ObjectDecoderDelegate;

class GJObjectDecoder: public cocos2d::CCNode, public ObjectDecoderDelegate {
public:
    static GJObjectDecoder* sharedDecoder();
    virtual bool init();
    virtual TodoReturn getDecodedObject(int p0, DS_Dictionary* p1);
};

#endif /* __GJOBJECTDECODER_H__ */