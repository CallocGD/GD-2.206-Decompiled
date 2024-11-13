
#include "includes.h"



CCNodeContainer* CCNodeContainer::create()
{
    CCNodeContainer* node = new CCNodeContainer;
    if (node->init()){
        node->autorelease();
        return node;
    }
    CC_SAFE_DELETE(node);
    return nullptr;
}


bool CCNodeContainer::init()
{
    return true;
}


void CCNodeContainer::visit()
{
    if (getChildrenCount()) {
        cocos2d::CCNode::visit();
    }
}


