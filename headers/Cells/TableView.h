#ifndef __TABLEVIEW_H__
#define __TABLEVIEW_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class CCScrollLayerExt;
class CCScrollLayerExtDelegate;

class TableView: public CCScrollLayerExt, public CCScrollLayerExtDelegate {
public:
     TableView(cocos2d::CCRect p0);
    static TableView* create(TableViewDelegate* p0, TableViewDataSource* p1, TableViewCellDelegate* p2, cocos2d::CCRect p3);
    TodoReturn cancelAndStoleTouch(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    TodoReturn cellForRowAtIndexPath(CCIndexPath& p0);
    TodoReturn cellForTouch(cocos2d::CCTouch* p0);
    TodoReturn checkBoundaryOfCell(cocos2d::CCPoint& p0, float p1);
    TodoReturn checkBoundaryOfCell(TableViewCell* p0);
    TodoReturn checkBoundaryOfContent(float p0);
    TodoReturn checkFirstCell(TableViewCell* p0);
    TodoReturn checkLastCell(TableViewCell* p0);
    TodoReturn claimTouch(cocos2d::CCTouch* p0);
    TodoReturn deleteTableViewCell(TableViewCell* p0);
    TodoReturn dequeueReusableCellWithIdentifier(char const* p0);
    TodoReturn initTableViewCells();
    bool isDuplicateIndexPath(CCIndexPath& p0);
    bool isDuplicateInVisibleCellArray(CCIndexPath* p0);
    void reloadData();
    TodoReturn removeIndexPathFromPathAddedArray(CCIndexPath& p0);
    TodoReturn scrollToIndexPath(CCIndexPath& p0);
    TodoReturn touchFinish(cocos2d::CCTouch* p0);
    virtual void onEnter();
    virtual void onExit();
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
    virtual void registerWithTouchDispatcher();
    virtual void scrollWheel(float p0, float p1);
    virtual void scrllViewWillBeginDecelerating(CCScrollLayerExt* p0);
    virtual void scrollViewDidEndDecelerating(CCScrollLayerExt* p0);
    virtual void scrollViewTouchMoving(CCScrollLayerExt* p0);
    virtual void scrollViewDidEndMoving(CCScrollLayerExt* p0);
    bool m_touchOutOfBoundary;
    cocos2d::CCTouch* m_touchStart;
    cocos2d::CCPoint m_touchStartPosition2;
    cocos2d::CCPoint m_unknown2;
    cocos2d::CCPoint m_touchPosition2;
    void* m_idk;
    bool m_touchMoved;
    cocos2d::CCArray* m_cellArray;
    cocos2d::CCArray* m_array2;
    cocos2d::CCArray* m_array3;
    TableViewDelegate* m_tableDelegate;
    virtual TodoReturn getCellDelegateType();
    TableViewDataSource* m_dataSource;
    TableViewCellDelegate* m_cellDelegate;
    int m_unused2;
    void* m_unused3;
    int m_unused4;
    float m_touchLastY;
    bool m_cancellingTouches;
};

#endif /* __TABLEVIEW_H__ */