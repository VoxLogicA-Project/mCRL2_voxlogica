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
include tools/release/tracepp/CMakeFiles/tracepp.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include tools/release/tracepp/CMakeFiles/tracepp.dir/compiler_depend.make

# Include the progress variables for this target.
include tools/release/tracepp/CMakeFiles/tracepp.dir/progress.make

# Include the compile flags for this target's objects.
include tools/release/tracepp/CMakeFiles/tracepp.dir/flags.make

tools/release/tracepp/CMakeFiles/tracepp.dir/tracepp.cpp.o: tools/release/tracepp/CMakeFiles/tracepp.dir/flags.make
tools/release/tracepp/CMakeFiles/tracepp.dir/tracepp.cpp.o: /workspaces/img2mcrl2/mCRL2_voxlogica/tools/release/tracepp/tracepp.cpp
tools/release/tracepp/CMakeFiles/tracepp.dir/tracepp.cpp.o: tools/release/tracepp/CMakeFiles/tracepp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/workspaces/img2mcrl2/mCRL2_voxlogica/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tools/release/tracepp/CMakeFiles/tracepp.dir/tracepp.cpp.o"
	cd /workspaces/img2mcrl2/mCRL2_voxlogica/build/tools/release/tracepp && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT tools/release/tracepp/CMakeFiles/tracepp.dir/tracepp.cpp.o -MF CMakeFiles/tracepp.dir/tracepp.cpp.o.d -o CMakeFiles/tracepp.dir/tracepp.cpp.o -c /workspaces/img2mcrl2/mCRL2_voxlogica/tools/release/tracepp/tracepp.cpp

tools/release/tracepp/CMakeFiles/tracepp.dir/tracepp.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tracepp.dir/tracepp.cpp.i"
	cd /workspaces/img2mcrl2/mCRL2_voxlogica/build/tools/release/tracepp && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /workspaces/img2mcrl2/mCRL2_voxlogica/tools/release/tracepp/tracepp.cpp > CMakeFiles/tracepp.dir/tracepp.cpp.i

tools/release/tracepp/CMakeFiles/tracepp.dir/tracepp.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tracepp.dir/tracepp.cpp.s"
	cd /workspaces/img2mcrl2/mCRL2_voxlogica/build/tools/release/tracepp && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /workspaces/img2mcrl2/mCRL2_voxlogica/tools/release/tracepp/tracepp.cpp -o CMakeFiles/tracepp.dir/tracepp.cpp.s

# Object files for target tracepp
tracepp_OBJECTS = \
"CMakeFiles/tracepp.dir/tracepp.cpp.o"

# External object files for target tracepp
tracepp_EXTERNAL_OBJECTS =

stage/bin/tracepp: tools/release/tracepp/CMakeFiles/tracepp.dir/tracepp.cpp.o
stage/bin/tracepp: tools/release/tracepp/CMakeFiles/tracepp.dir/build.make
stage/bin/tracepp: stage/lib/libmcrl2_lts.so
stage/bin/tracepp: stage/lib/libmcrl2_modal_formula.so
stage/bin/tracepp: stage/lib/libmcrl2_lps.so
stage/bin/tracepp: stage/lib/libmcrl2_smt.so
stage/bin/tracepp: stage/lib/libmcrl2_symbolic.so
stage/bin/tracepp: stage/lib/libsylvan.a
stage/bin/tracepp: stage/lib/libmcrl2_process.so
stage/bin/tracepp: stage/lib/libmcrl2_data.so
stage/bin/tracepp: stage/lib/libmcrl2_core.so
stage/bin/tracepp: stage/lib/libmcrl2_atermpp.so
stage/bin/tracepp: stage/lib/libdparser.a
stage/bin/tracepp: stage/lib/libmcrl2_utilities.so
stage/bin/tracepp: tools/release/tracepp/CMakeFiles/tracepp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/workspaces/img2mcrl2/mCRL2_voxlogica/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../../stage/bin/tracepp"
	cd /workspaces/img2mcrl2/mCRL2_voxlogica/build/tools/release/tracepp && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tracepp.dir/link.txt --verbose=$(VERBOSE)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating man page for tracepp"
	cd /workspaces/img2mcrl2/mCRL2_voxlogica/build/tools/release/tracepp && ../../../stage/bin/tracepp --generate-man-page | gzip --best > tracepp.1.gz

# Rule to build all files generated by this target.
tools/release/tracepp/CMakeFiles/tracepp.dir/build: stage/bin/tracepp
.PHONY : tools/release/tracepp/CMakeFiles/tracepp.dir/build

tools/release/tracepp/CMakeFiles/tracepp.dir/clean:
	cd /workspaces/img2mcrl2/mCRL2_voxlogica/build/tools/release/tracepp && $(CMAKE_COMMAND) -P CMakeFiles/tracepp.dir/cmake_clean.cmake
.PHONY : tools/release/tracepp/CMakeFiles/tracepp.dir/clean

tools/release/tracepp/CMakeFiles/tracepp.dir/depend:
	cd /workspaces/img2mcrl2/mCRL2_voxlogica/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /workspaces/img2mcrl2/mCRL2_voxlogica /workspaces/img2mcrl2/mCRL2_voxlogica/tools/release/tracepp /workspaces/img2mcrl2/mCRL2_voxlogica/build /workspaces/img2mcrl2/mCRL2_voxlogica/build/tools/release/tracepp /workspaces/img2mcrl2/mCRL2_voxlogica/build/tools/release/tracepp/CMakeFiles/tracepp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tools/release/tracepp/CMakeFiles/tracepp.dir/depend

