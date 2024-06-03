#ifndef __OBJECTTOOLBOX_H__
#define __OBJECTTOOLBOX_H__


#include "../includes.h"

class ObjectToolbox: public cocos2d::CCNode {
public:
    static ObjectToolbox* sharedState();
    TodoReturn allKeys();
    float gridNodeSizeForKey(int p0);
    const char* intKeyToFrame(int key);
    TodoReturn perspectiveBlockFrame(int p0);
    virtual bool init();
    std::map<int, std::string> m_allKeys;
};

#endif /* __OBJECTTOOLBOX_H__ */