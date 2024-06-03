#ifndef __TEXTAREA_H__
#define __TEXTAREA_H__


#include "../includes.h"

class TextArea: public cocos2d::CCSprite {
public:
    static TextArea* create(std::string str, char const* font, float scale, float width, cocos2d::CCPoint anchor, float lineHeight, bool disableColor);
    TodoReturn colorAllCharactersTo(cocos2d::ccColor3B p0);
    TodoReturn colorAllLabels(cocos2d::ccColor3B p0);
    TodoReturn fadeIn(float p0, bool p1);
    TodoReturn fadeInCharacters(float p0, float p1);
    TodoReturn fadeOut(float p0);
    TodoReturn fadeOutAndRemove();
    TodoReturn finishFade();
    TodoReturn hideAll();
    bool init(std::string str, char const* font, float scale, float width, cocos2d::CCPoint anchor, float lineHeight, bool disableColor);
    void setIgnoreColorCode(bool p0);
    void setString(std::string p0);
    void showAll();
    TodoReturn stopAllCharacterActions();
    virtual void update(float p0);
    virtual void draw();
    virtual void setOpacity(unsigned char p0);
    bool m_disableColor;
    MultilineBitmapFont* m_label;
    float m_width;
    int m_unknown;
    std::string m_fontFile;
    float m_height;
    /* PAD */

    cocos2d::CCPoint m_anchorPoint;
};

#endif /* __TEXTAREA_H__ */