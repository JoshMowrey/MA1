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
include Queue/CMakeFiles/Tests.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include Queue/CMakeFiles/Tests.dir/compiler_depend.make

# Include the progress variables for this target.
include Queue/CMakeFiles/Tests.dir/progress.make

# Include the compile flags for this target's objects.
include Queue/CMakeFiles/Tests.dir/flags.make

Queue/CMakeFiles/Tests.dir/testQueue.cpp.o: Queue/CMakeFiles/Tests.dir/flags.make
Queue/CMakeFiles/Tests.dir/testQueue.cpp.o: ../Tests/testQueue.cpp
Queue/CMakeFiles/Tests.dir/testQueue.cpp.o: Queue/CMakeFiles/Tests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/josh/MA1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Queue/CMakeFiles/Tests.dir/testQueue.cpp.o"
	cd /home/josh/MA1/build/Queue && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Queue/CMakeFiles/Tests.dir/testQueue.cpp.o -MF CMakeFiles/Tests.dir/testQueue.cpp.o.d -o CMakeFiles/Tests.dir/testQueue.cpp.o -c /home/josh/MA1/Tests/testQueue.cpp

Queue/CMakeFiles/Tests.dir/testQueue.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Tests.dir/testQueue.cpp.i"
	cd /home/josh/MA1/build/Queue && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/josh/MA1/Tests/testQueue.cpp > CMakeFiles/Tests.dir/testQueue.cpp.i

Queue/CMakeFiles/Tests.dir/testQueue.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Tests.dir/testQueue.cpp.s"
	cd /home/josh/MA1/build/Queue && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/josh/MA1/Tests/testQueue.cpp -o CMakeFiles/Tests.dir/testQueue.cpp.s

# Object files for target Tests
Tests_OBJECTS = \
"CMakeFiles/Tests.dir/testQueue.cpp.o"

# External object files for target Tests
Tests_EXTERNAL_OBJECTS =

Queue/Tests: Queue/CMakeFiles/Tests.dir/testQueue.cpp.o
Queue/Tests: Queue/CMakeFiles/Tests.dir/build.make
Queue/Tests: Queue/CMakeFiles/Tests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/josh/MA1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Tests"
	cd /home/josh/MA1/build/Queue && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Tests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Queue/CMakeFiles/Tests.dir/build: Queue/Tests
.PHONY : Queue/CMakeFiles/Tests.dir/build

Queue/CMakeFiles/Tests.dir/clean:
	cd /home/josh/MA1/build/Queue && $(CMAKE_COMMAND) -P CMakeFiles/Tests.dir/cmake_clean.cmake
.PHONY : Queue/CMakeFiles/Tests.dir/clean

Queue/CMakeFiles/Tests.dir/depend:
	cd /home/josh/MA1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/josh/MA1 /home/josh/MA1/Tests /home/josh/MA1/build /home/josh/MA1/build/Queue /home/josh/MA1/build/Queue/CMakeFiles/Tests.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Queue/CMakeFiles/Tests.dir/depend

