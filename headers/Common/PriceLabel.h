#ifndef __PRICELABEL_H__
#define __PRICELABEL_H__


#include "../includes.h"

class PriceLabel: public cocos2d::CCNode {
public:
    static PriceLabel* create(int p0);
    bool init(int p0);
    void setColor(cocos2d::ccColor3B p0);
    void setOpacity(float p0);
    void setPrice(int p0);
};

#endif /* __PRICELABEL_H__ */