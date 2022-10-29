file(GLOB_RECURSE TEST_SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)
add_executable(tests ${TEST_SOURCES})
target_link_libraries(tests PRIVATE library GTest::gmock_main)
