
#include "includes.h"


GameObjectCopy* GameObjectCopy::create(GameObject* gameObject)
{
    /* According to ghidra, it's done with memset() after "new" is called, So don't blame me for shit code. - Calloc */
    GameObjectCopy* obj = new GameObjectCopy;
    memset((void*)obj, 0, sizeof(GameObjectCopy));
    if (obj->init(gameObject)){
        obj->autorelease();
        return obj;
    } 
    CC_SAFE_DELETE(obj);
    return nullptr;
}


bool GameObjectCopy::init(GameObject *object)
{
    m_object = object;
    m_position = object->getPosition();
    m_rotationX = m_object->getRotationX();
    m_rotationY = m_object->getRotationY();
    m_isFlipX = m_object->isFlipX();
    m_isFlipY = m_object->isFlipY();
    m_scaleX = m_object->m_scaleX;
    m_scaleY = m_object->m_scaleY;
    return true;
}



void GameObjectCopy::resetObject(){
    m_object->setPosition(&m_position);
    if (m_rotationX == m_rotationY) {
        m_object->setRotation(m_rotationX);
    }
    else {
        m_object->setRotationX(m_rotationX);
        m_object->setRotationY(m_rotationY);
    }
    m_object->setFlipX(m_isFlipX);
    m_object->setFlipY(m_isFlipY);
    m_object->updateCustomScaleX(m_scaleX);
    m_object->updateCustomScaleY(m_scaleY);
    m_object->updateStartValues();
}


