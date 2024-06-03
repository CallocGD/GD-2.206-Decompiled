#ifndef __SEARCHBUTTON_H__
#define __SEARCHBUTTON_H__


#include "../includes.h"

class SearchButton: public cocos2d::CCSprite {
public:
    static SearchButton* create(char const* p0, char const* p1, float p2, char const* p3);
    bool init(char const* p0, char const* p1, float p2, char const* p3);
    cocos2d::CCLabelBMFont* m_label;
    cocos2d::CCSprite* m_icon;
};

#endif /* __SEARCHBUTTON_H__ */