#ifndef __UNDOOBJECT_H__
#define __UNDOOBJECT_H__


#include "../includes.h"

class UndoObject: public cocos2d::CCObject {
public:
    static UndoObject* create(GameObject* p0, UndoCommand p1);
    static UndoObject* createWithArray(cocos2d::CCArray* p0, UndoCommand p1);
    static UndoObject* createWithTransformObjects(cocos2d::CCArray* p0, UndoCommand p1);
    bool init(cocos2d::CCArray* p0, UndoCommand p1);
    bool init(GameObject* p0, UndoCommand p1);
    TodoReturn initWithTransformObjects(cocos2d::CCArray* p0, UndoCommand p1);
    void setObjects(cocos2d::CCArray* p0);
    GameObjectCopy* m_objectCopy;
    UndoCommand m_command;
    cocos2d::CCArray* m_objects;
    bool m_redo;
};

#endif /* __UNDOOBJECT_H__ */