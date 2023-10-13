# Install script for directory: /workspaces/img2mcrl2/mCRL2_voxlogica/libraries/smt

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Libraries" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmcrl2_smt.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmcrl2_smt.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmcrl2_smt.so"
         RPATH "$ORIGIN/../lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/build/stage/lib/libmcrl2_smt.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmcrl2_smt.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmcrl2_smt.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmcrl2_smt.so"
         OLD_RPATH "/workspaces/img2mcrl2/mCRL2_voxlogica/build/stage/lib:"
         NEW_RPATH "$ORIGIN/../lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmcrl2_smt.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Libraries" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/smt" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/smt/include/mcrl2/smt/answer.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/smt" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/smt/include/mcrl2/smt/child_process.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/smt" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/smt/include/mcrl2/smt/native_translation.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/smt" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/smt/include/mcrl2/smt/solver.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/smt" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/smt/include/mcrl2/smt/translate_expression.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/smt" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/smt/include/mcrl2/smt/translate_sort.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/smt" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/smt/include/mcrl2/smt/translate_specification.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/smt" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/smt/include/mcrl2/smt/translation_error.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/smt" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/smt/include/mcrl2/smt/unfold_pattern_matching.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/smt" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/smt/include/mcrl2/smt/utilities.h")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/workspaces/img2mcrl2/mCRL2_voxlogica/build/libraries/smt/example/cmake_install.cmake")
endif()

