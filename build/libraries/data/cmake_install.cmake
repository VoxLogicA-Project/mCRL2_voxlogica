# Install script for directory: /workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data

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

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE PROGRAM RENAME "mcrl2compilerewriter" FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/build/stage/bin/mcrl2compilerewriter.install")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Libraries" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmcrl2_data.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmcrl2_data.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmcrl2_data.so"
         RPATH "$ORIGIN/../lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/build/stage/lib/libmcrl2_data.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmcrl2_data.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmcrl2_data.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmcrl2_data.so"
         OLD_RPATH "/workspaces/img2mcrl2/mCRL2_voxlogica/build/stage/lib:"
         NEW_RPATH "$ORIGIN/../lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmcrl2_data.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Libraries" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/abstraction.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/add_binding.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/alias.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/anonymize.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/application.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/assignment.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/bag.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/bag_comprehension.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/basic_sort.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/binder_type.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/bool.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/builder.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/consistency.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/container_sort.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/container_type.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/data.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/data_equation.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/data_expression.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/data_io.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/data_specification.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/default_expression_generator.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/detail/concepts.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/detail/data_construction.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/detail/data_functional.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/detail/data_property_map.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/detail/data_sequence_algorithm.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/detail/data_utility.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/detail/enumerator_identifier_generator.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/detail/enumerator_iteration_limit.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/detail/equal_sorts.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/detail/find.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/detail/function_update.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/detail/io.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/detail/is_untyped.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/detail/linear_inequalities_utilities.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/detail/one_point_rule_preprocessor.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/detail/parse_substitution.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/detail/print_parse_check.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/detail/print_utility.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data/detail/prover" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/detail/prover/bdd2dot.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data/detail/prover" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/detail/prover/bdd_info.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data/detail/prover" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/detail/prover/bdd_path_eliminator.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data/detail/prover" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/detail/prover/bdd_prover.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data/detail/prover" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/detail/prover/bdd_simplifier.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data/detail/prover" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/detail/prover/formula_checker.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data/detail/prover" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/detail/prover/induction.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data/detail/prover" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/detail/prover/info.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data/detail/prover" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/detail/prover/manipulator.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data/detail/prover" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/detail/prover/smt_lib_solver.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data/detail/prover" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/detail/prover/smt_solver.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data/detail/prover" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/detail/prover/solver_type.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/detail/rewrite.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data/detail/rewrite" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/detail/rewrite/jitty.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data/detail/rewrite" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/detail/rewrite/jitty_jittyc.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data/detail/rewrite" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/detail/rewrite/jittyc.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data/detail/rewrite" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/detail/rewrite/jittycpreamble.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data/detail/rewrite" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/detail/rewrite/match_tree.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data/detail/rewrite" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/detail/rewrite/nfs_array.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data/detail/rewrite" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/detail/rewrite/rewrite_stack.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data/detail/rewrite" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/detail/rewrite/strategy_rule.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data/detail/rewrite" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/detail/rewrite/with_prover.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/detail/rewrite_statistics.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/detail/rewrite_strategies.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/detail/rewriter_wrapper.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/detail/sequence_algorithm.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/detail/split_finite_variables.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/detail/test_rewriters.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data/detail" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/detail/variable_context.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/enumerator.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/enumerator_with_iterator.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/equality_one_point_substitution.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/exists.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data/experimental" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/experimental/type_check_tree.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data/experimental" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/experimental/type_checker.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/expression_traits.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/fbag.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/find.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/find_equalities.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/forall.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/fourier_motzkin.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/fset.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/function_sort.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/function_symbol.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/function_update.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/identifier_generator.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/index_traits.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/int.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/is_simple_substitution.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/is_sub_sort.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/join.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/lambda.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/linear_inequalities.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/list.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/merge_data_specifications.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/nat.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/normalize_sorts.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/optimized_boolean_operators.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/parse.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/parse_impl.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/pos.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/print.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/prover_tool.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/real.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/replace.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/replace_capture_avoiding.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/replace_capture_avoiding_with_an_identifier_generator.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/replace_constants_by_variables.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/representative_generator.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/rewrite.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/rewrite_strategy.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/rewriter.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/rewriter_tool.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data/rewriters" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/rewriters/data_rewriter.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data/rewriters" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/rewriters/if_rewriter.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data/rewriters" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/rewriters/one_point_rule_rewriter.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data/rewriters" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/rewriters/quantifiers_inside_rewriter.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data/rewriters" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/rewriters/simplify_rewriter.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/selection.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/set.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/set_comprehension.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/set_identifier_generator.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/sort_expression.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/sort_specification.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/sort_type_checker.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/standard.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/standard_container_utility.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/standard_numbers_utility.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/standard_utility.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/structured_sort.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/structured_sort_constructor.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/structured_sort_constructor_argument.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/substitution_utility.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data/substitutions" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/substitutions/assignment_sequence_substitution.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data/substitutions" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/substitutions/data_expression_assignment.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data/substitutions" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/substitutions/enumerator_substitution.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data/substitutions" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/substitutions/maintain_variables_in_rhs.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data/substitutions" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/substitutions/map_substitution.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data/substitutions" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/substitutions/mutable_indexed_substitution.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data/substitutions" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/substitutions/mutable_map_substitution.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data/substitutions" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/substitutions/mutable_substitution_composer.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data/substitutions" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/substitutions/no_substitution.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data/substitutions" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/substitutions/sequence_sequence_substitution.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data/substitutions" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/substitutions/sort_expression_assignment.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data/substitutions" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/substitutions/variable_substitution.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/translate_user_notation.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/traverser.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/typecheck.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/undefined.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/unfold_pattern_matching.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/untyped_data_parameter.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/untyped_data_specification.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/untyped_identifier.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/untyped_possible_sorts.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/untyped_set_or_bag_comprehension.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/untyped_sort.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/untyped_sort_variable.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/variable.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/where_clause.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mcrl2/data" TYPE FILE FILES "/workspaces/img2mcrl2/mCRL2_voxlogica/libraries/data/include/mcrl2/data/xyz_identifier_generator.h")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/workspaces/img2mcrl2/mCRL2_voxlogica/build/libraries/data/example/cmake_install.cmake")
endif()

