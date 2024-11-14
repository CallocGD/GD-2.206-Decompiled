#include "includes.h"

SpriteDescription* SpriteDescription::createDescription(cocos2d::CCDictionary* dict){
    auto ret = new SpriteDescription();
    if (ret->initDescription(dict)) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
};


SpriteDescription* SpriteDescription::createDescription(DS_Dictionary* dict){    
    auto ret = new SpriteDescription();
    if (ret->initDescription(dict)) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}


bool SpriteDescription::initDescription(cocos2d::CCDictionary* dict){
   
    m_position = cocos2d::CCPointFromString(dict->valueForKey("position")->getCString());
    m_scale = cocos2d::CCPointFromString(dict->valueForKey("scale")->getCString());
    m_flipped = cocos2d::CCPointFromString(dict->valueForKey("flipped")->getCString());
    m_rotation = dict->valueForKey("rotation")->floatValue();
    m_zValue = dict->valueForKey("zValue")->intValue();
    m_tag = dict->valueForKey("tag")->intValue();
    m_usesCustomTag = dict->valueForKey("usesCustomTag")->boolValue();
    if (m_usesCustomTag) {
        auto frameName = dict->valueForKey("texture")->getCString();
        m_texture = cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache()->spriteFrameByName(frameName);
        m_texture->retain();

        // This a new class member that Robtop likely added in...
        m_texture->m_textureName = frameName;
    }
    return true;
};


bool SpriteDescription::initDescription(DS_Dictionary* dict){
    m_position = dict->getVec2ForKey("position");
    m_flipped = dict->getVec2ForKey("flipped");
    m_scale = dict->getVec2ForKey("scale");
    m_rotation = atof(dict->getStringForKey("rotation").c_str());
    m_zValue = atoi(dict->getStringForKey("zValue").c_str());
    m_tag = atoi(dict->getStringForKey("tag").c_str());
    
    m_usesCustomTag = atoi(dict->getStringForKey("usesCustomTag").c_str()) == 1;
    
    if (m_usesCustomTag) {
      std::string frameName = dict->getStringForKey("texture");
      m_texture = cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache()->spriteFrameByName(frameName.c_str());
      m_texture->retain();
      m_texture->m_textureName = frameName;
    }
    return true;
}
