#ifndef __LIKEITEMLAYER_H__
#define __LIKEITEMLAYER_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class FLAlertLayer;

class LikeItemLayer: public FLAlertLayer {
public:
    static LikeItemLayer* create(LikeItemType p0, int p1, int p2);
    bool init(LikeItemType p0, int p1, int p2);
    void onClose(cocos2d::CCObject* sender);
    void onDislike(cocos2d::CCObject* sender);
    void onLike(cocos2d::CCObject* sender);
    void triggerLike(bool isLiked);
    virtual void keyBackClicked();
    LikeItemType m_itemType;
    int m_itemID;
    int m_commentSourceID;
    LikeItemDelegate* m_likeDelegate;
};

#endif /* __LIKEITEMLAYER_H__ */