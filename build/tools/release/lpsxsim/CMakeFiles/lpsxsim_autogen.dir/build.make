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

# Utility rule file for lpsxsim_autogen.

# Include any custom commands dependencies for this target.
include tools/release/lpsxsim/CMakeFiles/lpsxsim_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include tools/release/lpsxsim/CMakeFiles/lpsxsim_autogen.dir/progress.make

tools/release/lpsxsim/CMakeFiles/lpsxsim_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/workspaces/img2mcrl2/mCRL2_voxlogica/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target lpsxsim"
	cd /workspaces/img2mcrl2/mCRL2_voxlogica/build/tools/release/lpsxsim && /usr/bin/cmake -E cmake_autogen /workspaces/img2mcrl2/mCRL2_voxlogica/build/tools/release/lpsxsim/CMakeFiles/lpsxsim_autogen.dir/AutogenInfo.json Debug

lpsxsim_autogen: tools/release/lpsxsim/CMakeFiles/lpsxsim_autogen
lpsxsim_autogen: tools/release/lpsxsim/CMakeFiles/lpsxsim_autogen.dir/build.make
.PHONY : lpsxsim_autogen

# Rule to build all files generated by this target.
tools/release/lpsxsim/CMakeFiles/lpsxsim_autogen.dir/build: lpsxsim_autogen
.PHONY : tools/release/lpsxsim/CMakeFiles/lpsxsim_autogen.dir/build

tools/release/lpsxsim/CMakeFiles/lpsxsim_autogen.dir/clean:
	cd /workspaces/img2mcrl2/mCRL2_voxlogica/build/tools/release/lpsxsim && $(CMAKE_COMMAND) -P CMakeFiles/lpsxsim_autogen.dir/cmake_clean.cmake
.PHONY : tools/release/lpsxsim/CMakeFiles/lpsxsim_autogen.dir/clean

tools/release/lpsxsim/CMakeFiles/lpsxsim_autogen.dir/depend:
	cd /workspaces/img2mcrl2/mCRL2_voxlogica/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /workspaces/img2mcrl2/mCRL2_voxlogica /workspaces/img2mcrl2/mCRL2_voxlogica/tools/release/lpsxsim /workspaces/img2mcrl2/mCRL2_voxlogica/build /workspaces/img2mcrl2/mCRL2_voxlogica/build/tools/release/lpsxsim /workspaces/img2mcrl2/mCRL2_voxlogica/build/tools/release/lpsxsim/CMakeFiles/lpsxsim_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tools/release/lpsxsim/CMakeFiles/lpsxsim_autogen.dir/depend

