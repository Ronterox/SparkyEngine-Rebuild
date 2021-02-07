cmake_minimum_required(VERSION 3.17)
project(Sparky)

set(CMAKE_CXX_STANDARD 20)

set(SOURCE_FILES ${PROJECT_SOURCE_DIR}/src)

add_executable(${PROJECT_NAME} main.cpp src/graphics/window.cpp src/graphics/window.h)

target_link_libraries(${PROJECT_NAME} -lglfw -lglut -lGLEW -lGLU -lGL)