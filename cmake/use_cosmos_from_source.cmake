if(NOT DEFINED COSMOS_SIMULATOR_INCLUDED)
set(COSMOS_SIMULATOR_INCLUDED TRUE)

get_filename_component(COSMOS_SOURCE_SIMULATOR "${CMAKE_CURRENT_LIST_DIR}/.." ABSOLUTE)

if(DEFINED COSMOS_SOURCE)
    # Auto-initialize the lower-layer submodule if not present
    if(NOT EXISTS "${COSMOS_SOURCE}/micro-agent/CMakeLists.txt")
        message(STATUS "cosmosv5: initializing micro-agent submodule...")
        execute_process(
            COMMAND git submodule update --init micro-agent
            WORKING_DIRECTORY "${COSMOS_SOURCE}"
            RESULT_VARIABLE _cosmos_git_result
        )
        if(NOT _cosmos_git_result EQUAL 0)
            message(FATAL_ERROR
                "cosmosv5: micro-agent submodule is not initialized and auto-init failed.\n"
                "Run from the cosmosv5 workspace root:\n"
                "  git submodule update --init micro-agent")
        endif()
    endif()
    include(${COSMOS_SOURCE}/micro-agent/cmake/use_cosmos_from_source.cmake)
else()
    message(FATAL_ERROR "COSMOS_SOURCE not set. Set COSMOS_SOURCE to the cosmosv5 workspace root (the directory containing thirdparty/, kernel/, etc.).")
endif()

message("Using COSMOS simulator from " ${COSMOS_SOURCE_SIMULATOR})

include_directories(${COSMOS_SOURCE_SIMULATOR}/libraries)

add_subdirectory(${COSMOS_SOURCE_SIMULATOR}/libraries/physics  ${CMAKE_BINARY_DIR}/simulator/libraries/physics)
add_subdirectory(${COSMOS_SOURCE_SIMULATOR}/libraries/support  ${CMAKE_BINARY_DIR}/simulator/libraries/support)

endif()
