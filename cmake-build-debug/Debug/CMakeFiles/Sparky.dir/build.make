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
include CMakeFiles/Sparky.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Sparky.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Sparky.dir/flags.make

CMakeFiles/Sparky.dir/main.cpp.o: CMakeFiles/Sparky.dir/flags.make
CMakeFiles/Sparky.dir/main.cpp.o: ../../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rontero/Documents/CLionProjects/Sparky/cmake-build-debug/Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Sparky.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Sparky.dir/main.cpp.o -c /home/rontero/Documents/CLionProjects/Sparky/main.cpp

CMakeFiles/Sparky.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Sparky.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rontero/Documents/CLionProjects/Sparky/main.cpp > CMakeFiles/Sparky.dir/main.cpp.i

CMakeFiles/Sparky.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Sparky.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rontero/Documents/CLionProjects/Sparky/main.cpp -o CMakeFiles/Sparky.dir/main.cpp.s

# Object files for target Sparky
Sparky_OBJECTS = \
"CMakeFiles/Sparky.dir/main.cpp.o"

# External object files for target Sparky
Sparky_EXTERNAL_OBJECTS =

Sparky: CMakeFiles/Sparky.dir/main.cpp.o
Sparky: CMakeFiles/Sparky.dir/build.make
Sparky: src/Graphics/libSparky_graphics.a
Sparky: src/Maths/libSparky_maths.a
Sparky: CMakeFiles/Sparky.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/rontero/Documents/CLionProjects/Sparky/cmake-build-debug/Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Sparky"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Sparky.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Sparky.dir/build: Sparky

.PHONY : CMakeFiles/Sparky.dir/build

CMakeFiles/Sparky.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Sparky.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Sparky.dir/clean

CMakeFiles/Sparky.dir/depend:
	cd /home/rontero/Documents/CLionProjects/Sparky/cmake-build-debug/Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rontero/Documents/CLionProjects/Sparky /home/rontero/Documents/CLionProjects/Sparky /home/rontero/Documents/CLionProjects/Sparky/cmake-build-debug/Debug /home/rontero/Documents/CLionProjects/Sparky/cmake-build-debug/Debug /home/rontero/Documents/CLionProjects/Sparky/cmake-build-debug/Debug/CMakeFiles/Sparky.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Sparky.dir/depend

