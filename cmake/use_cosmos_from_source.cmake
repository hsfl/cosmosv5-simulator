if(NOT DEFINED COSMOS_SIMULATOR_INCLUDED)
set(COSMOS_SIMULATOR_INCLUDED TRUE)

include(${COSMOS_SOURCE}/micro-agent/cmake/use_cosmos_from_source.cmake)

set(COSMOS_SOURCE_SIMULATOR ${COSMOS_SOURCE}/simulator)
message("Using COSMOS simulator from " ${COSMOS_SOURCE_SIMULATOR})

include_directories(${COSMOS_SOURCE_SIMULATOR}/libraries)

add_subdirectory(${COSMOS_SOURCE_SIMULATOR}/libraries/physics  ${CMAKE_BINARY_DIR}/simulator/libraries/physics)
add_subdirectory(${COSMOS_SOURCE_SIMULATOR}/libraries/support  ${CMAKE_BINARY_DIR}/simulator/libraries/support)

endif()
