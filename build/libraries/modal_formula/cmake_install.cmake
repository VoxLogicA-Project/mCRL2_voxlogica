# Install script for directory: /workspaces/img2mcrl2/mCRL2_voxlogica/libraries/modal_formula

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
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmcrl2_modal_formula.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmcrl2_modal_formula.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmcrl2_modal_formula.so"
         RPATH "$ORIGIN/../lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/build/stage/lib/libmcrl2_modal_formula.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmcrl2_modal_formula.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmcrl2_modal_formula.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmcrl2_modal_formula.so"
         OLD_RPATH "/workspaces/img2mcrl2/mCRL2_voxlogica/build/stage/lib:"
         NEW_RPATH "$ORIGIN/../lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmcrl2_modal_formula.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Libraries" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/modal_formula" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/modal_formula/include/mcrl2/modal_formula/action_formula.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/modal_formula" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/modal_formula/include/mcrl2/modal_formula/add_binding.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/modal_formula" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/modal_formula/include/mcrl2/modal_formula/algorithms.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/modal_formula" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/modal_formula/include/mcrl2/modal_formula/builder.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/modal_formula" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/modal_formula/include/mcrl2/modal_formula/count_fixpoints.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/modal_formula/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/modal_formula/include/mcrl2/modal_formula/detail/state_variable_context.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/modal_formula/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/modal_formula/include/mcrl2/modal_formula/detail/test_input.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/modal_formula" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/modal_formula/include/mcrl2/modal_formula/find.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/modal_formula" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/modal_formula/include/mcrl2/modal_formula/has_name_clashes.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/modal_formula" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/modal_formula/include/mcrl2/modal_formula/is_monotonous.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/modal_formula" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/modal_formula/include/mcrl2/modal_formula/is_timed.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/modal_formula" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/modal_formula/include/mcrl2/modal_formula/maximal_closed_subformula.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/modal_formula" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/modal_formula/include/mcrl2/modal_formula/negate_variables.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/modal_formula" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/modal_formula/include/mcrl2/modal_formula/normalize.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/modal_formula" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/modal_formula/include/mcrl2/modal_formula/normalize_sorts.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/modal_formula" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/modal_formula/include/mcrl2/modal_formula/parse.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/modal_formula" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/modal_formula/include/mcrl2/modal_formula/parse_impl.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/modal_formula" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/modal_formula/include/mcrl2/modal_formula/preprocess_state_formula.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/modal_formula" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/modal_formula/include/mcrl2/modal_formula/print.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/modal_formula" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/modal_formula/include/mcrl2/modal_formula/regular_formula.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/modal_formula" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/modal_formula/include/mcrl2/modal_formula/replace.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/modal_formula" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/modal_formula/include/mcrl2/modal_formula/replace_capture_avoiding.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/modal_formula" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/modal_formula/include/mcrl2/modal_formula/replace_capture_avoiding_with_an_identifier_generator.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/modal_formula" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/modal_formula/include/mcrl2/modal_formula/resolve_name_clashes.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/modal_formula" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/modal_formula/include/mcrl2/modal_formula/rewrite.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/modal_formula" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/modal_formula/include/mcrl2/modal_formula/state_formula.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/modal_formula" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/modal_formula/include/mcrl2/modal_formula/state_formula_rename.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/modal_formula" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/modal_formula/include/mcrl2/modal_formula/state_formula_specification.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/modal_formula" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/modal_formula/include/mcrl2/modal_formula/translate_regular_formulas.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/modal_formula" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/modal_formula/include/mcrl2/modal_formula/translate_user_notation.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/modal_formula" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/modal_formula/include/mcrl2/modal_formula/traverser.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/modal_formula" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/modal_formula/include/mcrl2/modal_formula/typecheck.h")
endif()

