# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /opt/clion-2020.3/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /opt/clion-2020.3/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/rontero/Documents/CLionProjects/Sparky

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/rontero/Documents/CLionProjects/Sparky/cmake-build-debug/Debug

# Include any dependencies generated for this target.
include src/Maths/CMakeFiles/Sparky_maths.dir/depend.make

# Include the progress variables for this target.
include src/Maths/CMakeFiles/Sparky_maths.dir/progress.make

# Include the compile flags for this target's objects.
include src/Maths/CMakeFiles/Sparky_maths.dir/flags.make

src/Maths/CMakeFiles/Sparky_maths.dir/vector2.cpp.o: src/Maths/CMakeFiles/Sparky_maths.dir/flags.make
src/Maths/CMakeFiles/Sparky_maths.dir/vector2.cpp.o: ../../src/Maths/vector2.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rontero/Documents/CLionProjects/Sparky/cmake-build-debug/Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/Maths/CMakeFiles/Sparky_maths.dir/vector2.cpp.o"
	cd /home/rontero/Documents/CLionProjects/Sparky/cmake-build-debug/Debug/src/Maths && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Sparky_maths.dir/vector2.cpp.o -c /home/rontero/Documents/CLionProjects/Sparky/src/Maths/vector2.cpp

src/Maths/CMakeFiles/Sparky_maths.dir/vector2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Sparky_maths.dir/vector2.cpp.i"
	cd /home/rontero/Documents/CLionProjects/Sparky/cmake-build-debug/Debug/src/Maths && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rontero/Documents/CLionProjects/Sparky/src/Maths/vector2.cpp > CMakeFiles/Sparky_maths.dir/vector2.cpp.i

src/Maths/CMakeFiles/Sparky_maths.dir/vector2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Sparky_maths.dir/vector2.cpp.s"
	cd /home/rontero/Documents/CLionProjects/Sparky/cmake-build-debug/Debug/src/Maths && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rontero/Documents/CLionProjects/Sparky/src/Maths/vector2.cpp -o CMakeFiles/Sparky_maths.dir/vector2.cpp.s

src/Maths/CMakeFiles/Sparky_maths.dir/vector3.cpp.o: src/Maths/CMakeFiles/Sparky_maths.dir/flags.make
src/Maths/CMakeFiles/Sparky_maths.dir/vector3.cpp.o: ../../src/Maths/vector3.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rontero/Documents/CLionProjects/Sparky/cmake-build-debug/Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/Maths/CMakeFiles/Sparky_maths.dir/vector3.cpp.o"
	cd /home/rontero/Documents/CLionProjects/Sparky/cmake-build-debug/Debug/src/Maths && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Sparky_maths.dir/vector3.cpp.o -c /home/rontero/Documents/CLionProjects/Sparky/src/Maths/vector3.cpp

src/Maths/CMakeFiles/Sparky_maths.dir/vector3.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Sparky_maths.dir/vector3.cpp.i"
	cd /home/rontero/Documents/CLionProjects/Sparky/cmake-build-debug/Debug/src/Maths && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rontero/Documents/CLionProjects/Sparky/src/Maths/vector3.cpp > CMakeFiles/Sparky_maths.dir/vector3.cpp.i

src/Maths/CMakeFiles/Sparky_maths.dir/vector3.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Sparky_maths.dir/vector3.cpp.s"
	cd /home/rontero/Documents/CLionProjects/Sparky/cmake-build-debug/Debug/src/Maths && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rontero/Documents/CLionProjects/Sparky/src/Maths/vector3.cpp -o CMakeFiles/Sparky_maths.dir/vector3.cpp.s

src/Maths/CMakeFiles/Sparky_maths.dir/vector4.cpp.o: src/Maths/CMakeFiles/Sparky_maths.dir/flags.make
src/Maths/CMakeFiles/Sparky_maths.dir/vector4.cpp.o: ../../src/Maths/vector4.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rontero/Documents/CLionProjects/Sparky/cmake-build-debug/Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/Maths/CMakeFiles/Sparky_maths.dir/vector4.cpp.o"
	cd /home/rontero/Documents/CLionProjects/Sparky/cmake-build-debug/Debug/src/Maths && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Sparky_maths.dir/vector4.cpp.o -c /home/rontero/Documents/CLionProjects/Sparky/src/Maths/vector4.cpp

src/Maths/CMakeFiles/Sparky_maths.dir/vector4.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Sparky_maths.dir/vector4.cpp.i"
	cd /home/rontero/Documents/CLionProjects/Sparky/cmake-build-debug/Debug/src/Maths && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rontero/Documents/CLionProjects/Sparky/src/Maths/vector4.cpp > CMakeFiles/Sparky_maths.dir/vector4.cpp.i

src/Maths/CMakeFiles/Sparky_maths.dir/vector4.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Sparky_maths.dir/vector4.cpp.s"
	cd /home/rontero/Documents/CLionProjects/Sparky/cmake-build-debug/Debug/src/Maths && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rontero/Documents/CLionProjects/Sparky/src/Maths/vector4.cpp -o CMakeFiles/Sparky_maths.dir/vector4.cpp.s

# Object files for target Sparky_maths
Sparky_maths_OBJECTS = \
"CMakeFiles/Sparky_maths.dir/vector2.cpp.o" \
"CMakeFiles/Sparky_maths.dir/vector3.cpp.o" \
"CMakeFiles/Sparky_maths.dir/vector4.cpp.o"

# External object files for target Sparky_maths
Sparky_maths_EXTERNAL_OBJECTS =

src/Maths/libSparky_maths.a: src/Maths/CMakeFiles/Sparky_maths.dir/vector2.cpp.o
src/Maths/libSparky_maths.a: src/Maths/CMakeFiles/Sparky_maths.dir/vector3.cpp.o
src/Maths/libSparky_maths.a: src/Maths/CMakeFiles/Sparky_maths.dir/vector4.cpp.o
src/Maths/libSparky_maths.a: src/Maths/CMakeFiles/Sparky_maths.dir/build.make
src/Maths/libSparky_maths.a: src/Maths/CMakeFiles/Sparky_maths.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/rontero/Documents/CLionProjects/Sparky/cmake-build-debug/Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX static library libSparky_maths.a"
	cd /home/rontero/Documents/CLionProjects/Sparky/cmake-build-debug/Debug/src/Maths && $(CMAKE_COMMAND) -P CMakeFiles/Sparky_maths.dir/cmake_clean_target.cmake
	cd /home/rontero/Documents/CLionProjects/Sparky/cmake-build-debug/Debug/src/Maths && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Sparky_maths.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/Maths/CMakeFiles/Sparky_maths.dir/build: src/Maths/libSparky_maths.a

.PHONY : src/Maths/CMakeFiles/Sparky_maths.dir/build

src/Maths/CMakeFiles/Sparky_maths.dir/clean:
	cd /home/rontero/Documents/CLionProjects/Sparky/cmake-build-debug/Debug/src/Maths && $(CMAKE_COMMAND) -P CMakeFiles/Sparky_maths.dir/cmake_clean.cmake
.PHONY : src/Maths/CMakeFiles/Sparky_maths.dir/clean

src/Maths/CMakeFiles/Sparky_maths.dir/depend:
	cd /home/rontero/Documents/CLionProjects/Sparky/cmake-build-debug/Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rontero/Documents/CLionProjects/Sparky /home/rontero/Documents/CLionProjects/Sparky/src/Maths /home/rontero/Documents/CLionProjects/Sparky/cmake-build-debug/Debug /home/rontero/Documents/CLionProjects/Sparky/cmake-build-debug/Debug/src/Maths /home/rontero/Documents/CLionProjects/Sparky/cmake-build-debug/Debug/src/Maths/CMakeFiles/Sparky_maths.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/Maths/CMakeFiles/Sparky_maths.dir/depend

