# Install script for directory: /workspaces/img2mcrl2/mCRL2_voxlogica/libraries/process

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
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmcrl2_process.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmcrl2_process.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmcrl2_process.so"
         RPATH "$ORIGIN/../lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/build/stage/lib/libmcrl2_process.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmcrl2_process.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmcrl2_process.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmcrl2_process.so"
         OLD_RPATH "/workspaces/img2mcrl2/mCRL2_voxlogica/build/stage/lib:"
         NEW_RPATH "$ORIGIN/../lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmcrl2_process.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Libraries" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/process" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/process/include/mcrl2/process/action_label.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/process" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/process/include/mcrl2/process/action_name_multiset.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/process" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/process/include/mcrl2/process/add_binding.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/process" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/process/include/mcrl2/process/allow_set.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/process" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/process/include/mcrl2/process/alphabet.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/process" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/process/include/mcrl2/process/alphabet_bounded.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/process" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/process/include/mcrl2/process/alphabet_efficient.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/process" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/process/include/mcrl2/process/alphabet_new.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/process" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/process/include/mcrl2/process/alphabet_operations.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/process" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/process/include/mcrl2/process/alphabet_pcrl.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/process" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/process/include/mcrl2/process/alphabet_reduce.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/process" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/process/include/mcrl2/process/anonymize.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/process" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/process/include/mcrl2/process/balance_nesting_depth.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/process" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/process/include/mcrl2/process/builder.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/process" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/process/include/mcrl2/process/communication_expression.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/process/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/process/include/mcrl2/process/detail/action_context.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/process/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/process/include/mcrl2/process/detail/alphabet_intersection.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/process/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/process/include/mcrl2/process/detail/alphabet_parse.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/process/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/process/include/mcrl2/process/detail/alphabet_push_allow.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/process/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/process/include/mcrl2/process/detail/alphabet_push_block.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/process/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/process/include/mcrl2/process/detail/match_action_parameters.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/process/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/process/include/mcrl2/process/detail/pcrl_equation_cache.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/process/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/process/include/mcrl2/process/detail/position_count_traverser.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/process/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/process/include/mcrl2/process/detail/process_command.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/process/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/process/include/mcrl2/process/detail/process_context.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/process/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/process/include/mcrl2/process/detail/process_io.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/process" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/process/include/mcrl2/process/eliminate_trivial_equations.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/process" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/process/include/mcrl2/process/eliminate_unused_equations.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/process" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/process/include/mcrl2/process/expand_process_instance_assignments.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/process" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/process/include/mcrl2/process/find.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/process" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/process/include/mcrl2/process/is_communicating_lpe.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/process" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/process/include/mcrl2/process/is_guarded.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/process" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/process/include/mcrl2/process/is_linear.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/process" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/process/include/mcrl2/process/is_multi_action.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/process" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/process/include/mcrl2/process/is_stochastic.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/process" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/process/include/mcrl2/process/is_well_typed.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/process" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/process/include/mcrl2/process/join.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/process" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/process/include/mcrl2/process/merge_action_specifications.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/process" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/process/include/mcrl2/process/multi_action_name.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/process" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/process/include/mcrl2/process/normalize_sorts.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/process" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/process/include/mcrl2/process/parse.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/process" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/process/include/mcrl2/process/parse_impl.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/process" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/process/include/mcrl2/process/print.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/process" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/process/include/mcrl2/process/process_equation.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/process" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/process/include/mcrl2/process/process_expression.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/process" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/process/include/mcrl2/process/process_identifier.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/process" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/process/include/mcrl2/process/process_info.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/process" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/process/include/mcrl2/process/process_specification.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/process" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/process/include/mcrl2/process/process_variable_strongly_connected_components.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/process" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/process/include/mcrl2/process/remove_data_parameters.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/process" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/process/include/mcrl2/process/remove_equations.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/process" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/process/include/mcrl2/process/rename_expression.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/process" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/process/include/mcrl2/process/replace.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/process" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/process/include/mcrl2/process/replace_capture_avoiding.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/process" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/process/include/mcrl2/process/replace_capture_avoiding_with_an_identifier_generator.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/process" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/process/include/mcrl2/process/replace_subterm.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/process" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/process/include/mcrl2/process/rewrite.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/process" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/process/include/mcrl2/process/translate_user_notation.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/process" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/process/include/mcrl2/process/traverser.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/process" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/process/include/mcrl2/process/typecheck.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/process" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/process/include/mcrl2/process/untyped_multi_action.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/process" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/process/include/mcrl2/process/utility.h")
endif()

