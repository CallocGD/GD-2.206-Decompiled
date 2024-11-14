
#include "includes.h"


void CCExtenderNode::setOpacity(unsigned int opacity)
{
    cocos2d::CCArray* children = getChildren();
    for (unsigned int i = 0; i < children->count(); i++){
        ((cocos2d::CCSprite*)(children->objectAtIndex(i)))->setOpacity(opacity);
    }
}
