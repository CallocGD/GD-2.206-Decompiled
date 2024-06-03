#ifndef __CCINDEXPATH_H__
#define __CCINDEXPATH_H__


#include "../includes.h"

class CCIndexPath: public cocos2d::CCObject {
public:
     CCIndexPath();
    TodoReturn CCIndexPathWithSectionRow(int p0, int p1);
};

#endif /* __CCINDEXPATH_H__ */