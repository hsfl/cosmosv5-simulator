if(NOT DEFINED COSMOS_SIMULATOR_INCLUDED)
set(COSMOS_SIMULATOR_INCLUDED TRUE)

get_filename_component(COSMOS_SOURCE_SIMULATOR "${CMAKE_CURRENT_LIST_DIR}/.." ABSOLUTE)

if(EXISTS "${COSMOS_SOURCE_SIMULATOR}/deps/micro-agent/cmake/use_cosmos_from_source.cmake")
    include(${COSMOS_SOURCE_SIMULATOR}/deps/micro-agent/cmake/use_cosmos_from_source.cmake)
elseif(DEFINED COSMOS_SOURCE)
    include(${COSMOS_SOURCE}/micro-agent/cmake/use_cosmos_from_source.cmake)
else()
    message(FATAL_ERROR "Cannot find cosmosv5-micro-agent. Clone with --recurse-submodules or set COSMOS_SOURCE.")
endif()

message("Using COSMOS simulator from " ${COSMOS_SOURCE_SIMULATOR})

include_directories(${COSMOS_SOURCE_SIMULATOR}/libraries)

add_subdirectory(${COSMOS_SOURCE_SIMULATOR}/libraries/physics  ${CMAKE_BINARY_DIR}/simulator/libraries/physics)
add_subdirectory(${COSMOS_SOURCE_SIMULATOR}/libraries/support  ${CMAKE_BINARY_DIR}/simulator/libraries/support)

endif()
