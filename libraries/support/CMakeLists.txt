cmake_minimum_required(VERSION 3.20)

FILE(GLOB INCLUDES ${CMAKE_CURRENT_SOURCE_DIR}/*.h)

# jpleph: JPL planetary ephemeris (only needs configCosmos)
add_library(CosmosJpleph STATIC jpleph.cpp jpleph.h)
target_link_libraries(CosmosJpleph CosmosSupport ${COSMOS_LIBS})
install(TARGETS CosmosJpleph DESTINATION lib)

# envi: environment utilities
add_library(CosmosEnvi STATIC envi.cpp envi.h)
target_link_libraries(CosmosEnvi CosmosData CosmosSupport ${COSMOS_LIBS})
install(TARGETS CosmosEnvi DESTINATION lib)

# ephemlib: ephemeris computations (needs convertdef — kernel)
add_library(CosmosEphem STATIC ephemlib.cpp ephemlib.h)
target_link_libraries(CosmosEphem CosmosMath CosmosSupport ${COSMOS_LIBS})
install(TARGETS CosmosEphem DESTINATION lib)

# geomag: geomagnetic field model (needs datalib, math)
add_library(CosmosGeomag STATIC geomag.cpp geomag.h)
target_link_libraries(CosmosGeomag CosmosData CosmosMath CosmosSupport ${COSMOS_LIBS})
install(TARGETS CosmosGeomag DESTINATION lib)

# demlib: digital elevation model (needs timelib, datalib)
add_library(CosmosDem STATIC demlib.cpp demlib.h)
target_link_libraries(CosmosDem CosmosData CosmosTime CosmosSupport ${COSMOS_LIBS})
install(TARGETS CosmosDem DESTINATION lib)

# convertdef.h is header-only — install alongside support headers
install(FILES ${INCLUDES} DESTINATION include/support)
