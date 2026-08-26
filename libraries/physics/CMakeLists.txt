cmake_minimum_required(VERSION 3.20)

FILE(GLOB INCLUDES ${CMAKE_CURRENT_SOURCE_DIR}/*.h)

# nrlmsise-00: atmosphere model (no COSMOS deps)
add_library(CosmosNrlmsise STATIC nrlmsise-00.cpp nrlmsise-00_data.cpp nrlmsise-00.h)
target_link_libraries(CosmosNrlmsise ${COSMOS_LIBS})
install(TARGETS CosmosNrlmsise DESTINATION lib)

# controllib: control system math (only needs convertdef from kernel)
add_library(CosmosControl STATIC controllib.cpp controllib.h)
target_link_libraries(CosmosControl CosmosMath CosmosSupport ${COSMOS_LIBS})
install(TARGETS CosmosControl DESTINATION lib)

# constants.h is header-only
install(FILES ${INCLUDES} DESTINATION include/physics)
