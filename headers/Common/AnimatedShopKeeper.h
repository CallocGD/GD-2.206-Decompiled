#ifndef __ANIMATEDSHOPKEEPER_H__
#define __ANIMATEDSHOPKEEPER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class CCAnimatedSprite;

class AnimatedShopKeeper: public CCAnimatedSprite {
public:
    static AnimatedShopKeeper* create(ShopType p0);
    bool init(ShopType p0);
    TodoReturn playReactAnimation();
    TodoReturn startAnimating();
    virtual TodoReturn animationFinished(char const* p0);
};

#endif /* __ANIMATEDSHOPKEEPER_H__ */