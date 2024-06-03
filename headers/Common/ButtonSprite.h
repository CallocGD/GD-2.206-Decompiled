#ifndef __BUTTONSPRITE_H__
#define __BUTTONSPRITE_H__


#include "../includes.h"

class ButtonSprite: public cocos2d::CCSprite {
public:
     ButtonSprite();
    static ButtonSprite* create(cocos2d::CCSprite* topSprite, int width, bool absolute, float height, const char* texture, float scale);
    static ButtonSprite* create(const char* caption, int width, bool absolute, const char* font, const char* texture, float height, float scale);
    static ButtonSprite* create(char const* caption);
    static ButtonSprite* create(char const* caption, const char* font, const char* texture);
    static ButtonSprite* create(char const* caption, const char* font, const char* texture, float scale);
    static ButtonSprite* create(char const* p0, float p1);
    static ButtonSprite* create(char const* a, int b, int c, float d, bool e, char const* f, char const* g, float h);
    static ButtonSprite* create(char const* p0, int p1, int p2, float p3, bool p4, char const* p5, char const* p6);
    static ButtonSprite* create(char const* p0, int p1, int p2, float p3, bool p4);
    static ButtonSprite* create(cocos2d::CCSprite* topSprite, int width, int unused, float height, float a, bool b, char const* bgSprite, bool noScaleSpriteForBG);
    static ButtonSprite* create(cocos2d::CCSprite* p0, int p1, int p2, float p3, float p4, bool p5);
    static ButtonSprite* create(cocos2d::CCSprite* p0);
    bool init(char const* p0, int p1, int p2, float p3, bool p4, char const* p5, char const* p6, float p7);
    bool init(cocos2d::CCSprite* topSprite, int width, int unused, float scale, float height, bool unkBool, char const* bgSprite, bool useNormalCCSpriteForBG);
    void setColor(cocos2d::ccColor3B color);
    void setString(char const* p0);
    void updateBGImage(char const* p0);
    void updateSpriteBGSize();
    TodoReturn updateSpriteOffset(cocos2d::CCPoint p0);
    /* PAD */

    cocos2d::CCLabelBMFont* m_label;
    cocos2d::CCSprite* m_subSprite;
    cocos2d::CCSprite* m_subBGSprite;
    cocos2d::extension::CCScale9Sprite* m_BGSprite;
    /* PAD */

    cocos2d::CCPoint m_spritePosition;
    /* PAD */

};

#endif /* __BUTTONSPRITE_H__ */