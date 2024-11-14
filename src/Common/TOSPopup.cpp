#include "includes.h"


TOSPopup* TOSPopup::create()
{
    TOSPopup* tos = new TOSPopup;
    if (tos->init()){
        tos->autorelease();
        return tos;
    }
    CC_SAFE_DELETE(tos);
    return nullptr;
}


/* TODO: Bigass Function */

PASS(bool TOSPopup::init(), "Bigass Function, will do this later...")



NOOP(void TOSPopup::keyBackClicked());



void TOSPopup::onClose(cocos2d::CCObject* sender)
{
    GameManager::sharedState()->setUGV("30",true);
    setKeypadEnabled(false);
    removeFromParentAndCleanup(true);
}


void TOSPopup::onPrivacy(cocos2d::CCObject* sender)
{
    cocos2d::CCApplication::sharedApplication()->openURL("https://www.robtopgames.com/privacy");
}


void TOSPopup::onTOS(cocos2d::CCObject* sender)
{
    /* Fun Fact: Robtop Doxxed Himself in the Tos Page. */
    cocos2d::CCApplication::sharedApplication()->openURL("https://www.robtopgames.com/tos");
}
