cmake_minimum_required(VERSION 3.16)
project(OpenglLearning)

set(CMAKE_CXX_STANDARD 14)
# 添加头文件
set(GLEW_H /usr/local/Cellar/glew/2.1.0_1/include/GL)
set(GLFW_H /usr/local/Cellar/glfw/3.3.2/include/GLFW)
include_directories(${GLEW_H}
                    ${GLFW_H}
                    ${CMAKE_SOURCE_DIR}/include
                    ${CMAKE_SOURCE_DIR}/glad/include
                    ${CMAKE_SOURCE_DIR}/glm
                    ${CMAKE_SOURCE_DIR}/glm/detail
                    ${CMAKE_SOURCE_DIR}/glm/gtc
                    ${CMAKE_SOURCE_DIR}/glm/gtx
        )

# 添加目标链接
set(GLEW_LINK /usr/local/Cellar/glew/2.1.0_1/lib/libGLEW.2.1.0.dylib)
set(GLFW_LINK /usr/local/Cellar/glfw/3.3.2/lib/libglfw.3.3.dylib)
link_libraries(${OPENGL} ${GLEW_LINK} ${GLFW_LINK})

# 执行编译命令
file(GLOB SRC
        ${CMAKE_SOURCE_DIR}/src/*.cpp
        ${CMAKE_SOURCE_DIR}/glad/src/glad.c
        ${CMAKE_SOURCE_DIR}/main.cpp
        )

set(SOURCE_FILES
        ${SRC} include/LearnShader.h)
add_executable(OpenglLearning ${SOURCE_FILES})

if (APPLE)
    target_link_libraries(OpenglLearning "-framework OpenGL")
    target_link_libraries(OpenglLearning "-framework GLUT")
endif()
