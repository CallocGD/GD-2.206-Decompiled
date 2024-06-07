
#include "includes.h"


// CCSpriteGrayscale* CCSpriteGrayscale::create(std::string const& p0, cocos2d::CCRect const& p1)
// {
//     return;
// }


// CCSpriteGrayscale* CCSpriteGrayscale::create(std::string const& p0)
// {
//     return;
// }


// CCSpriteGrayscale* CCSpriteGrayscale::createWithSpriteFrame(cocos2d::CCSpriteFrame* p0)
// {
//     return;
// }


// CCSpriteGrayscale* CCSpriteGrayscale::createWithSpriteFrameName(std::string const& p0)
// {
//     return;
// }



/* Unknown Return: CCSpriteGrayscale::createWithTexture(cocos2d::CCTexture2D* p0, cocos2d::CCRect const& p1, bool p2){}; */


/* Unknown Return: CCSpriteGrayscale::createWithTexture(cocos2d::CCTexture2D* p0){}; */


std::string CCSpriteGrayscale::getShaderName(){
        return "grayscale_program";
};

const char * CCSpriteGrayscale::shaderBody()
{
      return "\n    #ifdef GL_ES                                                                    \n"\
        "    preci sion mediump float;                                                    \n"\
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
