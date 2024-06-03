#ifndef __EDITBUTTONBAR_H__
#define __EDITBUTTONBAR_H__


#include "../includes.h"

class EditButtonBar: public cocos2d::CCNode {
public:
    static EditButtonBar* create(cocos2d::CCArray* objects, cocos2d::CCPoint size, int unk, bool unkBool, int columns, int rows);
    int getPage();
    void goToPage(int p0);
    bool init(cocos2d::CCArray* objects, cocos2d::CCPoint size, int unk, bool unkBool, int columns, int rows);
    void loadFromItems(cocos2d::CCArray* p0, int p1, int p2, bool p3);
    void onLeft(cocos2d::CCObject* sender);
    void onRight(cocos2d::CCObject* sender);
    void reloadItems(int rowCount, int columnCount);
    cocos2d::CCPoint m_position;
    int m_unknown;
    bool m_unknownBool;
    cocos2d::CCArray* m_buttonArray;
    BoomScrollLayer* m_scrollLayer;
    cocos2d::CCArray* m_pagesArray;
};

#endif /* __EDITBUTTONBAR_H__ */