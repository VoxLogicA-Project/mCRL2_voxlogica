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
include tools/release/lts2pbes/CMakeFiles/lts2pbes.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include tools/release/lts2pbes/CMakeFiles/lts2pbes.dir/compiler_depend.make

# Include the progress variables for this target.
include tools/release/lts2pbes/CMakeFiles/lts2pbes.dir/progress.make

# Include the compile flags for this target's objects.
include tools/release/lts2pbes/CMakeFiles/lts2pbes.dir/flags.make

tools/release/lts2pbes/CMakeFiles/lts2pbes.dir/lts2pbes.cpp.o: tools/release/lts2pbes/CMakeFiles/lts2pbes.dir/flags.make
tools/release/lts2pbes/CMakeFiles/lts2pbes.dir/lts2pbes.cpp.o: /workspaces/img2mcrl2/mCRL2_voxlogica/tools/release/lts2pbes/lts2pbes.cpp
tools/release/lts2pbes/CMakeFiles/lts2pbes.dir/lts2pbes.cpp.o: tools/release/lts2pbes/CMakeFiles/lts2pbes.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/workspaces/img2mcrl2/mCRL2_voxlogica/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tools/release/lts2pbes/CMakeFiles/lts2pbes.dir/lts2pbes.cpp.o"
	cd /workspaces/img2mcrl2/mCRL2_voxlogica/build/tools/release/lts2pbes && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT tools/release/lts2pbes/CMakeFiles/lts2pbes.dir/lts2pbes.cpp.o -MF CMakeFiles/lts2pbes.dir/lts2pbes.cpp.o.d -o CMakeFiles/lts2pbes.dir/lts2pbes.cpp.o -c /workspaces/img2mcrl2/mCRL2_voxlogica/tools/release/lts2pbes/lts2pbes.cpp

tools/release/lts2pbes/CMakeFiles/lts2pbes.dir/lts2pbes.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lts2pbes.dir/lts2pbes.cpp.i"
	cd /workspaces/img2mcrl2/mCRL2_voxlogica/build/tools/release/lts2pbes && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /workspaces/img2mcrl2/mCRL2_voxlogica/tools/release/lts2pbes/lts2pbes.cpp > CMakeFiles/lts2pbes.dir/lts2pbes.cpp.i

tools/release/lts2pbes/CMakeFiles/lts2pbes.dir/lts2pbes.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lts2pbes.dir/lts2pbes.cpp.s"
	cd /workspaces/img2mcrl2/mCRL2_voxlogica/build/tools/release/lts2pbes && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /workspaces/img2mcrl2/mCRL2_voxlogica/tools/release/lts2pbes/lts2pbes.cpp -o CMakeFiles/lts2pbes.dir/lts2pbes.cpp.s

# Object files for target lts2pbes
lts2pbes_OBJECTS = \
"CMakeFiles/lts2pbes.dir/lts2pbes.cpp.o"

# External object files for target lts2pbes
lts2pbes_EXTERNAL_OBJECTS =

stage/bin/lts2pbes: tools/release/lts2pbes/CMakeFiles/lts2pbes.dir/lts2pbes.cpp.o
stage/bin/lts2pbes: tools/release/lts2pbes/CMakeFiles/lts2pbes.dir/build.make
stage/bin/lts2pbes: stage/lib/libmcrl2_bes.so
stage/bin/lts2pbes: stage/lib/libmcrl2_pbes.so
stage/bin/lts2pbes: stage/lib/libmcrl2_lts.so
stage/bin/lts2pbes: stage/lib/libmcrl2_modal_formula.so
stage/bin/lts2pbes: stage/lib/libmcrl2_lps.so
stage/bin/lts2pbes: stage/lib/libmcrl2_smt.so
stage/bin/lts2pbes: stage/lib/libmcrl2_process.so
stage/bin/lts2pbes: stage/lib/libmcrl2_symbolic.so
stage/bin/lts2pbes: stage/lib/libmcrl2_data.so
stage/bin/lts2pbes: stage/lib/libmcrl2_core.so
stage/bin/lts2pbes: stage/lib/libmcrl2_atermpp.so
stage/bin/lts2pbes: stage/lib/libmcrl2_utilities.so
stage/bin/lts2pbes: stage/lib/libsylvan.a
stage/bin/lts2pbes: stage/lib/libdparser.a
stage/bin/lts2pbes: tools/release/lts2pbes/CMakeFiles/lts2pbes.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/workspaces/img2mcrl2/mCRL2_voxlogica/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../../stage/bin/lts2pbes"
	cd /workspaces/img2mcrl2/mCRL2_voxlogica/build/tools/release/lts2pbes && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lts2pbes.dir/link.txt --verbose=$(VERBOSE)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating man page for lts2pbes"
	cd /workspaces/img2mcrl2/mCRL2_voxlogica/build/tools/release/lts2pbes && ../../../stage/bin/lts2pbes --generate-man-page | gzip --best > lts2pbes.1.gz

# Rule to build all files generated by this target.
tools/release/lts2pbes/CMakeFiles/lts2pbes.dir/build: stage/bin/lts2pbes
.PHONY : tools/release/lts2pbes/CMakeFiles/lts2pbes.dir/build

tools/release/lts2pbes/CMakeFiles/lts2pbes.dir/clean:
	cd /workspaces/img2mcrl2/mCRL2_voxlogica/build/tools/release/lts2pbes && $(CMAKE_COMMAND) -P CMakeFiles/lts2pbes.dir/cmake_clean.cmake
.PHONY : tools/release/lts2pbes/CMakeFiles/lts2pbes.dir/clean

tools/release/lts2pbes/CMakeFiles/lts2pbes.dir/depend:
	cd /workspaces/img2mcrl2/mCRL2_voxlogica/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /workspaces/img2mcrl2/mCRL2_voxlogica /workspaces/img2mcrl2/mCRL2_voxlogica/tools/release/lts2pbes /workspaces/img2mcrl2/mCRL2_voxlogica/build /workspaces/img2mcrl2/mCRL2_voxlogica/build/tools/release/lts2pbes /workspaces/img2mcrl2/mCRL2_voxlogica/build/tools/release/lts2pbes/CMakeFiles/lts2pbes.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tools/release/lts2pbes/CMakeFiles/lts2pbes.dir/depend

