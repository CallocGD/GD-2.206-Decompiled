#ifndef __BROWSESMARTKEYLAYER_H__
#define __BROWSESMARTKEYLAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class BrowseSmartTemplateLayer;

class BrowseSmartKeyLayer: public BrowseSmartTemplateLayer {
public:
    static BrowseSmartKeyLayer* create(GJSmartTemplate* p0, std::string p1);
    TodoReturn addChanceToSelected(int p0, bool p1);
    TodoReturn createTemplateObjects();
    TodoReturn deletedSelectedItems();
    TodoReturn getAllSelectedBlocks();
    bool init(GJSmartTemplate* p0, std::string p1);
    void onButton(cocos2d::CCObject* sender);
    void onPrefabObject(cocos2d::CCObject* sender);
    TodoReturn updateChanceValues();
    virtual void onBack(cocos2d::CCObject* sender);
};

#endif /* __BROWSESMARTKEYLAYER_H__ */