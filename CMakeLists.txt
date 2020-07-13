cmake_minimum_required(VERSION 3.16)
project(OpenglLearning)

set(CMAKE_CXX_STANDARD 14)
# 添加头文件
set(GLEW_H /usr/local/Cellar/glew/2.1.0_1/include/GL)
set(GLFW_H /usr/local/Cellar/glfw/3.3.2/include/GLFW)
include_directories(${GLEW_H} ${GLFW_H} glad/include)

# 添加目标链接
set(GLEW_LINK /usr/local/Cellar/glew/2.1.0_1/lib/libGLEW.2.1.0.dylib)
set(GLFW_LINK /usr/local/Cellar/glfw/3.3.2/lib/libglfw.3.3.dylib)
link_libraries(${OPENGL} ${GLEW_LINK} ${GLFW_LINK})

# 执行编译命令
set(SOURCE_FILES
        glad/src/glad.c
        main.cpp
        )
add_executable(OpenglLearning ${SOURCE_FILES})

if (APPLE)
    target_link_libraries(OpenglLearning "-framework OpenGL")
    target_link_libraries(OpenglLearning "-framework GLUT")
endif()
