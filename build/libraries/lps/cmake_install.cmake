# Install script for directory: /workspaces/img2mcrl2/mCRL2_voxlogica/libraries/lps

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
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmcrl2_lps.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmcrl2_lps.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmcrl2_lps.so"
         RPATH "$ORIGIN/../lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/build/stage/lib/libmcrl2_lps.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmcrl2_lps.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmcrl2_lps.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmcrl2_lps.so"
         OLD_RPATH "/workspaces/img2mcrl2/mCRL2_voxlogica/build/stage/lib:"
         NEW_RPATH "$ORIGIN/../lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmcrl2_lps.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Libraries" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/lps" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/lps/include/mcrl2/lps/action_rename.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/lps" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/lps/include/mcrl2/lps/action_summand.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/lps" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/lps/include/mcrl2/lps/add_binding.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/lps" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/lps/include/mcrl2/lps/binary.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/lps" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/lps/include/mcrl2/lps/builder.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/lps" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/lps/include/mcrl2/lps/confluence.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/lps" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/lps/include/mcrl2/lps/confluence_checker.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/lps" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/lps/include/mcrl2/lps/constelm.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/lps" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/lps/include/mcrl2/lps/deadlock.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/lps" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/lps/include/mcrl2/lps/deadlock_summand.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/lps" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/lps/include/mcrl2/lps/decluster.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/lps/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/lps/include/mcrl2/lps/detail/action_utility.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/lps/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/lps/include/mcrl2/lps/detail/instantiate_global_variables.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/lps/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/lps/include/mcrl2/lps/detail/linear_process_conversion_traverser.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/lps/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/lps/include/mcrl2/lps/detail/lps_algorithm.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/lps/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/lps/include/mcrl2/lps/detail/lps_command.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/lps/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/lps/include/mcrl2/lps/detail/lps_io.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/lps/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/lps/include/mcrl2/lps/detail/make_timed_lps.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/lps/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/lps/include/mcrl2/lps/detail/parameter_selection.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/lps/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/lps/include/mcrl2/lps/detail/specification_property_map.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/lps/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/lps/include/mcrl2/lps/detail/test_input.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/lps/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/lps/include/mcrl2/lps/detail/ultimate_delay.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/lps" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/lps/include/mcrl2/lps/disjointness_checker.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/lps" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/lps/include/mcrl2/lps/exploration_strategy.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/lps" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/lps/include/mcrl2/lps/explorer.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/lps" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/lps/include/mcrl2/lps/explorer_options.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/lps" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/lps/include/mcrl2/lps/find.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/lps" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/lps/include/mcrl2/lps/find_representative.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/lps" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/lps/include/mcrl2/lps/if_rewrite.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/lps" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/lps/include/mcrl2/lps/invariant_checker.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/lps" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/lps/include/mcrl2/lps/invelm_algorithm.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/lps" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/lps/include/mcrl2/lps/io.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/lps" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/lps/include/mcrl2/lps/is_stochastic.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/lps" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/lps/include/mcrl2/lps/is_well_typed.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/lps" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/lps/include/mcrl2/lps/linear_process.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/lps" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/lps/include/mcrl2/lps/linearisation_method.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/lps" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/lps/include/mcrl2/lps/linearise.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/lps" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/lps/include/mcrl2/lps/lps_rewriter_tool.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/lps" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/lps/include/mcrl2/lps/lps_rewriter_type.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/lps" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/lps/include/mcrl2/lps/lps_summand_group.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/lps" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/lps/include/mcrl2/lps/lpsparunfoldlib.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/lps" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/lps/include/mcrl2/lps/lpsreach.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/lps" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/lps/include/mcrl2/lps/ltsmin.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/lps" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/lps/include/mcrl2/lps/multi_action.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/lps" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/lps/include/mcrl2/lps/multi_action_parse.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/lps" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/lps/include/mcrl2/lps/next_state_generator.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/lps" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/lps/include/mcrl2/lps/normalize_sorts.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/lps" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/lps/include/mcrl2/lps/one_point_rule_rewrite.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/lps" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/lps/include/mcrl2/lps/order_summand_variables.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/lps" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/lps/include/mcrl2/lps/parelm.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/lps" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/lps/include/mcrl2/lps/parse.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/lps" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/lps/include/mcrl2/lps/parse_impl.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/lps" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/lps/include/mcrl2/lps/print.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/lps" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/lps/include/mcrl2/lps/probabilistic_data_expression.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/lps" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/lps/include/mcrl2/lps/process_initializer.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/lps" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/lps/include/mcrl2/lps/remove.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/lps" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/lps/include/mcrl2/lps/replace.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/lps" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/lps/include/mcrl2/lps/replace_capture_avoiding.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/lps" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/lps/include/mcrl2/lps/replace_capture_avoiding_with_an_identifier_generator.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/lps" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/lps/include/mcrl2/lps/replace_constants_by_variables.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/lps" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/lps/include/mcrl2/lps/resolve_name_clashes.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/lps" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/lps/include/mcrl2/lps/rewrite.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/lps/rewriters" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/lps/include/mcrl2/lps/rewriters/data_rewriter.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/lps/rewriters" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/lps/include/mcrl2/lps/rewriters/one_point_condition_rewrite.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/lps" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/lps/include/mcrl2/lps/specification.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/lps" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/lps/include/mcrl2/lps/state.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/lps" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/lps/include/mcrl2/lps/state_probability_pair.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/lps" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/lps/include/mcrl2/lps/stochastic_action_summand.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/lps" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/lps/include/mcrl2/lps/stochastic_distribution.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/lps" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/lps/include/mcrl2/lps/stochastic_linear_process.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/lps" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/lps/include/mcrl2/lps/stochastic_process_initializer.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/lps" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/lps/include/mcrl2/lps/stochastic_specification.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/lps" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/lps/include/mcrl2/lps/stochastic_state.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/lps" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/lps/include/mcrl2/lps/sumelm.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/lps" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/lps/include/mcrl2/lps/suminst.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/lps" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/lps/include/mcrl2/lps/summand.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/lps" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/lps/include/mcrl2/lps/symbolic_lts.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/lps" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/lps/include/mcrl2/lps/symbolic_lts_bisim.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/lps" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/lps/include/mcrl2/lps/symbolic_lts_io.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/lps" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/lps/include/mcrl2/lps/tools.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/lps" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/lps/include/mcrl2/lps/translate_user_notation.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/lps" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/lps/include/mcrl2/lps/traverser.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/lps" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/lps/include/mcrl2/lps/typecheck.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/lps" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/lps/include/mcrl2/lps/untime.h")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/workspaces/img2mcrl2/mCRL2_voxlogica/build/libraries/lps/example/cmake_install.cmake")
endif()

