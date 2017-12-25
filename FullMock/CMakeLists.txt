cmake_minimum_required(VERSION 2.6)
 
find_package(GMock REQUIRED)
include_directories(${GMOCK_INCLUDE_DIRS})

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})
 
add_executable(runTests mainTest.cpp)
target_link_libraries(runTests ${GTEST_LIBRARIES} ${GMOCK_BOTH_LIBRARIES} pthread)
