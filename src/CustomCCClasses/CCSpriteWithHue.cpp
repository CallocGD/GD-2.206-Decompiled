#include "includes.h"
#include <cmath>



CCSpriteWithHue* CCSpriteWithHue::create(std::string const& frame, cocos2d::CCRect const& rect)
{
    CCSpriteWithHue* obj = new CCSpriteWithHue();
    if (obj != nullptr){
        memset(obj, 0 , sizeof(CCSpriteWithHue));
        if (obj->initWithFile(frame.c_str(), rect)){
            obj->autorelease();
            return obj;
        }
    }
    CC_SAFE_DELETE(obj);
    return nullptr;
}


CCSpriteWithHue* CCSpriteWithHue::create(std::string const& frame)
{
    CCSpriteWithHue* obj = new CCSpriteWithHue();
    if (obj != nullptr){
        memset(obj, 0 , sizeof(CCSpriteWithHue));
        if (obj->initWithFile(frame.c_str())){
            obj->autorelease();
            return obj;
        }
    }
    CC_SAFE_DELETE(obj);
    return nullptr;
}



CCSpriteWithHue* CCSpriteWithHue::createWithSpriteFrame(cocos2d::CCSpriteFrame* frame)
{
    CCSpriteWithHue* obj = new CCSpriteWithHue();
    if (obj != nullptr){
        memset(obj, 0 , sizeof(CCSpriteWithHue));
        if (obj->initWithSpriteFrame(frame)){
            obj->autorelease();
            return obj;
        }
    }
    CC_SAFE_DELETE(obj);
    return nullptr;
}

CCSpriteWithHue* CCSpriteWithHue::createWithSpriteFrameName(std::string const& frame){
    CCSpriteWithHue* obj = new CCSpriteWithHue();
    if (obj != nullptr){
        memset(obj, 0 , sizeof(CCSpriteWithHue));
        if (obj->initWithSpriteFrameName(frame.c_str())){
            obj->autorelease();
            return obj;
        }
    }
    CC_SAFE_DELETE(obj);
    return nullptr;
};


CCSpriteWithHue* CCSpriteWithHue::createWithTexture(cocos2d::CCTexture2D* texture, cocos2d::CCRect const& rect, bool rotate){
    CCSpriteWithHue* obj = new CCSpriteWithHue();
    if (obj != nullptr){
        memset(obj, 0 , sizeof(CCSpriteWithHue));
        if (obj->initWithTexture(texture, rect, rotate)){
            obj->autorelease();
            return obj;
        }
    }
    CC_SAFE_DELETE(obj);
    return nullptr;
};


CCSpriteWithHue* CCSpriteWithHue::createWithTexture(cocos2d::CCTexture2D* texture){
    CCSpriteWithHue* obj = new CCSpriteWithHue();
    if (obj != nullptr){
        memset(obj, 0 , sizeof(CCSpriteWithHue));
        if (obj->initWithTexture(texture)){
            obj->autorelease();
            return obj;
        }
    }
    CC_SAFE_DELETE(obj);
    return nullptr;
};


static unsigned int g_uNumberOfDraws = 0;

void CCSpriteWithHue::draw()
{
    if ((!m_bDontDraw) && (_realOpacity)) {
        cocos2d::ccGLEnable(m_eGLServerState);
        getShaderProgram()->use();
        getShaderProgram()->setUniformsForBuiltins();
        cocos2d::ccGLBlendFunc(m_sBlendFunc.src, m_sBlendFunc.dst);
        cocos2d::ccGLBindTexture2D(m_pobTexture->getName());
        cocos2d::ccGLEnableVertexAttribs(7);
        getShaderProgram()->setUniformLocationWithMatrix3fv(m_uHueLoc, m_colorMatrix[0], 1);
        
        /* Shit code robtop :/ */
        getShaderProgram()->setUniformLocationWith1f(getAlpha(), getAlpha());
        getShaderProgram()->setUniformLocationWith3f(m_uLumLoc, m_luminance[0], m_luminance[1], m_luminance[2]);
        
        /* Currently throws intellisense errors when trying to put these together... */
        // glVertexAttribPointer(0,3,5126,0, 24, (void*)(m_sQuad.tl.vertices));
        // glVertexAttribPointer(2,2,5126,0, 24, (void*)(m_sQuad.tl.texCoords));
        // glVertexAttribPointer(1,4,5121,1, 24, (void*)(m_sQuad.tl.colors));
        glDrawArrays(5,0,4);
        g_uNumberOfDraws = g_uNumberOfDraws + 1;
    }   
    return;
}   



float CCSpriteWithHue::getAlpha(){
    return _displayedOpacity / 255.0;
}


float CCSpriteWithHue::getHue(){
    return m_hue;
}

std::string CCSpriteWithHue::getShaderName(){
    return "hue_program";
}


void CCSpriteWithHue::getUniformLocations(){
    m_uHueLoc = glGetUniformLocation(getShaderProgram()->getProgram(),"u_hue");
    m_uAlphaLoc = glGetUniformLocation(getShaderProgram()->getProgram(),"u_alpha");
    m_uLumLoc = glGetUniformLocation(getShaderProgram()->getProgram(),"u_lum");
}


void CCSpriteWithHue::initShader()
{   
    cocos2d::CCGLProgram *shaderProgram;
    cocos2d::CCShaderCache *shaderCache;
    std::string shaderName;
    const char *vert;

    shaderProgram = cocos2d::CCShaderCache::sharedShaderCache()->programForKey(getShaderName().c_str());
    if (shaderProgram == nullptr) {
        shaderProgram = new cocos2d::CCGLProgram();
        shaderProgram->initWithVertexShaderByteArray( cocos2d::ccPositionTextureColor_vert, shaderBody());
        shaderProgram->addAttribute("a_position",0);
        shaderProgram->addAttribute("a_color",1);
        shaderProgram->addAttribute("a_texCoord",2);
        shaderProgram->link();
        shaderProgram->updateUniforms();
        cocos2d::CCShaderCache::sharedShaderCache()->addProgram(shaderProgram , getShaderName().c_str());
        shaderProgram->release();
    }
    setShaderProgram(shaderProgram);
    getUniformLocations();
    updateColor();
}

bool CCSpriteWithHue::initWithSpriteFrame(cocos2d::CCSpriteFrame* p0)
{
    return;
}


bool CCSpriteWithHue::initWithTexture(cocos2d::CCTexture2D* texture)
{
    return;
}


bool CCSpriteWithHue::initWithTexture(cocos2d::CCTexture2D* p0, cocos2d::CCRect const& p1)
{
    return;
}


bool CCSpriteWithHue::initWithTexture(cocos2d::CCTexture2D* p0, cocos2d::CCRect const& p1, bool p2)
{
    return;
}


void CCSpriteWithHue::setCustomLuminance(float r, float g, float b )
{
    m_luminance[0] = r;
    m_luminance[1] = g;
    m_luminance[2] = b;
}

void CCSpriteWithHue::setEvenLuminance(float value)
{
    m_luminance[0] = (value * 0.33);
    m_luminance[1] = (value * 0.33);
    m_luminance[2] = (value * 0.33);
}

void CCSpriteWithHue::setHue(float hue)
{
    m_hue = hue;
    updateColorMatrix();
}


void CCSpriteWithHue::setHueDegrees(float degrees)
{
    /* what is this for-loop shit? */
    for (; ((degrees < 0.0) << 0x1f) < 0; degrees += 360.0){}
    setHue((degrees / 360.0) * 6.28f);
}


void CCSpriteWithHue::setLuminance(float lum)
{
    m_luminance[0] = lum * 0.21;
    m_luminance[1] = lum * 0.72;
    m_luminance[2] = lum * 0.07;
}


void CCSpriteWithHue::setupDefaultSettings()
{
    m_hue = 0.0f;
    setLuminance(1.0f);
}


const char* CCSpriteWithHue::shaderBody(){
    return  "                                                               \n"\
            "    #ifdef GL_ES                                                    \n"\
            "    precision mediump float;                                    \n"\
            "    #endif                                                          \n"\
            "    \n    varying vec4  v_fragmentColor;                \n"\
            "    varying vec2 v_texCoord;                                    \n"\
            "    uniform sampler2D u_texture;                                \n"\
            "    uniform mat3 u_hue;                                         \n"\
            "    uniform float u_alpha;                                      \n"\
            "    \n"\
            "    void main()                                                 \n"\
            "    {                                                           \n"\
            "    vec4 pixColor = texture2D(u_texture, v_texCoord);        \n"\
            "    vec3 rgbColor = u_hue * pixColor.rgb * v_fragmentColor.rgb;                   \n"\
            "    gl_FragColor = vec4(rgbColor, pixColor.a * u_alpha);    \n"\
            "    }                                                           \n    ";
};



void CCSpriteWithHue::updateColor()
{
    cocos2d::CCSprite::updateColor();
    updateColorMatrix();
}



/* I'm gonna be honest and say that solving this part was very shitty because nobody wanted to help me solve it - Calloc */

void zRotateMat(float *(mat)[3], float sin, float cos)
{
    mat[2][2] = cos;
    mat[0][1] = 0.0;
    mat[1][1] = 0.0;
    mat[1][2] = 0.0;
    mat[2][0] = 0.0;
    mat[0][0] = sin;
    mat[0][2] = -sin;
    mat[1][0] = cos;
    mat[2][1] = 1.0;
}

void yRotateMat(float *(mat)[3], float sin, float cos)
{
    mat[2][2] = cos;
    mat[0][0] = 0.0;
    mat[0][2] = 0.0;
    mat[1][0] = 1.0;
    mat[1][1] = 0.0;
    mat[0][1] = -sin;
    mat[2][0] = 0.0;
    mat[2][1] = cos;
    mat[1][2] = sin;
}

void xRotateMat(float *(mat)[3], float sin, float cos)
{
    mat[1][0] = cos;
    mat[2][2] = -1.0;
    mat[1][1] = sin;
    mat[2][1] = cos;
    mat[0][0] = 0.0;
    mat[0][1] = 0.0;
    mat[0][2] = 0.0;
    mat[1][2] = 0.0;
    mat[2][0] = -sin;
}


/* I'm not entirely sure if I did this function correctly or not... */

void matrixMult(float *(x)[3], float *(y)[3], float *(z)[3])
{
    int j, i;
    float **x_pos;

    for (i = 0; i != 36; i += 12){
        auto matrix = x + i;
        matrix = x;
        do
        {
            x_pos = matrix + 1;
            matrix[2][2] = y[0][0] * matrix[0][2] + y[2][2] * matrix[2][2] + y[0][2] * matrix[1][2];
            matrix++;
            matrix = x_pos;
        } while (x_pos != x + 3);
        y += 3;
    }

    i = 0;
    while (j != 36)
    {
        j = i + 12;
        z[2][2] = x[2][2] + i;
        z[0][1] = y[2][2] + i;
        z[0][2] = z[2][2] + i;
        z = z + 3;
        i = j;
    }
}


/* Todo Run a Watch-Dog over this function so we can correct any errors with what we just reverse engineered... */

float** hueMatrix(float *(matrix)[3], float hue)
{
    float** ret = matrix;
    xRotateMat(matrix,0.7f, 0.7f);
    yRotateMat(ret,-0.5f, 0.8f);
    matrixMult(ret, matrix,matrix);
    zRotateMat(ret,  sinf(hue), cosf(hue));
    matrixMult(ret, matrix,matrix);
    yRotateMat(ret, 0.5f, 0.8f);
    matrixMult(ret, matrix,matrix);
    xRotateMat(ret, -0.7f, 0.7f);
    matrixMult(ret, matrix,matrix);
    return ret;
}

void premultiplyAlpha(float *(matrix)[3],float alpha){
    for (float **matrix_a = matrix; matrix_a != (matrix + 9); matrix_a += 3){
        matrix_a[0][0] = matrix_a[0][0] * alpha;
        matrix_a[0][1] = matrix_a[0][1] * alpha;
        matrix_a[0][2] = matrix_a[0][2] * alpha;
    }
}



void CCSpriteWithHue::updateColorMatrix()
{
    float *matrix[3];
    *matrix = *m_colorMatrix;
    hueMatrix(matrix, m_hue);
    premultiplyAlpha(matrix, getAlpha());
}

void CCSpriteWithHue::updateHue(float hue)
{
    setHue(hue + 0.05f);
}

