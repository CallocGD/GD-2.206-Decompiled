#include "includes.h"
#include <cmath>



CCSpriteWithHue* CCSpriteWithHue::create(std::string const& p0, cocos2d::CCRect const& p1)
{
    return;
}


CCSpriteWithHue* CCSpriteWithHue::create(std::string const& p0)
{
    return;
}



/* Unknown Return: CCSpriteWithHue::createWithSpriteFrame(cocos2d::CCSpriteFrame* p0){}; */


/* Unknown Return: CCSpriteWithHue::createWithSpriteFrameName(std::string const& p0){}; */


/* Unknown Return: CCSpriteWithHue::createWithTexture(cocos2d::CCTexture2D* p0, cocos2d::CCRect const& p1, bool p2){}; */


/* Unknown Return: CCSpriteWithHue::createWithTexture(cocos2d::CCTexture2D* p0){}; */

void CCSpriteWithHue::draw()
{
    return;
}



/* Unknown Return: CCSpriteWithHue::getAlpha(){}; */


/* Unknown Return: CCSpriteWithHue::getHue(){}; */


/* Unknown Return: CCSpriteWithHue::getShaderName(){}; */


/* Unknown Return: CCSpriteWithHue::getUniformLocations(){}; */


/* Unknown Return: CCSpriteWithHue::initShader(){}; */

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


void CCSpriteWithHue::setCustomLuminance(float p0, float p1, float p2)
{
    return;
}


void CCSpriteWithHue::setEvenLuminance(float p0)
{
    return;
}


void CCSpriteWithHue::setHue(float p0)
{
    return;
}


void CCSpriteWithHue::setHueDegrees(float p0)
{
    return;
}


void CCSpriteWithHue::setLuminance(float p0)
{
    return;
}



/* Unknown Return: CCSpriteWithHue::setupDefaultSettings(){}; */


char* CCSpriteWithHue::shaderBody(){
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
    return;
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

void premultiplyAlpha(float **matrix,float alpha){
    for (float **matrix_a = matrix; matrix_a != (matrix + 9); matrix_a += 9){
        matrix_a[0][0] = matrix_a[0][0] * alpha;
        matrix_a[0][1] = matrix_a[0][1] * alpha;
        matrix_a[0][2] = matrix_a[0][2] * alpha;
        matrix_a += 3;
    }
}



/* Unknown Return: CCSpriteWithHue::updateColorMatrix(){}; */


/* Unknown Return: CCSpriteWithHue::updateHue(float p0){}; */
