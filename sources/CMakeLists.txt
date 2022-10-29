file(GLOB_RECURSE SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)
add_library(library ${SOURCES})
target_include_directories(library PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})