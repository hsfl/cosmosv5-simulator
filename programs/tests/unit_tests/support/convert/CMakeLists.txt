cmake_minimum_required(VERSION 3.20)

add_executable(ephemlib_ut ephemlib_ut.cpp)
target_link_libraries(ephemlib_ut CosmosEphem gtest gtest_main)
add_test(NAME ephemlib_ut COMMAND ephemlib_ut)

add_executable(jpleph_ut jpleph_ut.cpp)
target_link_libraries(jpleph_ut CosmosJpleph gtest gtest_main)
add_test(NAME jpleph_ut COMMAND jpleph_ut)
