
#include "includes.h"


static CCSpriteGrayscale* create(std::string const& file, cocos2d::CCRect const& rect){
    auto ret = new CCSpriteGrayscale();
    if (ret->initWithFile(file.c_str(), rect)) {
        ret->autorelease();
        return ret;
    }
    delete ret;
    return nullptr;
}


static CCSpriteGrayscale* create(std::string const& file) {
    auto ret = new CCSpriteGrayscale();
    if (ret->initWithFile(file.c_str())) {
        ret->autorelease();
        return ret;
    }
    delete ret;
    return nullptr;
}

static CCSpriteGrayscale* createWithSpriteFrame(cocos2d::CCSpriteFrame* frame){
    auto ret = new CCSpriteGrayscale();
    if (ret->initWithSpriteFrame(frame)) {
        ret->autorelease();
        return ret;
    }
    delete ret;
    return nullptr;
}

static CCSpriteGrayscale* createWithSpriteFrameName(std::string const& frameName){
    return createWithSpriteFrame(cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache()->spriteFrameByName(frameName->c_str()));
};

static CCSpriteGrayscale* createWithTexture(cocos2d::CCTexture2D* texture, cocos2d::CCRect const& rect, bool rotated) {
    auto ret = new CCSpriteGrayscale();
    if (ret->initWithTexture(texture, rect, rotated)) {
        ret->autorelease();
        return ret;
    }
    delete ret;
    return nullptr;
}

static CCSpriteGrayscale* createWithTexture(cocos2d::CCTexture2D* texture){
    auto ret = new CCSpriteGrayscale();
    if (ret->initWithTexture(texture)) {
        ret->autorelease();
        return ret;
    }
    delete ret;
    return nullptr;
}

std::string CCSpriteGrayscale::getShaderName(){
    return "grayscale_program";
};

const char * CCSpriteGrayscale::shaderBody()
{
    return "\n    #ifdef GL_ES                                                                    \n"\
        "    precision mediump float;                                                    \n"\
        "    #endif                                                                        \n"\
        "    \n"\
        "    varying vec4 v_fragmentColor;                                                 \n"\
        "    varying vec2 v_texCoord;                                                    \n"\
        "    uniform sampler2D u_texture;                                                \n"\
        "    \n"\
        "    uniform vec3 u_lum;                                                            \n"\
        "    \n    void main(void) {                                                            \n"\
        "    vec4 color = texture2D(u_texture, v_texCoord);                            \n"\
        "    float gray =  dot(color.rgb * v_fragmentColor.rgb, u_lum);                \n"\
        "    gl_FragColor = vec4(vec3(gray),  color.a);                                \n"\
        "    }                                                                            \n    ";
}
