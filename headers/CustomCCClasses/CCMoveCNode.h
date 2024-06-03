#ifndef __CCMOVECNODE_H__
#define __CCMOVECNODE_H__


#include "../includes.h"

class CCMoveCNode: public cocos2d::CCObject {
public:
    static CCMoveCNode* create();
    bool init();
    TodoReturn reset();
};

#endif /* __CCMOVECNODE_H__ */