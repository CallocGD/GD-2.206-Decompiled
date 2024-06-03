#ifndef __KEYBINDINGSMANAGER_H__
#define __KEYBINDINGSMANAGER_H__


#include "../includes.h"

class KeybindingsManager: public cocos2d::CCNode {
public:
    static KeybindingsManager* sharedState();
    TodoReturn commandForKey(cocos2d::enumKeyCodes p0, GJKeyGroup p1, bool p2, bool p3, bool p4);
    TodoReturn commandForKeyMods(cocos2d::enumKeyCodes p0, GJKeyGroup p1);
    TodoReturn commandForKeyNoMods(cocos2d::enumKeyCodes p0, GJKeyGroup p1);
    TodoReturn commandToKeyForGroup(GJKeyGroup p0);
    void dataLoaded(DS_Dictionary* p0);
    void encodeDataTo(DS_Dictionary* p0);
    void firstSetup();
    TodoReturn groupForCommand(GJKeyCommand p0);
    TodoReturn keyForCommand(GJKeyCommand p0);
    TodoReturn keyToCommandForGroup(GJKeyGroup p0);
    virtual bool init();
};

#endif /* __KEYBINDINGSMANAGER_H__ */