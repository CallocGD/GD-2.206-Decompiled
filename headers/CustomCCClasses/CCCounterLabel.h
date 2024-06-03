#ifndef __CCCOUNTERLABEL_H__
#define __CCCOUNTERLABEL_H__


#include "../includes.h"

class CCCounterLabel: public cocos2d::CCLabelBMFont {
public:
    static CCCounterLabel* create(int p0, char const* p1, FormatterType p2);
    TodoReturn calculateStepSize(int p0);
    TodoReturn disableCounter();
    TodoReturn enableCounter();
    TodoReturn fastUpdateCounter();
    TodoReturn getTargetCount();
    bool init(int p0, char const* p1, FormatterType p2);
    void setTargetCount(int p0);
    TodoReturn updateCounter(float p0);
    TodoReturn updateString();
};

#endif /* __CCCOUNTERLABEL_H__ */