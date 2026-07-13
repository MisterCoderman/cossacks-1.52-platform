# CommCore - UDP networking library
# Static library, cross-platform

set(COMMCORE_SOURCES
    CommCore.cpp
    CommInet.cpp
    CommInit.cpp
    CommLanDiscovery.cpp
    CommPeers.cpp
    CommPing.cpp
    CommQueue.cpp
    CommRaw.cpp
    CommRecv.cpp
    CommServerList.cpp
)

set(COMMCORE_HEADERS
    CommCore.h
)

add_library(CommCore STATIC ${COMMCORE_SOURCES} ${COMMCORE_HEADERS})

target_include_directories(CommCore PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# Platform-specific linking
target_link_libraries(CommCore PRIVATE platform_compat)
if(WIN32)
    target_link_libraries(CommCore PRIVATE ws2_32 iphlpapi advapi32)
endif()

# Struct packing compatibility
if(MSVC)
    # Already handled by #pragma pack(1) in CommCore.h
else()
    target_compile_options(CommCore PRIVATE -Wno-pragma-pack)
endif()

# Disable annoying warnings on MSVC
if(MSVC)
    target_compile_definitions(CommCore PRIVATE _CRT_SECURE_NO_WARNINGS)
    target_compile_options(CommCore PRIVATE /wd4996)
endif()
