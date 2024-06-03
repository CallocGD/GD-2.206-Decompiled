#ifndef __GJMULTIPLAYERMANAGER_H__
#define __GJMULTIPLAYERMANAGER_H__


#include "../includes.h"

class GJMultiplayerManager: public cocos2d::CCNode {
public:
    static GJMultiplayerManager* sharedState();
    void addComment(std::string p0, int p1);
    void addDLToActive(char const* tag, cocos2d::CCObject* obj);
    void addDLToActive(char const* tag);
    TodoReturn createAndAddComment(std::string p0, int p1);
    void dataLoaded(DS_Dictionary* p0);
    void encodeDataTo(DS_Dictionary* p0);
    TodoReturn exitLobby(int p0);
    void firstSetup();
    TodoReturn getBasePostString();
    cocos2d::CCObject* getDLObject(char const* p0);
    TodoReturn getLastCommentIDForGame(int p0);
    void handleIt(bool p0, std::string p1, std::string p2, GJHttpType p3);
    void handleItDelayed(bool p0, std::string p1, std::string p2, GJHttpType p3);
    void handleItND(cocos2d::CCNode* p0, void* p1);
    bool isDLActive(char const* tag);
    TodoReturn joinLobby(int p0);
    void onExitLobbyCompleted(std::string p0, std::string p1);
    void onJoinLobbyCompleted(std::string p0, std::string p1);
    void onProcessHttpRequestCompleted(cocos2d::extension::CCHttpClient* p0, cocos2d::extension::CCHttpResponse* p1);
    void onUploadCommentCompleted(std::string p0, std::string p1);
    void ProcessHttpRequest(std::string p0, std::string p1, std::string p2, GJHttpType p3);
    void removeDLFromActive(char const* p0);
    void uploadComment(std::string p0, int p1);
    virtual bool init();
};

#endif /* __GJMULTIPLAYERMANAGER_H__ */