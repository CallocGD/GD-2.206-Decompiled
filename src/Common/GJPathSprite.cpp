
#include "includes.h"



void GJPathSprite::addRankLabel(int ID)
{

    auto label = cocos2d::CCLabelBMFont::create(GameToolbox::intToString(ID).c_str(),"bigFont.fnt");
    label->setScale(0.55);
    addChild(label, 1);
    label->setPosition(convertToNodeSpace(cocos2d::CCPointZero) + CCPointMake(0.0,1.0));
};


void GJPathSprite::addShardSprite(){
    cocos2d::CCSprite *shardSprite;
    cocos2d::CCPoint pos(0.0,1.0);
    std::string filename;
    switch(m_pathNumber) {
        case 1:
            filename = "fireShardBig_001.png";
            break;
        case 2:
            filename = "iceShardBig_001.png";
            break;
        case 3:
            filename = "poisonShardBig_001.png";
            break;
        case 4:
            filename = "shadowShardBig_001.png";
            break;
        case 5:
            filename = "lavaShardBig_001.png";
            break;
        case 6:
            filename = "shard0201ShardBig_001.png";
            break;
        case 7:
            filename = "shard0202ShardBig_001.png";
            break;
        case 8:
            filename = "shard0203ShardBig_001.png";
            break;
        case 9:
            filename = "shard0204ShardBig_001.png";
            break;
        case 10:
            filename = "shard0205ShardBig_001.png";
            break;
        default:
            return;
    }
    shardSprite = cocos2d::CCSprite::createWithSpriteFrameName(filename.c_str());
    addChild(shardSprite,1);
    shardSprite->setScale(0.55);
    shardSprite->setPosition(convertToNodeSpace(cocos2d::CCPointZero) +  pos);
};

/* currently an Unknown varaible */
static float DAT_00994ba0;

void GJPathSprite::changeToLockedArt(){
    std::string pathIcon = cocos2d::CCString::createWithFormat("pathIcon_%02d_001.png", m_pathNumber)->getCString();
    m_bDontDraw = true;
    auto sprite = CCSpriteGrayscale::createWithSpriteFrameName(pathIcon);
    addChild(sprite,-1);
    sprite->setPosition(cocos2d::CCNode::convertToNodeSpace(cocos2d::CCPointZero));
    sprite->setEvenLuminance((m_pathNumber - 3 < 6) ?  (DAT_00994ba0 + m_pathNumber - 3  * 4) : 3.0);
    sprite->setColor(cocos2d::ccc3(0x28,0x28,0x28));
    auto lockGray = cocos2d::CCSprite::createWithSpriteFrameName("GJ_lockGray_001.png");
    addChild(lockGray,1);
    /* you suck at code robtop (no offsense), I could do better than adding a zero here :/ I don't see the point of all this... */
    lockGray->setPosition(convertToNodeSpace(cocos2d::CCPointZero) + cocos2d::CCPointZero);
    lockGray->setScale(1);
    lockGray->setColor(cocos2d::ccc3(200,200,200));
};

GJPathSprite* GJPathSprite::create(int pathNumber)
{
    GJPathSprite* ps = new GJPathSprite();
    if ((ps != nullptr) & ps->init(pathNumber)){
        ps->autorelease();
        return ps;
    }
    CC_SAFE_DELETE(ps);
    return nullptr;
}


bool GJPathSprite::init(int pathNumber)
{
    /* More shittiness seen here, even I could do better than robtop, this could easily be optimized by doing this 
        if (initwithSpriteFrameName(cocos2d::CCString::createWithFormat("pathIcon_%02d_001.png",pathNumber)->getCString())){
            ...
        }
    */
    std::string frame = cocos2d::CCString::createWithFormat("pathIcon_%02d_001.png",pathNumber)->getCString();
    if (initWithSpriteFrameName(frame.c_str())){
        m_pathNumber = pathNumber;
        return true;
    }
    return false;
}



void GJPathSprite::updateState()
{

    if (!GameStatsManager::sharedState()->isItemUnlocked(UnlockType::GJItem, m_pathNumber + 5)) {
        changeToLockedArt();
    } else {
        m_pathNumber = floorf(GameStatsManager::sharedState()->getStatFromKey(static_cast<StatKey>(m_pathNumber + 0x1d)) / 100.0);
        if (9 < m_pathNumber) {
            addShardSprite();
        } else {
            addRankLabel(m_pathNumber);
        }
    }
}
