cmake_minimum_required(VERSION 3.14)
project(CppCheckActions)

set(CMAKE_CXX_STANDARD 20)

include(FetchContent)

FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG release-1.12.1)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

file(GLOB_RECURSE SOURCES ${PROJECT_SOURCE_DIR}/sources/*.cpp)
message("Library sources: ${SOURCES}")
add_library(sources ${SOURCES})


file(GLOB_RECURSE TEST_SOURCES ${PROJECT_SOURCE_DIR}/tests/*.cpp)
message("Test sources: ${TEST_SOURCES}")
add_executable(tests ${TEST_SOURCES})
target_link_libraries(tests PRIVATE sources GTest::gmock_main)
target_include_directories(tests PRIVATE ${PROJECT_SOURCE_DIR}/sources)






