#ifndef __BROWSESMARTTEMPLATELAYER_H__
#define __BROWSESMARTTEMPLATELAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayer;

class BrowseSmartTemplateLayer: public FLAlertLayer {
public:
    static BrowseSmartTemplateLayer* create(GJSmartTemplate* p0, SmartBrowseFilter p1);
    TodoReturn addObjectToPage(cocos2d::CCObject* p0, int p1);
    TodoReturn addPrefabMenuItem(SmartPrefabResult p0, int p1);
    TodoReturn baseSetup();
    TodoReturn createDots();
    TodoReturn createPrefab(std::string p0, int p1);
    void goToPage(int p0);
    bool init(GJSmartTemplate* p0, SmartBrowseFilter p1);
    void onClick(cocos2d::CCObject* sender);
    void onClose(cocos2d::CCObject* sender);
    void onTemplateObject(cocos2d::CCObject* sender);
    TodoReturn updateDots();
    virtual void keyBackClicked();
    virtual void onBack(cocos2d::CCObject* sender);
};

#endif /* __BROWSESMARTTEMPLATELAYER_H__ */