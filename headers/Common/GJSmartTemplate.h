#ifndef __GJSMARTTEMPLATE_H__
#define __GJSMARTTEMPLATE_H__


#include "../includes.h"

class GJSmartTemplate: public cocos2d::CCObject {
public:
    static GJSmartTemplate* create();
    TodoReturn applyTransformationsForType(SmartBlockType p0, cocos2d::CCSprite* p1);
    TodoReturn createWithCoder(DS_Dictionary* p0);
    void dataLoaded(DS_Dictionary* p0);
    TodoReturn flipBlockType(SmartBlockType p0, bool p1, bool p2);
    TodoReturn flipBlockTypeX(SmartBlockType p0);
    TodoReturn flipBlockTypeY(SmartBlockType p0);
    TodoReturn flipKey(std::string p0, bool p1, bool p2);
    TodoReturn generateRemapDict();
    TodoReturn getNoCornerKey(std::string p0);
    TodoReturn getPrefab(cocos2d::CCPoint p0, SmartGameObject* p1, SmartGameObject* p2, SmartGameObject* p3, SmartGameObject* p4, SmartGameObject* p5, SmartGameObject* p6, SmartGameObject* p7, SmartGameObject* p8, SmartGameObject* p9);
    TodoReturn getPrefab(std::string p0, bool p1, bool p2);
    TodoReturn getPrefabs(std::string p0);
    TodoReturn getPrefabWithID(std::string p0, int p1);
    TodoReturn getRandomPrefab(std::string p0);
    TodoReturn getSimplifiedKey(std::string p0);
    TodoReturn getSimplifiedType(SmartBlockType p0, bool& p1);
    TodoReturn getTemplateState(std::vector<SmartPrefabResult>& p0);
    TodoReturn getTotalChanceForPrefab(std::string p0);
    TodoReturn getVerySimplifiedKey(std::string p0);
    bool init();
    bool isUnrequired(std::string p0);
    TodoReturn keyFromNeighbors(cocos2d::CCPoint p0, SmartGameObject* p1, SmartGameObject* p2, SmartGameObject* p3, SmartGameObject* p4, SmartGameObject* p5, SmartGameObject* p6, SmartGameObject* p7, SmartGameObject* p8, SmartGameObject* p9);
    TodoReturn keyFromNeighbors(SmartBlockType p0, SmartBlockType p1, SmartBlockType p2, SmartBlockType p3, SmartBlockType p4, SmartBlockType p5, SmartBlockType p6, SmartBlockType p7, SmartBlockType p8);
    TodoReturn keyFromNeighborsOld(bool p0, bool p1, bool p2, bool p3, bool p4, bool p5, bool p6, bool p7);
    TodoReturn logTemplateStatus(bool p0);
    TodoReturn offsetForDir(GJSmartDirection p0, int p1);
    TodoReturn offsetForObject(SmartGameObject* p0);
    TodoReturn offsetForType(SmartBlockType p0);
    TodoReturn removePrefab(std::string p0, int p1);
    TodoReturn resetScannedPrefabs();
    TodoReturn rotateBlockType(SmartBlockType p0, int p1);
    TodoReturn rotateBlockType90(SmartBlockType p0);
    TodoReturn rotateKey(std::string p0, int p1);
    TodoReturn savePrefab(std::string p0, std::string p1);
    TodoReturn saveRemap(std::string p0);
    TodoReturn saveRemapToDict(std::string p0, std::string p1, cocos2d::CCDictionary* p2);
    TodoReturn scanForPrefab(std::string p0);
    TodoReturn shouldDiscardObject(SmartBlockType p0, GJSmartDirection p1);
    TodoReturn smartObjectToType(SmartGameObject* p0, cocos2d::CCPoint p1);
    TodoReturn smartTypeToObjectKey(SmartBlockType p0);
    virtual void encodeWithCoder(DS_Dictionary* p0);
    virtual bool canEncode();
};

#endif /* __GJSMARTTEMPLATE_H__ */