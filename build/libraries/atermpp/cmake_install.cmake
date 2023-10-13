# Install script for directory: /workspaces/img2mcrl2/mCRL2_voxlogica/libraries/atermpp

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
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmcrl2_atermpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmcrl2_atermpp.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmcrl2_atermpp.so"
         RPATH "$ORIGIN/../lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/build/stage/lib/libmcrl2_atermpp.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmcrl2_atermpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmcrl2_atermpp.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmcrl2_atermpp.so"
         OLD_RPATH "/workspaces/img2mcrl2/mCRL2_voxlogica/build/stage/lib:"
         NEW_RPATH "$ORIGIN/../lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmcrl2_atermpp.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Libraries" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/atermpp" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/atermpp/include/mcrl2/atermpp/algorithm.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/atermpp" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/atermpp/include/mcrl2/atermpp/aterm.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/atermpp" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/atermpp/include/mcrl2/atermpp/aterm_appl.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/atermpp" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/atermpp/include/mcrl2/atermpp/aterm_balanced_tree.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/atermpp" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/atermpp/include/mcrl2/atermpp/aterm_int.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/atermpp" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/atermpp/include/mcrl2/atermpp/aterm_io.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/atermpp" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/atermpp/include/mcrl2/atermpp/aterm_io_binary.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/atermpp" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/atermpp/include/mcrl2/atermpp/aterm_io_text.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/atermpp" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/atermpp/include/mcrl2/atermpp/aterm_list.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/atermpp" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/atermpp/include/mcrl2/atermpp/aterm_string.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/atermpp" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/atermpp/include/mcrl2/atermpp/builder.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/atermpp/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/atermpp/include/mcrl2/atermpp/detail/algorithm_impl.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/atermpp/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/atermpp/include/mcrl2/atermpp/detail/aterm.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/atermpp/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/atermpp/include/mcrl2/atermpp/detail/aterm_appl.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/atermpp/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/atermpp/include/mcrl2/atermpp/detail/aterm_appl_iterator.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/atermpp/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/atermpp/include/mcrl2/atermpp/detail/aterm_configuration.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/atermpp/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/atermpp/include/mcrl2/atermpp/detail/aterm_container.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/atermpp/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/atermpp/include/mcrl2/atermpp/detail/aterm_hash.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/atermpp/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/atermpp/include/mcrl2/atermpp/detail/aterm_implementation.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/atermpp/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/atermpp/include/mcrl2/atermpp/detail/aterm_int.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/atermpp/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/atermpp/include/mcrl2/atermpp/detail/aterm_list.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/atermpp/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/atermpp/include/mcrl2/atermpp/detail/aterm_list_implementation.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/atermpp/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/atermpp/include/mcrl2/atermpp/detail/aterm_list_iterator.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/atermpp/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/atermpp/include/mcrl2/atermpp/detail/aterm_pool.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/atermpp/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/atermpp/include/mcrl2/atermpp/detail/aterm_pool_implementation.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/atermpp/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/atermpp/include/mcrl2/atermpp/detail/aterm_pool_storage.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/atermpp/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/atermpp/include/mcrl2/atermpp/detail/aterm_pool_storage_implementation.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/atermpp/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/atermpp/include/mcrl2/atermpp/detail/function_symbol.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/atermpp/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/atermpp/include/mcrl2/atermpp/detail/function_symbol_hash.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/atermpp/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/atermpp/include/mcrl2/atermpp/detail/function_symbol_pool.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/atermpp/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/atermpp/include/mcrl2/atermpp/detail/global_aterm_pool.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/atermpp/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/atermpp/include/mcrl2/atermpp/detail/index_traits.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/atermpp/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/atermpp/include/mcrl2/atermpp/detail/shared_subset.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/atermpp/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/atermpp/include/mcrl2/atermpp/detail/thread_aterm_pool.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/atermpp/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/atermpp/include/mcrl2/atermpp/detail/thread_aterm_pool_implementation.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/atermpp/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/atermpp/include/mcrl2/atermpp/detail/type_traits_impl.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/atermpp" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/atermpp/include/mcrl2/atermpp/function_symbol.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/atermpp" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/atermpp/include/mcrl2/atermpp/function_symbol_generator.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/atermpp" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/atermpp/include/mcrl2/atermpp/set_operations.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/atermpp/standard_containers" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/atermpp/include/mcrl2/atermpp/standard_containers/deque.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/atermpp/standard_containers/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/atermpp/include/mcrl2/atermpp/standard_containers/detail/unordered_map_implementation.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/atermpp/standard_containers" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/atermpp/include/mcrl2/atermpp/standard_containers/indexed_set.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/atermpp/standard_containers" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/atermpp/include/mcrl2/atermpp/standard_containers/stack.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/atermpp/standard_containers" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/atermpp/include/mcrl2/atermpp/standard_containers/unordered_map.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/atermpp/standard_containers" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/atermpp/include/mcrl2/atermpp/standard_containers/vector.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/atermpp" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/atermpp/include/mcrl2/atermpp/type_traits.h")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/workspaces/img2mcrl2/mCRL2_voxlogica/build/libraries/atermpp/example/cmake_install.cmake")
endif()

