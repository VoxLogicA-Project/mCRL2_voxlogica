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
include tools/release/pbessolvesymbolic/CMakeFiles/pbessolvesymbolic.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include tools/release/pbessolvesymbolic/CMakeFiles/pbessolvesymbolic.dir/compiler_depend.make

# Include the progress variables for this target.
include tools/release/pbessolvesymbolic/CMakeFiles/pbessolvesymbolic.dir/progress.make

# Include the compile flags for this target's objects.
include tools/release/pbessolvesymbolic/CMakeFiles/pbessolvesymbolic.dir/flags.make

tools/release/pbessolvesymbolic/CMakeFiles/pbessolvesymbolic.dir/pbessolvesymbolic.cpp.o: tools/release/pbessolvesymbolic/CMakeFiles/pbessolvesymbolic.dir/flags.make
tools/release/pbessolvesymbolic/CMakeFiles/pbessolvesymbolic.dir/pbessolvesymbolic.cpp.o: /workspaces/img2mcrl2/mCRL2_voxlogica/tools/release/pbessolvesymbolic/pbessolvesymbolic.cpp
tools/release/pbessolvesymbolic/CMakeFiles/pbessolvesymbolic.dir/pbessolvesymbolic.cpp.o: tools/release/pbessolvesymbolic/CMakeFiles/pbessolvesymbolic.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/workspaces/img2mcrl2/mCRL2_voxlogica/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tools/release/pbessolvesymbolic/CMakeFiles/pbessolvesymbolic.dir/pbessolvesymbolic.cpp.o"
	cd /workspaces/img2mcrl2/mCRL2_voxlogica/build/tools/release/pbessolvesymbolic && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT tools/release/pbessolvesymbolic/CMakeFiles/pbessolvesymbolic.dir/pbessolvesymbolic.cpp.o -MF CMakeFiles/pbessolvesymbolic.dir/pbessolvesymbolic.cpp.o.d -o CMakeFiles/pbessolvesymbolic.dir/pbessolvesymbolic.cpp.o -c /workspaces/img2mcrl2/mCRL2_voxlogica/tools/release/pbessolvesymbolic/pbessolvesymbolic.cpp

tools/release/pbessolvesymbolic/CMakeFiles/pbessolvesymbolic.dir/pbessolvesymbolic.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pbessolvesymbolic.dir/pbessolvesymbolic.cpp.i"
	cd /workspaces/img2mcrl2/mCRL2_voxlogica/build/tools/release/pbessolvesymbolic && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /workspaces/img2mcrl2/mCRL2_voxlogica/tools/release/pbessolvesymbolic/pbessolvesymbolic.cpp > CMakeFiles/pbessolvesymbolic.dir/pbessolvesymbolic.cpp.i

tools/release/pbessolvesymbolic/CMakeFiles/pbessolvesymbolic.dir/pbessolvesymbolic.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pbessolvesymbolic.dir/pbessolvesymbolic.cpp.s"
	cd /workspaces/img2mcrl2/mCRL2_voxlogica/build/tools/release/pbessolvesymbolic && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /workspaces/img2mcrl2/mCRL2_voxlogica/tools/release/pbessolvesymbolic/pbessolvesymbolic.cpp -o CMakeFiles/pbessolvesymbolic.dir/pbessolvesymbolic.cpp.s

# Object files for target pbessolvesymbolic
pbessolvesymbolic_OBJECTS = \
"CMakeFiles/pbessolvesymbolic.dir/pbessolvesymbolic.cpp.o"

# External object files for target pbessolvesymbolic
pbessolvesymbolic_EXTERNAL_OBJECTS =

stage/bin/pbessolvesymbolic: tools/release/pbessolvesymbolic/CMakeFiles/pbessolvesymbolic.dir/pbessolvesymbolic.cpp.o
stage/bin/pbessolvesymbolic: tools/release/pbessolvesymbolic/CMakeFiles/pbessolvesymbolic.dir/build.make
stage/bin/pbessolvesymbolic: stage/lib/libmcrl2_pbes.so
stage/bin/pbessolvesymbolic: stage/lib/libmcrl2_lts.so
stage/bin/pbessolvesymbolic: stage/lib/libmcrl2_modal_formula.so
stage/bin/pbessolvesymbolic: stage/lib/libmcrl2_lps.so
stage/bin/pbessolvesymbolic: stage/lib/libmcrl2_smt.so
stage/bin/pbessolvesymbolic: stage/lib/libmcrl2_process.so
stage/bin/pbessolvesymbolic: stage/lib/libmcrl2_symbolic.so
stage/bin/pbessolvesymbolic: stage/lib/libmcrl2_data.so
stage/bin/pbessolvesymbolic: stage/lib/libmcrl2_core.so
stage/bin/pbessolvesymbolic: stage/lib/libmcrl2_atermpp.so
stage/bin/pbessolvesymbolic: stage/lib/libdparser.a
stage/bin/pbessolvesymbolic: stage/lib/libmcrl2_utilities.so
stage/bin/pbessolvesymbolic: stage/lib/libsylvan.a
stage/bin/pbessolvesymbolic: tools/release/pbessolvesymbolic/CMakeFiles/pbessolvesymbolic.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/workspaces/img2mcrl2/mCRL2_voxlogica/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../../stage/bin/pbessolvesymbolic"
	cd /workspaces/img2mcrl2/mCRL2_voxlogica/build/tools/release/pbessolvesymbolic && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/pbessolvesymbolic.dir/link.txt --verbose=$(VERBOSE)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating man page for pbessolvesymbolic"
	cd /workspaces/img2mcrl2/mCRL2_voxlogica/build/tools/release/pbessolvesymbolic && ../../../stage/bin/pbessolvesymbolic --generate-man-page | gzip --best > pbessolvesymbolic.1.gz

# Rule to build all files generated by this target.
tools/release/pbessolvesymbolic/CMakeFiles/pbessolvesymbolic.dir/build: stage/bin/pbessolvesymbolic
.PHONY : tools/release/pbessolvesymbolic/CMakeFiles/pbessolvesymbolic.dir/build

tools/release/pbessolvesymbolic/CMakeFiles/pbessolvesymbolic.dir/clean:
	cd /workspaces/img2mcrl2/mCRL2_voxlogica/build/tools/release/pbessolvesymbolic && $(CMAKE_COMMAND) -P CMakeFiles/pbessolvesymbolic.dir/cmake_clean.cmake
.PHONY : tools/release/pbessolvesymbolic/CMakeFiles/pbessolvesymbolic.dir/clean

tools/release/pbessolvesymbolic/CMakeFiles/pbessolvesymbolic.dir/depend:
	cd /workspaces/img2mcrl2/mCRL2_voxlogica/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /workspaces/img2mcrl2/mCRL2_voxlogica /workspaces/img2mcrl2/mCRL2_voxlogica/tools/release/pbessolvesymbolic /workspaces/img2mcrl2/mCRL2_voxlogica/build /workspaces/img2mcrl2/mCRL2_voxlogica/build/tools/release/pbessolvesymbolic /workspaces/img2mcrl2/mCRL2_voxlogica/build/tools/release/pbessolvesymbolic/CMakeFiles/pbessolvesymbolic.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tools/release/pbessolvesymbolic/CMakeFiles/pbessolvesymbolic.dir/depend

