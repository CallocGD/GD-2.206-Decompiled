#ifndef __LABELGAMEOBJECT_H__
#define __LABELGAMEOBJECT_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class EffectGameObject;

class LabelGameObject: public EffectGameObject {
public:
    static LabelGameObject* create();
    TodoReturn createLabel(std::string p0);
    TodoReturn queueUpdateLabel(std::string p0);
    TodoReturn removeLabel();
    TodoReturn unlockLabelColor();
    TodoReturn updateLabel(float p0);
    TodoReturn updateLabel(std::string p0);
    TodoReturn updateLabelAlign(int p0);
    TodoReturn updateLabelIfDirty();
    TodoReturn updatePreviewLabel();
    virtual bool init();
    virtual void setOpacity(unsigned char p0);
    virtual void setupCustomSprites(std::string p0);
    virtual TodoReturn addMainSpriteToParent(bool p0);
    virtual void resetObject();
    virtual void customObjectSetup(std::vector<std::string>& p0, std::vector<void*>& p1);
    virtual gd::string getSaveString(GJBaseGameLayer* p0);
    virtual void setObjectColor(cocos2d::ccColor3B const& p0);
    virtual TodoReturn updateTextKerning(int p0);
    virtual TodoReturn getTextKerning();
    /* PAD */

    int m_alignment;
    bool m_showSecondsOnly;
    int m_shownSpecial;
    bool m_isTimeCounter;
    int m_kerning;
    /* PAD */

};

#endif /* __LABELGAMEOBJECT_H__ */