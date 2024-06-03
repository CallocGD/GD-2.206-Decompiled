#ifndef __MULTILINEBITMAPFONT_H__
#define __MULTILINEBITMAPFONT_H__


#include "../includes.h"

class MultilineBitmapFont: public cocos2d::CCSprite {
public:
    TodoReturn createWithFont(char const* p0, std::string p1, float p2, float p3, cocos2d::CCPoint p4, int p5, bool p6);
    TodoReturn initWithFont(char const* p0, std::string p1, float p2, float p3, cocos2d::CCPoint p4, int p5, bool p6);
    TodoReturn moveSpecialDescriptors(int p0, int p1);
    TodoReturn readColorInfo(std::string p0);
    TodoReturn stringWithMaxWidth(std::string p0, float p1, float p2);
    virtual void setOpacity(unsigned char p0);
};

#endif /* __MULTILINEBITMAPFONT_H__ */