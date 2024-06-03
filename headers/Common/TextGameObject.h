#ifndef __TEXTGAMEOBJECT_H__
#define __TEXTGAMEOBJECT_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class GameObject;

class TextGameObject: public GameObject {
public:
    static TextGameObject* create(cocos2d::CCTexture2D* p0);
    bool init(cocos2d::CCTexture2D* p0);
    void updateTextObject(std::string p0, bool p1);
    virtual void customObjectSetup(std::vector<std::string>& p0, std::vector<void*>& p1);
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
    virtual TodoReturn updateTextKerning(int p0);
    virtual TodoReturn getTextKerning();
    std::string m_text;
    int m_kerning;
};

#endif /* __TEXTGAMEOBJECT_H__ */