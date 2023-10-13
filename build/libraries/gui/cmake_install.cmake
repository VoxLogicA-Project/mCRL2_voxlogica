# Install script for directory: /workspaces/img2mcrl2/mCRL2_voxlogica/libraries/gui

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
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmcrl2_gui.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmcrl2_gui.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmcrl2_gui.so"
         RPATH "$ORIGIN/../lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/build/stage/lib/libmcrl2_gui.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmcrl2_gui.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmcrl2_gui.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmcrl2_gui.so"
         OLD_RPATH "/workspaces/img2mcrl2/mCRL2_voxlogica/build/stage/lib:"
         NEW_RPATH "$ORIGIN/../lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmcrl2_gui.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Libraries" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/gui" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/gui/include/mcrl2/gui/arcball.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/gui" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/gui/include/mcrl2/gui/codeeditor.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/gui" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/gui/include/mcrl2/gui/extendedtabwidget.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/gui" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/gui/include/mcrl2/gui/glu.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/gui" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/gui/include/mcrl2/gui/logwidget.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/gui" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/gui/include/mcrl2/gui/persistentfiledialog.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/gui" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/gui/include/mcrl2/gui/qt_tool.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/gui" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/gui/include/mcrl2/gui/setting.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/gui" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/gui/include/mcrl2/gui/utilities.h")
endif()

