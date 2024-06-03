#ifndef __TEXTALERTPOPUP_H__
#define __TEXTALERTPOPUP_H__


#include "../includes.h"

class TextAlertPopup: public cocos2d::CCNode {
public:
    static TextAlertPopup* create(std::string p0, float p1, float p2, int p3, std::string p4);
    bool init(std::string p0, float p1, float p2, int p3, std::string p4);
    void setAlertPosition(cocos2d::CCPoint p0, cocos2d::CCPoint p1);
    void setLabelColor(cocos2d::ccColor3B p0);
};

#endif /* __TEXTALERTPOPUP_H__ */