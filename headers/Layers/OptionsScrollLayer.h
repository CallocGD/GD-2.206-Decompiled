#ifndef __OPTIONSSCROLLLAYER_H__
#define __OPTIONSSCROLLLAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayer;
class TableViewCellDelegate;

class OptionsScrollLayer: public FLAlertLayer, public TableViewCellDelegate {
public:
    static OptionsScrollLayer* create(cocos2d::CCArray* p0, bool p1, int p2);
    TodoReturn getRelevantObjects(cocos2d::CCArray* p0);
    bool init(cocos2d::CCArray* p0, bool p1, int p2);
    void onClose(cocos2d::CCObject* sender);
    void setupList(cocos2d::CCArray* p0);
    virtual void registerWithTouchDispatcher();
    virtual void keyBackClicked();
    virtual TodoReturn cellPerformedAction(TableViewCell* p0, int p1, CellAction p2, cocos2d::CCNode* p3);
};

#endif /* __OPTIONSSCROLLLAYER_H__ */