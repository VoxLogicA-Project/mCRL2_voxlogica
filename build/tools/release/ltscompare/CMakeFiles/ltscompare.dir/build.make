# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

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
CMAKE_SOURCE_DIR = /workspaces/img2mcrl2/mCRL2_voxlogica

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /workspaces/img2mcrl2/mCRL2_voxlogica/build

# Include any dependencies generated for this target.
include tools/release/ltscompare/CMakeFiles/ltscompare.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include tools/release/ltscompare/CMakeFiles/ltscompare.dir/compiler_depend.make

# Include the progress variables for this target.
include tools/release/ltscompare/CMakeFiles/ltscompare.dir/progress.make

# Include the compile flags for this target's objects.
include tools/release/ltscompare/CMakeFiles/ltscompare.dir/flags.make

tools/release/ltscompare/CMakeFiles/ltscompare.dir/ltscompare.cpp.o: tools/release/ltscompare/CMakeFiles/ltscompare.dir/flags.make
tools/release/ltscompare/CMakeFiles/ltscompare.dir/ltscompare.cpp.o: /workspaces/img2mcrl2/mCRL2_voxlogica/tools/release/ltscompare/ltscompare.cpp
tools/release/ltscompare/CMakeFiles/ltscompare.dir/ltscompare.cpp.o: tools/release/ltscompare/CMakeFiles/ltscompare.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/workspaces/img2mcrl2/mCRL2_voxlogica/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tools/release/ltscompare/CMakeFiles/ltscompare.dir/ltscompare.cpp.o"
	cd /workspaces/img2mcrl2/mCRL2_voxlogica/build/tools/release/ltscompare && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT tools/release/ltscompare/CMakeFiles/ltscompare.dir/ltscompare.cpp.o -MF CMakeFiles/ltscompare.dir/ltscompare.cpp.o.d -o CMakeFiles/ltscompare.dir/ltscompare.cpp.o -c /workspaces/img2mcrl2/mCRL2_voxlogica/tools/release/ltscompare/ltscompare.cpp

tools/release/ltscompare/CMakeFiles/ltscompare.dir/ltscompare.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ltscompare.dir/ltscompare.cpp.i"
	cd /workspaces/img2mcrl2/mCRL2_voxlogica/build/tools/release/ltscompare && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /workspaces/img2mcrl2/mCRL2_voxlogica/tools/release/ltscompare/ltscompare.cpp > CMakeFiles/ltscompare.dir/ltscompare.cpp.i

tools/release/ltscompare/CMakeFiles/ltscompare.dir/ltscompare.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ltscompare.dir/ltscompare.cpp.s"
	cd /workspaces/img2mcrl2/mCRL2_voxlogica/build/tools/release/ltscompare && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /workspaces/img2mcrl2/mCRL2_voxlogica/tools/release/ltscompare/ltscompare.cpp -o CMakeFiles/ltscompare.dir/ltscompare.cpp.s

# Object files for target ltscompare
ltscompare_OBJECTS = \
"CMakeFiles/ltscompare.dir/ltscompare.cpp.o"

# External object files for target ltscompare
ltscompare_EXTERNAL_OBJECTS =

stage/bin/ltscompare: tools/release/ltscompare/CMakeFiles/ltscompare.dir/ltscompare.cpp.o
stage/bin/ltscompare: tools/release/ltscompare/CMakeFiles/ltscompare.dir/build.make
stage/bin/ltscompare: stage/lib/libmcrl2_lts.so
stage/bin/ltscompare: stage/lib/libmcrl2_modal_formula.so
stage/bin/ltscompare: stage/lib/libmcrl2_lps.so
stage/bin/ltscompare: stage/lib/libmcrl2_smt.so
stage/bin/ltscompare: stage/lib/libmcrl2_symbolic.so
stage/bin/ltscompare: stage/lib/libsylvan.a
stage/bin/ltscompare: stage/lib/libmcrl2_process.so
stage/bin/ltscompare: stage/lib/libmcrl2_data.so
stage/bin/ltscompare: stage/lib/libmcrl2_core.so
stage/bin/ltscompare: stage/lib/libmcrl2_atermpp.so
stage/bin/ltscompare: stage/lib/libmcrl2_utilities.so
stage/bin/ltscompare: stage/lib/libdparser.a
stage/bin/ltscompare: tools/release/ltscompare/CMakeFiles/ltscompare.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/workspaces/img2mcrl2/mCRL2_voxlogica/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../../stage/bin/ltscompare"
	cd /workspaces/img2mcrl2/mCRL2_voxlogica/build/tools/release/ltscompare && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ltscompare.dir/link.txt --verbose=$(VERBOSE)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating man page for ltscompare"
	cd /workspaces/img2mcrl2/mCRL2_voxlogica/build/tools/release/ltscompare && ../../../stage/bin/ltscompare --generate-man-page | gzip --best > ltscompare.1.gz

# Rule to build all files generated by this target.
tools/release/ltscompare/CMakeFiles/ltscompare.dir/build: stage/bin/ltscompare
.PHONY : tools/release/ltscompare/CMakeFiles/ltscompare.dir/build

tools/release/ltscompare/CMakeFiles/ltscompare.dir/clean:
	cd /workspaces/img2mcrl2/mCRL2_voxlogica/build/tools/release/ltscompare && $(CMAKE_COMMAND) -P CMakeFiles/ltscompare.dir/cmake_clean.cmake
.PHONY : tools/release/ltscompare/CMakeFiles/ltscompare.dir/clean

tools/release/ltscompare/CMakeFiles/ltscompare.dir/depend:
	cd /workspaces/img2mcrl2/mCRL2_voxlogica/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /workspaces/img2mcrl2/mCRL2_voxlogica /workspaces/img2mcrl2/mCRL2_voxlogica/tools/release/ltscompare /workspaces/img2mcrl2/mCRL2_voxlogica/build /workspaces/img2mcrl2/mCRL2_voxlogica/build/tools/release/ltscompare /workspaces/img2mcrl2/mCRL2_voxlogica/build/tools/release/ltscompare/CMakeFiles/ltscompare.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tools/release/ltscompare/CMakeFiles/ltscompare.dir/depend

