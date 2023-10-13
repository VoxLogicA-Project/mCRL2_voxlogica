find_package(ITK REQUIRED)
include(${ITK_USE_FILE})

target_link_libraries(img2mcrl2 ${ITK_LIBRARIES})


add_mcrl2_tool(ltsimage
  SOURCES
    ltsimage.cpp
  DEPENDS
    mcrl2_lts
)
