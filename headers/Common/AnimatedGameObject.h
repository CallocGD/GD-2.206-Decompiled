#ifndef __ANIMATEDGAMEOBJECT_H__
#define __ANIMATEDGAMEOBJECT_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class EnhancedGameObject;
class AnimatedSpriteDelegate;
class SpritePartDelegate;

class AnimatedGameObject: public EnhancedGameObject, public AnimatedSpriteDelegate, public SpritePartDelegate {
public:
    static AnimatedGameObject* create(int p0);
    TodoReturn animationForID(int p0, int p1);
    TodoReturn getTweenTime(int p0, int p1);
    bool init(int p0);
    TodoReturn playAnimation(int p0);
    TodoReturn setupAnimatedSize(int p0);
    TodoReturn setupChildSprites();
    TodoReturn updateChildSpriteColor(cocos2d::ccColor3B p0);
    TodoReturn updateObjectAnimation();
    virtual void setOpacity(unsigned char p0);
    virtual void setChildColor(cocos2d::ccColor3B const& p0);
    virtual void resetObject();
    virtual void activateObject();
    virtual void deactivateObject(bool p0);
    virtual void setObjectColor(cocos2d::ccColor3B const& p0);
    virtual void animationFinished(char const* p0);
    virtual TodoReturn displayFrameChanged(cocos2d::CCObject* p0, std::string p1);
};

#endif /* __ANIMATEDGAMEOBJECT_H__ */