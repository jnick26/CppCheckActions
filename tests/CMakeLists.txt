enable_testing()

file(GLOB_RECURSE TEST_SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)
add_executable(hello_tests ${TEST_SOURCES})
target_link_libraries(hello_tests library GTest::gmock_main)

include(GoogleTest)
gtest_discover_tests(hello_tests)
