#ifndef __COMMUNITYCREDITNODE_H__
#define __COMMUNITYCREDITNODE_H__


#include "../includes.h"

class CommunityCreditNode: public cocos2d::CCNode {
public:
    static CommunityCreditNode* create(int p0, int p1, int p2, std::string p3);
    bool init(int p0, int p1, int p2, std::string p3);
};

#endif /* __COMMUNITYCREDITNODE_H__ */