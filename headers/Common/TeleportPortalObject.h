#ifndef __TELEPORTPORTALOBJECT_H__
#define __TELEPORTPORTALOBJECT_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class RingObject;

class TeleportPortalObject: public RingObject {
public:
    static TeleportPortalObject* create(char const* p0, bool p1);
    TodoReturn getTeleportXOff(cocos2d::CCNode* p0);
    bool init(char const* p0, bool p1);
    void setPositionOverride(cocos2d::CCPoint p0);
    void setStartPosOverride(cocos2d::CCPoint p0);
    virtual void setPosition(cocos2d::CCPoint const& p0);
    virtual void setRotation(float p0);
    virtual void setStartPos(cocos2d::CCPoint p0);
    virtual void customObjectSetup(std::vector<std::string>& p0, std::vector<void*>& p1);
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
    virtual void addToGroup(int p0);
    virtual void removeFromGroup(int p0);
    virtual void setRotation2(float p0);
    virtual void addToGroup2(int p0);
    virtual void removeFromGroup2(int p0);
    TeleportPortalObject* m_orangePortal;
    bool m_isYellowPortal;
    float m_teleportYOffset;
    bool m_teleportEase;
    bool m_staticForceEnabled;
    int m_staticForce;
    bool m_redirectForceEnabled;
    float m_redirectForceMod;
    float m_redirectForceMin;
    float m_redirectForceMax;
    bool m_saveOffset;
    bool m_ignoreX;
    bool m_ignoreY;
    int m_gravityMode;
    bool m_property443;
    bool m_property464;
    bool m_property510;
    bool m_property591;
    GJBaseGameLayer* m_gameLayer;
};

#endif /* __TELEPORTPORTALOBJECT_H__ */