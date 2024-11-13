#ifndef __OBJECTMANAGER_H__
#define __OBJECTMANAGER_H__


#include "../includes.h"

class ObjectManager: public cocos2d::CCNode {
public:
    cocos2d::CCObject* animLoaded(char const* anim);
    cocos2d::CCObject* getDefinition(char const* definitionKey);
    cocos2d::CCObject* getGlobalAnimCopy(char const* anim);
    void loadCopiedAnimations();
    void loadCopiedSets();
    void purgeObjectManager();
    cocos2d::CCDictionary* replaceAllOccurencesOfString(cocos2d::CCString*, cocos2d::CCString*, cocos2d::CCDictionary*);
    void setLoaded(char const* objectName);
    void setup();
    virtual bool init();
    ObjectManager* instance();


    cocos2d::CCDictionary* m_objectDefinitions;
    cocos2d::CCDictionary* m_maybeLoadedAnimations;
};

#endif /* __OBJECTMANAGER_H__ */
