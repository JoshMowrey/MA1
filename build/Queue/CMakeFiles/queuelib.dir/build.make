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
include Queue/CMakeFiles/queuelib.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include Queue/CMakeFiles/queuelib.dir/compiler_depend.make

# Include the progress variables for this target.
include Queue/CMakeFiles/queuelib.dir/progress.make

# Include the compile flags for this target's objects.
include Queue/CMakeFiles/queuelib.dir/flags.make

Queue/CMakeFiles/queuelib.dir/clean:
	cd /home/josh/MA1/build/Queue && $(CMAKE_COMMAND) -P CMakeFiles/queuelib.dir/cmake_clean.cmake
.PHONY : Queue/CMakeFiles/queuelib.dir/clean

Queue/CMakeFiles/queuelib.dir/depend:
	cd /home/josh/MA1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/josh/MA1 /home/josh/MA1/Tests /home/josh/MA1/build /home/josh/MA1/build/Queue /home/josh/MA1/build/Queue/CMakeFiles/queuelib.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Queue/CMakeFiles/queuelib.dir/depend
