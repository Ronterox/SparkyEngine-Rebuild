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


# Produce verbose output by default.
VERBOSE = 1

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
CMAKE_SOURCE_DIR = /home/rontero/Documents/CLionProjects/Sparky/cmake-build-debug/Release/CMakeFiles/CMakeTmp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/rontero/Documents/CLionProjects/Sparky/cmake-build-debug/Release/CMakeFiles/CMakeTmp

# Include any dependencies generated for this target.
include CMakeFiles/cmTC_c904e.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/cmTC_c904e.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cmTC_c904e.dir/flags.make

CMakeFiles/cmTC_c904e.dir/testCCompiler.c.o: CMakeFiles/cmTC_c904e.dir/flags.make
CMakeFiles/cmTC_c904e.dir/testCCompiler.c.o: testCCompiler.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --progress-dir=/home/rontero/Documents/CLionProjects/Sparky/cmake-build-debug/Release/CMakeFiles/CMakeTmp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/cmTC_c904e.dir/testCCompiler.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/cmTC_c904e.dir/testCCompiler.c.o   -c /home/rontero/Documents/CLionProjects/Sparky/cmake-build-debug/Release/CMakeFiles/CMakeTmp/testCCompiler.c

CMakeFiles/cmTC_c904e.dir/testCCompiler.c.i: cmake_force
	@echo "Preprocessing C source to CMakeFiles/cmTC_c904e.dir/testCCompiler.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rontero/Documents/CLionProjects/Sparky/cmake-build-debug/Release/CMakeFiles/CMakeTmp/testCCompiler.c > CMakeFiles/cmTC_c904e.dir/testCCompiler.c.i

CMakeFiles/cmTC_c904e.dir/testCCompiler.c.s: cmake_force
	@echo "Compiling C source to assembly CMakeFiles/cmTC_c904e.dir/testCCompiler.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rontero/Documents/CLionProjects/Sparky/cmake-build-debug/Release/CMakeFiles/CMakeTmp/testCCompiler.c -o CMakeFiles/cmTC_c904e.dir/testCCompiler.c.s

# Object files for target cmTC_c904e
cmTC_c904e_OBJECTS = \
"CMakeFiles/cmTC_c904e.dir/testCCompiler.c.o"

# External object files for target cmTC_c904e
cmTC_c904e_EXTERNAL_OBJECTS =

cmTC_c904e: CMakeFiles/cmTC_c904e.dir/testCCompiler.c.o
cmTC_c904e: CMakeFiles/cmTC_c904e.dir/build.make
cmTC_c904e: CMakeFiles/cmTC_c904e.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --progress-dir=/home/rontero/Documents/CLionProjects/Sparky/cmake-build-debug/Release/CMakeFiles/CMakeTmp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable cmTC_c904e"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cmTC_c904e.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cmTC_c904e.dir/build: cmTC_c904e

.PHONY : CMakeFiles/cmTC_c904e.dir/build

CMakeFiles/cmTC_c904e.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cmTC_c904e.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cmTC_c904e.dir/clean

CMakeFiles/cmTC_c904e.dir/depend:
	cd /home/rontero/Documents/CLionProjects/Sparky/cmake-build-debug/Release/CMakeFiles/CMakeTmp && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rontero/Documents/CLionProjects/Sparky/cmake-build-debug/Release/CMakeFiles/CMakeTmp /home/rontero/Documents/CLionProjects/Sparky/cmake-build-debug/Release/CMakeFiles/CMakeTmp /home/rontero/Documents/CLionProjects/Sparky/cmake-build-debug/Release/CMakeFiles/CMakeTmp /home/rontero/Documents/CLionProjects/Sparky/cmake-build-debug/Release/CMakeFiles/CMakeTmp /home/rontero/Documents/CLionProjects/Sparky/cmake-build-debug/Release/CMakeFiles/CMakeTmp/CMakeFiles/cmTC_c904e.dir/DependInfo.cmake
.PHONY : CMakeFiles/cmTC_c904e.dir/depend

