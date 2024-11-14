#ifndef __SPRITEDESCRIPTION_H__
#define __SPRITEDESCRIPTION_H__


#include "../includes.h"

class SpriteDescription : cocos2d::CCObject {
public:
    // virtual ~SpriteDescription();
    SpriteDescription() {
        m_position = CCPointMake(0.f, 0.f);
        m_scale = CCPointMake(0.f, 0.f);
        m_flipped = CCPointMake(0.f, 0.f);
        m_rotation = 0;
        m_zValue = 0;
        m_tag = 0;
        m_usesCustomTag = false;
        m_texture = nullptr;
    }

    static SpriteDescription* createDescription(cocos2d::CCDictionary* dict);

    static SpriteDescription* createDescription(DS_Dictionary* dict);

    
    bool initDescription(cocos2d::CCDictionary* dict);

    bool initDescription(DS_Dictionary* dict);

    cocos2d::CCPoint m_position;
    cocos2d::CCPoint m_scale;
    cocos2d::CCPoint m_flipped;
    float m_rotation;
    int m_zValue;
    int m_tag;
    bool m_usesCustomTag;
    cocos2d::CCSpriteFrame* m_texture;
};

#endif /* __SPRITEDESCRIPTION_H__ */
