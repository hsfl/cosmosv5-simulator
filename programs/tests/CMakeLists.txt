cmake_minimum_required(VERSION 3.20)

message(STATUS "${CMAKE_CURRENT_SOURCE_DIR} : ")

if(${BUILD_PROGRAMS_TESTS} MATCHES "YES")
    add_subdirectory(unit_tests)
endif()
