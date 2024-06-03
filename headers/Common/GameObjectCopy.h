#ifndef __GAMEOBJECTCOPY_H__
#define __GAMEOBJECTCOPY_H__


#include "../includes.h"

class GameObjectCopy: public cocos2d::CCObject {
public:
    static GameObjectCopy* create(GameObject* p0);
    bool init(GameObject* p0);
    void resetObject();
    GameObject* m_object;
    cocos2d::CCPoint m_position;
    float m_rotationX;
    float m_rotationY;
    bool m_isFlipX;
    bool m_isFlipY;
    float m_customScaleX;
    float m_customScaleY;
};

#endif /* __GAMEOBJECTCOPY_H__ */