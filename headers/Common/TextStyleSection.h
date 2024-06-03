#ifndef __TEXTSTYLESECTION_H__
#define __TEXTSTYLESECTION_H__


#include "../includes.h"

class TextStyleSection: public cocos2d::CCObject {
public:
    static TextStyleSection* create(int p0, int p1, TextStyleType p2);
    TodoReturn createColoredSection(cocos2d::ccColor3B p0, int p1, int p2);
    TodoReturn createDelaySection(int p0, float p1);
    TodoReturn createInstantSection(int p0, int p1, float p2);
    TodoReturn createShakeSection(int p0, int p1, int p2, int p3);
    bool init(int p0, int p1, TextStyleType p2);
};

#endif /* __TEXTSTYLESECTION_H__ */