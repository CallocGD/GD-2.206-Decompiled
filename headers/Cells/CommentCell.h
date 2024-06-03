#ifndef __COMMENTCELL_H__
#define __COMMENTCELL_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class TableViewCell;
class LikeItemDelegate;
class FLAlertLayerProtocol;

class CommentCell: public TableViewCell, public LikeItemDelegate, public FLAlertLayerProtocol {
public:
     CommentCell(char const* p0, float p1, float p2);
    TodoReturn incrementDislikes();
    TodoReturn incrementLikes();
    void loadFromComment(GJComment* p0);
    void onConfirmDelete(cocos2d::CCObject* sender);
    TodoReturn onDelete();
    void onGoToLevel(cocos2d::CCObject* sender);
    void onLike(cocos2d::CCObject* sender);
    TodoReturn onUndelete();
    void onUnhide(cocos2d::CCObject* sender);
    void onViewProfile(cocos2d::CCObject* sender);
    void updateBGColor(int p0);
    void updateLabelValues();
    virtual bool init();
    virtual void draw();
    virtual void likedItem(LikeItemType p0, int p1, bool p2);
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
    cocos2d::CCSprite* m_iconSprite;
    cocos2d::CCLabelBMFont* m_likeLabel;
    GJComment* m_comment;
    bool m_accountComment;
};

#endif /* __COMMENTCELL_H__ */