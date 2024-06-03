#ifndef __ENDPORTALOBJECT_H__
#define __ENDPORTALOBJECT_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class GameObject;

class EndPortalObject: public GameObject {
public:
    static EndPortalObject* create();
    TodoReturn getSpawnPos();
    TodoReturn triggerObject(GJBaseGameLayer* p0);
    TodoReturn updateColors(cocos2d::ccColor3B p0);
    TodoReturn updateEndPos(bool p0);
    virtual bool init();
    virtual void setPosition(cocos2d::CCPoint const& p0);
    virtual void setVisible(bool p0);
    /* PAD */

};

#endif /* __ENDPORTALOBJECT_H__ */