cmake_minimum_required(VERSION 3.17)
project(Sparky)

set(CMAKE_CXX_STANDARD 20)

# Variable Name is SOURCE_FILES
set(SOURCE_FILES ${PROJECT_SOURCE_DIR}/src)

# We create Executable
add_executable(${PROJECT_NAME} main.cpp)

# Add subdirectories with cmake list to call their cmakeList
add_subdirectory(${SOURCE_FILES}/Graphics)
add_subdirectory(${SOURCE_FILES}/Maths)

# Link libraries Created by them
target_link_libraries(${PROJECT_NAME} PUBLIC ${PROJECT_NAME}_graphics)
target_link_libraries(${PROJECT_NAME} PUBLIC ${PROJECT_NAME}_maths)

# Link libraries on my system
target_link_libraries(${PROJECT_NAME} PUBLIC -lglfw -lglut -lGLEW -lGLU -lGL)

