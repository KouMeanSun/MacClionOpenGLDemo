//
// Created by 高明阳 on 2020/7/14.
//

#ifndef OPENGLLEARNING_SHADER_H
#define OPENGLLEARNING_SHADER_H

#include <glad/glad.h>

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

class Shader
{
public:
    // 程序ID
    unsigned int ID;

    //构造器读取并构建着色器
    Shader(const GLchar* vertexPath,const GLchar* fragmentPaht);
    //使用/激活程序
    void use();
    // uniform 工具函数
    void setBool(const std::string &name,bool value) const ;
    void setInt(const std::string &name,int value) const ;
    void setFloat(const std::string &name,float value) const ;
};

void test();

#endif //OPENGLLEARNING_SHADER_H

