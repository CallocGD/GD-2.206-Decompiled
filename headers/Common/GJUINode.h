#ifndef __GJUINODE_H__
#define __GJUINODE_H__


#include "../includes.h"

class GJUINode: public cocos2d::CCNode {
public:
    static GJUINode* create(UIButtonConfig& p0);
    TodoReturn activeRangeTouchTest(cocos2d::CCPoint p0);
    TodoReturn activeTouchTest(cocos2d::CCPoint p0);
    TodoReturn getButtonScale();
    TodoReturn getOpacity();
    TodoReturn highlightButton(int p0);
    bool init(UIButtonConfig& p0);
    void loadFromConfig(UIButtonConfig& p0);
    TodoReturn resetState();
    TodoReturn saveToConfig(UIButtonConfig& p0);
    void setOpacity(unsigned char p0);
    TodoReturn toggleHighlight(int p0, bool p1);
    void toggleModeB(bool p0);
    TodoReturn touchEnded();
    TodoReturn touchTest(cocos2d::CCPoint p0);
    TodoReturn updateButtonFrames();
    TodoReturn updateButtonPositions();
    TodoReturn updateButtonScale(float p0);
    TodoReturn updateDeadzone(int p0);
    TodoReturn updateDragRadius(float p0);
    TodoReturn updateHeight(float p0);
    TodoReturn updateRangePos(cocos2d::CCPoint p0);
    TodoReturn updateSize(float p0, float p1);
    TodoReturn updateWidth(float p0);
    virtual void draw();
};

#endif /* __GJUINODE_H__ */