#ifndef __GJDIFFICULTYSPRITE_H__
#define __GJDIFFICULTYSPRITE_H__


#include "../includes.h"

class GJDifficultySprite: public cocos2d::CCSprite {
public:
    static GJDifficultySprite* create(int p0, GJDifficultyName p1);
    static gd::string getDifficultyFrame(int p0, GJDifficultyName p1);
    bool init(int p0, GJDifficultyName p1);
    void updateDifficultyFrame(int p0, GJDifficultyName p1);
    void updateFeatureState(GJFeatureState p0);
    void updateFeatureStateFromLevel(GJGameLevel* p0);
    GJFeatureState m_featureState;
};

#endif /* __GJDIFFICULTYSPRITE_H__ */