#ifndef __GJSCORECELL_H__
#define __GJSCORECELL_H__


#include "../includes.h"


/* -- Predefined Subclasses -- */

class TableViewCell;
class FLAlertLayerProtocol;

class GJScoreCell: public TableViewCell, public FLAlertLayerProtocol {
public:
     GJScoreCell(char const* p0, float p1, float p2);
    void loadFromScore(GJUserScore* p0);
    void onBan(cocos2d::CCObject* sender);
    void onCheck(cocos2d::CCObject* sender);
    void onMoreLevels(cocos2d::CCObject* sender);
    void onViewProfile(cocos2d::CCObject* sender);
    TodoReturn updateBGColor(int p0);
    virtual bool init();
    virtual void draw();
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
    GJUserScore* m_score;
};

#endif /* __GJSCORECELL_H__ */