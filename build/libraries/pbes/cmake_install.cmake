# Install script for directory: /workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes

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
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmcrl2_pbes.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmcrl2_pbes.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmcrl2_pbes.so"
         RPATH "$ORIGIN/../lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/build/stage/lib/libmcrl2_pbes.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmcrl2_pbes.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmcrl2_pbes.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmcrl2_pbes.so"
         OLD_RPATH "/workspaces/img2mcrl2/mCRL2_voxlogica/build/stage/lib:"
         NEW_RPATH "$ORIGIN/../lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmcrl2_pbes.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Libraries" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/absinthe.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/absinthe_strategy.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/abstract.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/add_binding.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/algorithms.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/anonymize.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/bdd.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/bisimulation.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/bisimulation_type.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/builder.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/complement.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/complps2pbes.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/constelm.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/detail/bes_equation_limit.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/detail/bqnf2ppg_rewriter.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/detail/bqnf_quantifier_rewriter.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/detail/bqnf_traverser.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/detail/bqnf_visitor.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/detail/check_well_formed_bes.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/detail/find_free_variables.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/detail/guard_traverser.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/detail/has_propositional_variables.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/detail/instantiate_global_variables.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/detail/is_pfnf.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/detail/is_well_typed.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/detail/lps2pbes_e.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/detail/lps2pbes_indenter.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/detail/lps2pbes_par.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/detail/lps2pbes_rhs.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/detail/lps2pbes_sat.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/detail/lps2pbes_utility.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/detail/lpsstategraph_algorithm.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/detail/lts2pbes_e.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/detail/lts2pbes_lts.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/detail/lts2pbes_rhs.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/detail/normalize_and_or.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/detail/occurring_variable_visitor.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/detail/parity_game_output.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/detail/parse.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/detail/pbes2bool.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/detail/pbes_command.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/detail/pbes_context.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/detail/pbes_expression_builder_indenter.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/detail/pbes_greybox_interface.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/detail/pbes_io.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/detail/pbes_parameter_map.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/detail/pbes_property_map.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/detail/pbessolve.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/detail/pfnf_pbes.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/detail/pfnf_print.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/detail/pfnf_traverser.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/detail/position_count_traverser.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/detail/ppg_rewriter.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/detail/ppg_traverser.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/detail/ppg_visitor.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/detail/stategraph_algorithm.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/detail/stategraph_global_algorithm.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/detail/stategraph_global_graph.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/detail/stategraph_global_reset_variables.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/detail/stategraph_graph.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/detail/stategraph_influence.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/detail/stategraph_local_algorithm.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/detail/stategraph_local_reset_variables.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/detail/stategraph_pbes.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/detail/stategraph_reset_variables.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/detail/stategraph_simplify_rewriter.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/detail/stategraph_split.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/detail/stategraph_utility.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/detail/symbolic_exploration.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/detail/term_traits_optimized.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/detail/test_utility.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/enumerator.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/eqelm.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/equation_index.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/find.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/find_equalities.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/fixpoint_symbol.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/gauss_elimination.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/io.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/is_bes.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/is_monotonous.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/join.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/lps2pbes.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/lts2pbes.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/normalize.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/normalize_sorts.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/parelm.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/parity_game_generator.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/parse.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/parse_impl.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/partial_order_reduction.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/pbes.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/pbes_equation.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/pbes_equation_index.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/pbes_explorer.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/pbes_expression.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/pbes_functions.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/pbes_gauss_elimination.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/pbes_rewriter_type.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/pbes_solver_test.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/pbes_summand_group.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/pbesbddsolve.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/pbesbddsolve1.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/pbesinst_algorithm.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/pbesinst_alternative_lazy_algorithm.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/pbesinst_fatal_attractors.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/pbesinst_find_loops.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/pbesinst_finite_algorithm.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/pbesinst_lazy.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/pbesinst_partial_solve.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/pbesinst_strategy.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/pbesinst_structure_graph.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/pbesinst_structure_graph2.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/pbesinst_symbolic.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/pbesreach.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/pbessolve_attractors.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/pbessolve_options.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/pbessolve_vertex_set.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/print.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/propositional_variable.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/quantifier_propagate.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/remove_equations.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/remove_parameters.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/replace.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/replace_capture_avoiding.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/replace_capture_avoiding_with_an_identifier_generator.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/replace_constants_by_variables.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/replace_subterm.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/resolve_name_clashes.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/rewrite.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/rewriter.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes/rewriters" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/rewriters/bqnf_rewriter.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes/rewriters" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/rewriters/data2pbes_rewriter.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes/rewriters" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/rewriters/data_rewriter.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes/rewriters" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/rewriters/enumerate_quantifiers_rewriter.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes/rewriters" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/rewriters/if_rewriter.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes/rewriters" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/rewriters/one_point_rule_rewriter.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes/rewriters" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/rewriters/pbes2data_rewriter.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes/rewriters" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/rewriters/pfnf_rewriter.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes/rewriters" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/rewriters/quantifiers_inside_rewriter.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes/rewriters" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/rewriters/simplify_quantifiers_rewriter.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes/rewriters" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/rewriters/simplify_rewriter.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/search_strategy.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/significant_variables.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/simple_structure_graph.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/solve_structure_graph.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/srf_pbes.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/stategraph.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/structure_graph.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/structure_graph_builder.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/substitutions.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/symbolic_parity_game.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/symbolic_pbessolve.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/tools.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes/tools" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/tools/complps2pbes.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes/tools" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/tools/lps2pbes.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes/tools" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/tools/lpsbisim2pbes.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes/tools" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/tools/pbesabsinthe.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes/tools" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/tools/pbesabstract.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes/tools" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/tools/pbesconstelm.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes/tools" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/tools/pbesinfo.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes/tools" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/tools/pbesparelm.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes/tools" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/tools/pbespareqelm.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes/tools" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/tools/pbespor.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes/tools" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/tools/pbespp.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes/tools" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/tools/pbesrewr.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes/tools" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/tools/pbessolve.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes/tools" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/tools/pbesstategraph.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes/tools" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/tools/pbesstategraph_options.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes/tools" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/tools/txt2pbes.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/transformation_strategy.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/transformations.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/translate_user_notation.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/traverser.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/txt2pbes.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/typecheck.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/unify_parameters.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/pbes" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/pbes/include/mcrl2/pbes/untyped_pbes.h")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/workspaces/img2mcrl2/mCRL2_voxlogica/build/libraries/pbes/example/cmake_install.cmake")
endif()

