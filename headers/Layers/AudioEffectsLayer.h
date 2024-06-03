#ifndef __AUDIOEFFECTSLAYER_H__
#define __AUDIOEFFECTSLAYER_H__


#include "../includes.h"

class AudioEffectsLayer: public cocos2d::CCLayerColor {
public:
    static AudioEffectsLayer* create(std::string p0);
    TodoReturn audioStep(float p0);
    TodoReturn getBGSquare();
    TodoReturn goingDown();
    bool init(std::string p0);
    TodoReturn resetAudioVars();
    TodoReturn triggerEffect(float p0);
    virtual void draw();
    virtual void updateTweenAction(float p0, char const* p1);
};

#endif /* __AUDIOEFFECTSLAYER_H__ */