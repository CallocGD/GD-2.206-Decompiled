#ifndef __OBJECTMANAGER_H__
#define __OBJECTMANAGER_H__


#include "../includes.h"

class ObjectManager: public cocos2d::CCNode {
public:
    TodoReturn animLoaded(char const* p0);
    TodoReturn getDefinition(char const* p0);
    TodoReturn getGlobalAnimCopy(char const* p0);
    TodoReturn instance();
    TodoReturn loadCopiedAnimations();
    TodoReturn loadCopiedSets();
    TodoReturn purgeObjectManager();
    TodoReturn replaceAllOccurencesOfString(cocos2d::CCString* p0, cocos2d::CCString* p1, cocos2d::CCDictionary* p2);
    void setLoaded(char const* p0);
    TodoReturn setup();
    virtual bool init();
};

#endif /* __OBJECTMANAGER_H__ */