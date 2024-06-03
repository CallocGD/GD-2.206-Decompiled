#ifndef __CCNODECONTAINER_H__
#define __CCNODECONTAINER_H__


#include "../includes.h"

class CCNodeContainer: public cocos2d::CCNode {
public:
    static CCNodeContainer* create();
    virtual bool init();
    virtual void visit();
};

#endif /* __CCNODECONTAINER_H__ */