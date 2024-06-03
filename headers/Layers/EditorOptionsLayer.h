#ifndef __EDITOROPTIONSLAYER_H__
#define __EDITOROPTIONSLAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class GJOptionsLayer;

class EditorOptionsLayer: public GJOptionsLayer {
public:
    static EditorOptionsLayer* create();
    void onButtonRows(cocos2d::CCObject* sender);
    void onButtonsPerRow(cocos2d::CCObject* sender);
    virtual bool init();
    virtual void onClose(cocos2d::CCObject* sender);
    virtual void setupOptions();
};

#endif /* __EDITOROPTIONSLAYER_H__ */