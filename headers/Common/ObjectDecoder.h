#ifndef __OBJECTDECODER_H__
#define __OBJECTDECODER_H__


#include "../includes.h"

class ObjectDecoder {
public:
    static ObjectDecoder* sharedDecoder();
    TodoReturn getDecodedObject(int p0, DS_Dictionary* p1);
    virtual bool init();
};

#endif /* __OBJECTDECODER_H__ */