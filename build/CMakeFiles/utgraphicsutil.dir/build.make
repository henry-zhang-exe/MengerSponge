# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /u/zhenr/Cs354/MengerSponge

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /u/zhenr/Cs354/MengerSponge/build

# Include any dependencies generated for this target.
include CMakeFiles/utgraphicsutil.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/utgraphicsutil.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/utgraphicsutil.dir/flags.make

CMakeFiles/utgraphicsutil.dir/lib/debuggl.cc.o: CMakeFiles/utgraphicsutil.dir/flags.make
CMakeFiles/utgraphicsutil.dir/lib/debuggl.cc.o: ../lib/debuggl.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/u/zhenr/Cs354/MengerSponge/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/utgraphicsutil.dir/lib/debuggl.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/utgraphicsutil.dir/lib/debuggl.cc.o -c /u/zhenr/Cs354/MengerSponge/lib/debuggl.cc

CMakeFiles/utgraphicsutil.dir/lib/debuggl.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/utgraphicsutil.dir/lib/debuggl.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /u/zhenr/Cs354/MengerSponge/lib/debuggl.cc > CMakeFiles/utgraphicsutil.dir/lib/debuggl.cc.i

CMakeFiles/utgraphicsutil.dir/lib/debuggl.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/utgraphicsutil.dir/lib/debuggl.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /u/zhenr/Cs354/MengerSponge/lib/debuggl.cc -o CMakeFiles/utgraphicsutil.dir/lib/debuggl.cc.s

CMakeFiles/utgraphicsutil.dir/lib/debuggl.cc.o.requires:

.PHONY : CMakeFiles/utgraphicsutil.dir/lib/debuggl.cc.o.requires

CMakeFiles/utgraphicsutil.dir/lib/debuggl.cc.o.provides: CMakeFiles/utgraphicsutil.dir/lib/debuggl.cc.o.requires
	$(MAKE) -f CMakeFiles/utgraphicsutil.dir/build.make CMakeFiles/utgraphicsutil.dir/lib/debuggl.cc.o.provides.build
.PHONY : CMakeFiles/utgraphicsutil.dir/lib/debuggl.cc.o.provides

CMakeFiles/utgraphicsutil.dir/lib/debuggl.cc.o.provides.build: CMakeFiles/utgraphicsutil.dir/lib/debuggl.cc.o


# Object files for target utgraphicsutil
utgraphicsutil_OBJECTS = \
"CMakeFiles/utgraphicsutil.dir/lib/debuggl.cc.o"

# External object files for target utgraphicsutil
utgraphicsutil_EXTERNAL_OBJECTS =

libutgraphicsutil.so: CMakeFiles/utgraphicsutil.dir/lib/debuggl.cc.o
libutgraphicsutil.so: CMakeFiles/utgraphicsutil.dir/build.make
libutgraphicsutil.so: /usr/lib/x86_64-linux-gnu/libGLEW.so
libutgraphicsutil.so: CMakeFiles/utgraphicsutil.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/u/zhenr/Cs354/MengerSponge/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library libutgraphicsutil.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/utgraphicsutil.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/utgraphicsutil.dir/build: libutgraphicsutil.so

.PHONY : CMakeFiles/utgraphicsutil.dir/build

CMakeFiles/utgraphicsutil.dir/requires: CMakeFiles/utgraphicsutil.dir/lib/debuggl.cc.o.requires

.PHONY : CMakeFiles/utgraphicsutil.dir/requires

CMakeFiles/utgraphicsutil.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/utgraphicsutil.dir/cmake_clean.cmake
.PHONY : CMakeFiles/utgraphicsutil.dir/clean

CMakeFiles/utgraphicsutil.dir/depend:
	cd /u/zhenr/Cs354/MengerSponge/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /u/zhenr/Cs354/MengerSponge /u/zhenr/Cs354/MengerSponge /u/zhenr/Cs354/MengerSponge/build /u/zhenr/Cs354/MengerSponge/build /u/zhenr/Cs354/MengerSponge/build/CMakeFiles/utgraphicsutil.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/utgraphicsutil.dir/depend

