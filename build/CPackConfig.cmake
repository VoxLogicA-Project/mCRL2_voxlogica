# This file will be configured to contain variables for CPack. These variables
# should be set in the CMake list file of the project before CPack module is
# included. The list of available CPACK_xxx variables and their associated
# documentation may be obtained using
#  cpack --help-variable-list
#
# Some variables are common to all generators (e.g. CPACK_PACKAGE_NAME)
# and some are specific to a generator
# (e.g. CPACK_NSIS_EXTRA_INSTALL_COMMANDS). The generator specific variables
# usually begin with CPACK_<GENNAME>_xxxx.


set(CPACK_ALL_INSTALL_TYPES "Default;Full")
set(CPACK_BINARY_DEB "OFF")
set(CPACK_BINARY_FREEBSD "OFF")
set(CPACK_BINARY_IFW "OFF")
set(CPACK_BINARY_NSIS "OFF")
set(CPACK_BINARY_RPM "OFF")
set(CPACK_BINARY_STGZ "ON")
set(CPACK_BINARY_TBZ2 "OFF")
set(CPACK_BINARY_TGZ "ON")
set(CPACK_BINARY_TXZ "OFF")
set(CPACK_BINARY_TZ "ON")
set(CPACK_BUILD_SOURCE_DIRS "/workspaces/img2mcrl2/mCRL2_voxlogica;/workspaces/img2mcrl2/mCRL2_voxlogica/build")
set(CPACK_CMAKE_GENERATOR "Unix Makefiles")
set(CPACK_COMPONENTS_ALL "Documentation;Examples;Headers;Libraries;Runtime;Shared;Stable")
set(CPACK_COMPONENTS_GROUPING "ALL_COMPONENTS_IN_ONE")
set(CPACK_COMPONENT_DEPRECATED_DEPENDS "Libraries;Headers")
set(CPACK_COMPONENT_DEPRECATED_GROUP "Runtime")
set(CPACK_COMPONENT_DEPRECATED_INSTALL_TYPES "Full")
set(CPACK_COMPONENT_DEVELOPER_DEPENDS "Libraries;Headers")
set(CPACK_COMPONENT_DEVELOPER_GROUP "Runtime")
set(CPACK_COMPONENT_DEVELOPER_INSTALL_TYPES "Full")
set(CPACK_COMPONENT_EXAMPLES_GROUP "Documentation")
set(CPACK_COMPONENT_EXAMPLES_INSTALL_TYPES "Full;Default")
set(CPACK_COMPONENT_EXPERIMENTAL_DEPENDS "Libraries;Headers")
set(CPACK_COMPONENT_EXPERIMENTAL_GROUP "Runtime")
set(CPACK_COMPONENT_EXPERIMENTAL_INSTALL_TYPES "Full")
set(CPACK_COMPONENT_HEADERS_GROUP "Development")
set(CPACK_COMPONENT_HEADERS_INSTALL_TYPES "Full")
set(CPACK_COMPONENT_LIBRARIES_GROUP "Runtime")
set(CPACK_COMPONENT_LIBRARIES_INSTALL_TYPES "Full")
set(CPACK_COMPONENT_SHARED_GROUP "Runtime")
set(CPACK_COMPONENT_SHARED_REQUIRED "TRUE")
set(CPACK_COMPONENT_STABLE_DEPENDS "Libraries;Headers")
set(CPACK_COMPONENT_STABLE_GROUP "Runtime")
set(CPACK_COMPONENT_STABLE_INSTALL_TYPES "Full;Default")
set(CPACK_COMPONENT_UNSPECIFIED_HIDDEN "TRUE")
set(CPACK_COMPONENT_UNSPECIFIED_REQUIRED "TRUE")
set(CPACK_CREATE_DESKTOP_LINKS "mcrl2-gui")
set(CPACK_DEBIAN_PACKAGE_CONTROL_EXTRA "/workspaces/img2mcrl2/mCRL2_voxlogica/build/packaging/debian/postinst")
set(CPACK_DEBIAN_PACKAGE_DEPENDS "g++ | clang")
set(CPACK_DEBIAN_PACKAGE_DESCRIPTION "toolset for the mCRL2 formal specification language
 mCRL2 stands for micro Common Representation Language 2.  It is a
 specification language that can be used to specify and analyse the behaviour
 of distributed systems and protocols and is the successor to muCRL.  Using its
 accompanying toolset, systems can be analysed and verified automatically.
 .
 This toolset supports a collection of tools for linearisation, simulation,
 state-space exploration and generation and tools to optimise and analyse
 specifications.  Moreover, state spaces can be manipulated, visualised and
 analysed.")
set(CPACK_DEBIAN_PACKAGE_HOMEPAGE "http://www.mcrl2.org")
set(CPACK_DEBIAN_PACKAGE_SECTION "science")
set(CPACK_DEBIAN_PACKAGE_SHLIBDEPS "ON")
set(CPACK_DEFAULT_PACKAGE_DESCRIPTION_FILE "/usr/share/cmake-3.25/Templates/CPack.GenericDescription.txt")
set(CPACK_DEFAULT_PACKAGE_DESCRIPTION_SUMMARY "mCRL2 built using CMake")
set(CPACK_DMG_SLA_USE_RESOURCE_FILE_LICENSE "ON")
set(CPACK_GENERATOR "STGZ;TGZ;TZ")
set(CPACK_INSTALL_CMAKE_PROJECTS "/workspaces/img2mcrl2/mCRL2_voxlogica/build;mCRL2;ALL;/")
set(CPACK_INSTALL_PREFIX "/usr/local")
set(CPACK_MODULE_PATH "/workspaces/img2mcrl2/mCRL2_voxlogica/build/cmake")
set(CPACK_NSIS_DISPLAY_NAME "mCRL2")
set(CPACK_NSIS_DISPLAY_NAME_SET "TRUE")
set(CPACK_NSIS_INSTALLER_ICON_CODE "")
set(CPACK_NSIS_INSTALLER_MUI_ICON_CODE "")
set(CPACK_NSIS_INSTALL_ROOT "$PROGRAMFILES")
set(CPACK_NSIS_MODIFY_PATH "ON")
set(CPACK_NSIS_PACKAGE_NAME "mCRL2")
set(CPACK_NSIS_UNINSTALL_NAME "Uninstall")
set(CPACK_OBJCOPY_EXECUTABLE "/usr/bin/objcopy")
set(CPACK_OBJDUMP_EXECUTABLE "/usr/bin/objdump")
set(CPACK_OUTPUT_CONFIG_FILE "/workspaces/img2mcrl2/mCRL2_voxlogica/build/CPackConfig.cmake")
set(CPACK_PACKAGE_CONTACT "mCRL2 Development team <mcrl2-users@listserver.tue.nl>")
set(CPACK_PACKAGE_DEFAULT_LOCATION "/")
set(CPACK_PACKAGE_DESCRIPTION_FILE "/usr/share/cmake-3.25/Templates/CPack.GenericDescription.txt")
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "Tools for modelling, validation and verification of concurrent systems")
set(CPACK_PACKAGE_EXECUTABLES "ltsgraph;LTSGraph;ltsview;LTSView;diagraphica;DiaGraphica;lpsxsim;LPS XSim;mcrl2-gui;mCRL2 GUI;mcrl2xi;mCRL2 XI;mcrl2ide;mCRL2 IDE")
set(CPACK_PACKAGE_FILE_NAME "mcrl2-202307.1.41db436712M_x86_64")
set(CPACK_PACKAGE_INSTALL_DIRECTORY "mCRL2")
set(CPACK_PACKAGE_INSTALL_REGISTRY_KEY "mCRL2")
set(CPACK_PACKAGE_NAME "mcrl2")
set(CPACK_PACKAGE_RELOCATABLE "true")
set(CPACK_PACKAGE_VENDOR "TUe")
set(CPACK_PACKAGE_VERSION "202307.1.41db436712M")
set(CPACK_PACKAGE_VERSION_MAJOR "0")
set(CPACK_PACKAGE_VERSION_MINOR "1")
set(CPACK_PACKAGE_VERSION_PATCH "1")
set(CPACK_READELF_EXECUTABLE "/usr/bin/readelf")
set(CPACK_RESOURCE_FILE_LICENSE "/workspaces/img2mcrl2/mCRL2_voxlogica/build/COPYING.txt")
set(CPACK_RESOURCE_FILE_README "/workspaces/img2mcrl2/mCRL2_voxlogica/build/README.txt")
set(CPACK_RESOURCE_FILE_WELCOME "/usr/share/cmake-3.25/Templates/CPack.GenericWelcome.txt")
set(CPACK_RPM_EXCLUDE_FROM_AUTO_FILELIST_ADDITION "/usr/share/applications;/usr/share/icons;/usr/share/man;/usr/share/man/man1")
set(CPACK_RPM_PACKAGE_DESCRIPTION "toolset for the mCRL2 formal specification language
mCRL2 stands for micro Common Representation Language 2.  It is a specification
language that can be used to specify and analyse the behaviour of distributed
systems and protocols and is the successor to muCRL.  Using its accompanying
toolset, systems can be analysed and verified automatically.

This toolset supports a collection of tools for linearisation, simulation,
state-space exploration and generation and tools to optimise and analyse
specifications.  Moreover, state spaces can be manipulated, visualised and
analysed.")
set(CPACK_RPM_PACKAGE_GROUP "Productivity/Scientific/Other")
set(CPACK_RPM_PACKAGE_LICENSE "Boost")
set(CPACK_RPM_PACKAGE_REQUIRES "gcc")
set(CPACK_RPM_PACKAGE_URL "https://mcrl2.org")
set(CPACK_RPM_PACKAGE_VENDOR "Technische Universiteit Eindhoven (TU/e)")
set(CPACK_SET_DESTDIR "OFF")
set(CPACK_SOURCE_GENERATOR "TGZ")
set(CPACK_SOURCE_OUTPUT_CONFIG_FILE "/workspaces/img2mcrl2/mCRL2_voxlogica/build/CPackSourceConfig.cmake")
set(CPACK_SOURCE_PACKAGE_FILE_NAME "mcrl2-202307.1.41db436712M")
set(CPACK_SOURCE_STRIP_FILES "False")
set(CPACK_STRIP_FILES "True")
set(CPACK_SYSTEM_NAME "Linux")
set(CPACK_THREADS "1")
set(CPACK_TOPLEVEL_TAG "mcrl2-202307.1.41db436712M")
set(CPACK_WIX_SIZEOF_VOID_P "8")

if(NOT CPACK_PROPERTIES_FILE)
  set(CPACK_PROPERTIES_FILE "/workspaces/img2mcrl2/mCRL2_voxlogica/build/CPackProperties.cmake")
endif()

if(EXISTS ${CPACK_PROPERTIES_FILE})
  include(${CPACK_PROPERTIES_FILE})
endif()
