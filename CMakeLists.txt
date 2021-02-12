cmake_minimum_required(VERSION 3.17)
project(Sparky)

set(CMAKE_CXX_STANDARD 20)

set(SOURCE_FILES ${PROJECT_SOURCE_DIR}/src)

include_directories(${PROJECT_SOURCE_DIR})

add_executable(${PROJECT_NAME} main.cpp src/Graphics/window.cpp src/Graphics/window.h src/Debug/logSystem.h src/Maths/vector2.cpp src/Maths/vector2.h src/Debug/utility_methods.h)

target_link_libraries(${PROJECT_NAME} -lglfw -lglut -lGLEW -lGLU -lGL)