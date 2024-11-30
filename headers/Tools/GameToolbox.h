#ifndef __GAMETOOLBOX_H__
#define __GAMETOOLBOX_H__


#include "../includes.h"

/* Rumor has it that SMJS was given a copy of this from robtop but is not allowed to show it to the public, 
 * Lol, I'm gonna reverse engineer it all soon :Lenny: */

class GameToolbox {
public:
    static void addBackButton(cocos2d::CCLayer* p0, cocos2d::CCMenuItem* p1);
    static void addRThumbScrollButton(cocos2d::CCLayer* p0);
    static void alignItemsHorisontally(cocos2d::CCArray* p0, float p1, cocos2d::CCPoint p2, bool p3);
    static void alignItemsVertically(cocos2d::CCArray* p0, float p1, cocos2d::CCPoint p2);
    static TodoReturn bounceTime(float p0);
    static TodoReturn colorToSepia(cocos2d::ccColor3B p0, float p1);
    static TodoReturn contentScaleClipRect(cocos2d::CCRect& p0);
    static TodoReturn createHashString(std::string const& p0, int p1);
    static CCMenuItemToggler* createToggleButton(std::string p0, cocos2d::SEL_MenuHandler p1, bool p2, cocos2d::CCMenu* p3, cocos2d::CCPoint p4, cocos2d::CCNode* p5, cocos2d::CCNode* p6, cocos2d::CCArray* p7);
    static CCMenuItemToggler* createToggleButton(std::string p0, cocos2d::SEL_MenuHandler p1, bool p2, cocos2d::CCMenu* p3, cocos2d::CCPoint p4, cocos2d::CCNode* p5, cocos2d::CCNode* p6, float p7, float p8, float p9, cocos2d::CCPoint p10, char const* p11, bool p12, int p13, cocos2d::CCArray* p14);
    static TodoReturn doWeHaveInternet();
    static TodoReturn easeToText(int p0);
    static TodoReturn fast_rand_0_1();
    static TodoReturn fast_rand_minus1_1();
    static TodoReturn fast_rand();
    static TodoReturn fast_srand(uint64_t p0);
    static TodoReturn gen_random(int p0);
    static TodoReturn getDropActionWDelay(float p0, float p1, float p2, cocos2d::CCNode* p3, cocos2d::SEL_CallFunc p4);
    static TodoReturn getDropActionWEnd(float p0, float p1, float p2, cocos2d::CCAction* p3, float p4);
    static TodoReturn getEasedAction(cocos2d::CCActionInterval* p0, int p1, float p2);
    static float getEasedValue(float p0, int p1, float p2);
    static TodoReturn getfast_srand();
    static TodoReturn getInvertedEasing(int p0);
    static TodoReturn getLargestMergedIntDicts(cocos2d::CCDictionary* p0, cocos2d::CCDictionary* p1);
    static TodoReturn getMultipliedHSV(cocos2d::ccHSVValue const& p0, float p1);
    static TodoReturn getRelativeOffset(GameObject* p0, cocos2d::CCPoint p1);
    static TodoReturn getResponse(cocos2d::extension::CCHttpResponse* p0);
    static gd::string getTimeString(int p0, bool p1);
    static TodoReturn hsvFromString(std::string const& p0, char const* p1);
    static TodoReturn intToShortString(int p0);
    /* NOTE: This function is inlined... */
    static std::string intToString(int p0);
    static bool isIOS();
    static bool isRateEasing(int p0);
    static TodoReturn mergeDictsSaveLargestInt(cocos2d::CCDictionary* p0, cocos2d::CCDictionary* p1);
    static TodoReturn mergeDictsSkipConflict(cocos2d::CCDictionary* p0, cocos2d::CCDictionary* p1);
    static TodoReturn msToTimeString(int p0, int p1);
    static TodoReturn multipliedColorValue(cocos2d::ccColor3B p0, cocos2d::ccColor3B p1, float p2);
    static TodoReturn openAppPage();
    static TodoReturn openRateURL(std::string p0, std::string p1);
    static TodoReturn particleFromString(std::string const& p0, cocos2d::CCParticleSystemQuad* p1, bool p2);
    // static TodoReturn particleFromStruct(cocos2d::ParticleStruct const& p0, cocos2d::CCParticleSystemQuad* p1, bool p2);
    // static TodoReturn particleStringToStruct(std::string const& p0, cocos2d::ParticleStruct& p1);
    static TodoReturn pointsToString(int p0);
    static TodoReturn postClipVisit();
    static TodoReturn preVisitWithClippingRect(cocos2d::CCNode* p0, cocos2d::CCRect p1);
    static TodoReturn preVisitWithClipRect(cocos2d::CCRect p0);
    static TodoReturn saveParticleToString(cocos2d::CCParticleSystemQuad* p0);
    static TodoReturn saveStringToFile(std::string const& p0, std::string const& p1);
    static TodoReturn stringFromHSV(cocos2d::ccHSVValue p0, char const* p1);
    static cocos2d::CCDictionary* stringSetupToDict(std::string const& p0, char const* p1);
    static TodoReturn stringSetupToMap(std::string const& p0, char const* p1, std::map<std::string, std::string>& p2);
    static TodoReturn strongColor(cocos2d::ccColor3B p0);
    static gd::string timestampToHumanReadable(time_t p0, time_t p1);
    static cocos2d::ccColor3B transformColor(cocos2d::ccColor3B const& p0, cocos2d::ccHSVValue p1);
    static cocos2d::ccColor3B transformColor(cocos2d::ccColor3B const& p0, float p1, float p2, float p3);
};

#endif /* __GAMETOOLBOX_H__ */
#endif /* __GAMETOOLBOX_H__ */
