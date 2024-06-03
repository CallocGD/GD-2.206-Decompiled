#ifndef __COLORCHANNELSPRITE_H__
#define __COLORCHANNELSPRITE_H__


#include "../includes.h"

class ColorChannelSprite: public cocos2d::CCSprite {
public:
    static ColorChannelSprite* create();
    TodoReturn updateBlending(bool p0);
    TodoReturn updateCopyLabel(int p0, bool p1);
    void updateOpacity(float p0);
    void updateValues(ColorAction* p0);
    virtual bool init();
};

#endif /* __COLORCHANNELSPRITE_H__ */