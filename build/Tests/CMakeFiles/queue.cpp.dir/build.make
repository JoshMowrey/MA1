# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/josh/MA1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/josh/MA1/build

# Include any dependencies generated for this target.
include Tests/CMakeFiles/queue.cpp.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include Tests/CMakeFiles/queue.cpp.dir/compiler_depend.make

# Include the progress variables for this target.
include Tests/CMakeFiles/queue.cpp.dir/progress.make

# Include the compile flags for this target's objects.
include Tests/CMakeFiles/queue.cpp.dir/flags.make

Tests/CMakeFiles/queue.cpp.dir/clean:
	cd /home/josh/MA1/build/Tests && $(CMAKE_COMMAND) -P CMakeFiles/queue.cpp.dir/cmake_clean.cmake
.PHONY : Tests/CMakeFiles/queue.cpp.dir/clean

Tests/CMakeFiles/queue.cpp.dir/depend:
	cd /home/josh/MA1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/josh/MA1 /home/josh/MA1/Queue /home/josh/MA1/build /home/josh/MA1/build/Tests /home/josh/MA1/build/Tests/CMakeFiles/queue.cpp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Tests/CMakeFiles/queue.cpp.dir/depend

