#ifndef __GJMGLAYER_H__
#define __GJMGLAYER_H__


#include "../includes.h"

class GJMGLayer: public cocos2d::CCLayer {
public:
    static GJMGLayer* create(int p0);
    TodoReturn deactivateGround();
    bool init(int p0);
    void loadGroundSprites(int p0, bool p1);
    TodoReturn scaleGround(float p0);
    TodoReturn toggleVisible01(bool p0);
    TodoReturn toggleVisible02(bool p0);
    TodoReturn updateGroundColor(cocos2d::ccColor3B p0, bool p1);
    TodoReturn updateGroundOpacity(unsigned char p0, bool p1);
    TodoReturn updateGroundPos(cocos2d::CCPoint p0);
    TodoReturn updateGroundWidth(bool p0);
    TodoReturn updateMG01Blend(bool p0);
    TodoReturn updateMG02Blend(bool p0);
    virtual void draw();
    virtual void showGround();
};

#endif /* __GJMGLAYER_H__ */