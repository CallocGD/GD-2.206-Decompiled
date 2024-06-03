#ifndef __GJSMARTBLOCKPREVIEW_H__
#define __GJSMARTBLOCKPREVIEW_H__


#include "../includes.h"

class GJSmartBlockPreview: public cocos2d::CCNode {
public:
    static GJSmartBlockPreview* create(std::string p0);
    TodoReturn addChance(int p0, int p1);
    TodoReturn addCount(int p0);
    TodoReturn addPreview(std::string p0, std::string p1, LevelEditorLayer* p2);
    TodoReturn addTemplateGuide(std::string p0, int p1);
    TodoReturn addTemplateGuide(SmartPrefabResult p0, float p1);
    TodoReturn createInfoLabel();
    bool init(std::string p0);
    TodoReturn toggleSelectItem(bool p0);
};

#endif /* __GJSMARTBLOCKPREVIEW_H__ */