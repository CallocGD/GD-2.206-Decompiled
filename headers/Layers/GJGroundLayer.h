#ifndef __GJGROUNDLAYER_H__
#define __GJGROUNDLAYER_H__


#include "../includes.h"

class GJGroundLayer: public cocos2d::CCLayer {
public:
    static GJGroundLayer* create(int p0, int p1);
    void createLine(int p0);
    TodoReturn deactivateGround();
    TodoReturn fadeInFinished();
    TodoReturn getGroundY();
    TodoReturn hideShadows();
    bool init(int p0, int p1);
    void loadGroundSprites(int p0, bool p1);
    TodoReturn positionGround(float p0);
    TodoReturn scaleGround(float p0);
    TodoReturn toggleVisible01(bool p0);
    TodoReturn toggleVisible02(bool p0);
    void updateGround01Color(cocos2d::ccColor3B p0);
    void updateGround02Color(cocos2d::ccColor3B p0);
    TodoReturn updateGroundPos(cocos2d::CCPoint p0);
    TodoReturn updateGroundWidth(bool p0);
    TodoReturn updateLineBlend(bool p0);
    TodoReturn updateShadows();
    TodoReturn updateShadowXPos(float p0, float p1);
    virtual void draw();
    virtual void showGround();
    virtual TodoReturn fadeInGround(float p0);
    virtual TodoReturn fadeOutGround(float p0);
};

#endif /* __GJGROUNDLAYER_H__ */