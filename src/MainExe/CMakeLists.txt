# Cossacks: The Last Stand - Main executable (dmcr)
# Cross-platform build configuration

set(MAIN_SOURCES
    3DBars.cpp
    3DGraph.cpp
    3DMapEd.cpp
    3DRandMap.cpp
    3DSurf.cpp
    ActiveScenary.cpp
    ActiveZone.cpp
    AntiBug.cpp
    ArchTool.cpp
    Arc/GSCarch.cpp
    Arc/GSCset.cpp
    Arc/isiMasks.cpp
    bmptool.cpp
    Brigade.cpp
    Build.cpp
    Cdirsnd.cpp
    Chkinet.cpp
    ConstStr.cpp
    Cwave.cpp
    Danger.cpp
    Ddex1.cpp
    Ddini.cpp
    DeviceCD.cpp
    Dialogs.cpp
    DrawForms.cpp
    Economy.cpp
    EinfoClass.cpp
    ExConst.cpp
    Fastdraw.cpp
    fog.cpp
    Fractal.cpp
    GameSound.cpp
    GP_Draw.cpp
    Graphs.cpp
    Groups.cpp
    gText.cpp
    GVClass.cpp
    Hint.cpp
    HTTP/HttpComm.cpp
    Icontool.cpp
    Interface.cpp
    IR_Main.cpp
    Lines.cpp
    LoadSave.cpp
    mapa.cpp
    MapSprites.cpp
    Masks.cpp
    Megapolis.cpp
    menu.cpp
    Mine.cpp
    Motion.cpp
    Mouse_X.cpp
    MousZone.cpp
    Multi.cpp
    Nation.cpp
    Nature.cpp
    Navorots.cpp
    NewAI.cpp
    NewCode/MapOptionsEncoder.cpp
    NewCode/QueueManagement.cpp
    NewCode/SecureDivision.cpp
    NewCode/UdpHolePuncher.cpp
    NewILogin.cpp
    NewMon.cpp
    NewUpgrade.cpp
    Nuclear.cpp
    OnWater.cpp
    path.cpp
    RealWater.cpp
    Recorder.cpp
    Report.cpp
    Resfile.cpp
    River.cpp
    SafeNet.cpp
    SaveNewMap.cpp
    Select.cpp
    SelProp.cpp
    ShipTrace.cpp
    Source.cpp
    StrategyResearch.cpp
    stRecog.cpp
    Stringshash.cpp
    testserver.cpp
    Timing.cpp
    Tmixer.cpp
    TopoGraf.cpp
    Transport.cpp
    UnRar.cpp
    UnSyncro.cpp
    Upgrade.cpp
    VirtScr.cpp
    walls.cpp
    Waves.cpp
    Weapon.cpp
    ZBuffer.cpp
)

# MPlayer.cpp uses DirectPlay — only compile with MSVC (DirectPlay SDK available)
# MinGW and non-Windows use MPlayerStub.cpp with CommCore UDP
# SdlEventBridge replaces Win32 message pump — only needed on non-Windows
if(WIN32 AND MSVC)
    list(APPEND MAIN_SOURCES MPlayer.cpp)
elseif(WIN32)
    # MinGW: has real Win32 API, only needs CommCore multiplayer stub
    list(APPEND MAIN_SOURCES MPlayerStub.cpp)
else()
    # macOS/Linux: needs both CommCore stub and SDL event bridge
    list(APPEND MAIN_SOURCES MPlayerStub.cpp SdlEventBridge.cpp)
endif()

# Windows resource file (icon, version info)
if(WIN32)
    set(RC_FILE ${CMAKE_CURRENT_SOURCE_DIR}/Script1.rc)
    if(MSVC)
        list(APPEND MAIN_SOURCES ${RC_FILE})
    else()
        # MinGW: compile .rc with windres
        set(RC_OBJ ${CMAKE_CURRENT_BINARY_DIR}/Script1_rc.obj)
        add_custom_command(
            OUTPUT ${RC_OBJ}
            COMMAND ${CMAKE_RC_COMPILER} -I${CMAKE_CURRENT_SOURCE_DIR} -i ${RC_FILE} -o ${RC_OBJ}
            DEPENDS ${RC_FILE} ${CMAKE_CURRENT_SOURCE_DIR}/Resource.h ${CMAKE_CURRENT_SOURCE_DIR}/icon1.ico
        )
        list(APPEND MAIN_SOURCES ${RC_OBJ})
    endif()
endif()

add_executable(dmcr ${MAIN_SOURCES})

# Tell SDL2 we handle our own entry point (WinMain/main)
target_compile_definitions(dmcr PRIVATE SDL_MAIN_HANDLED)

target_include_directories(dmcr PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/Arc
    ${CMAKE_CURRENT_SOURCE_DIR}/NewCode
    ${CMAKE_CURRENT_SOURCE_DIR}/HTTP
)

# SDL2
if(WIN32)
    target_include_directories(dmcr PRIVATE
        ${SDL2_INCLUDE_DIR}
        ${SDL2_MIXER_INCLUDE_DIR}
    )
    target_link_directories(dmcr PRIVATE
        ${SDL2_LIB_DIR}
        ${SDL2_MIXER_LIB_DIR}
    )
    if(MSVC)
        target_link_libraries(dmcr PRIVATE SDL2 SDL2main SDL2_mixer)
    else()
        # MinGW: link SDL2.dll directly, skip SDL2main (we have our own main())
        target_link_libraries(dmcr PRIVATE SDL2 SDL2_mixer)
    endif()
else()
    target_include_directories(dmcr PRIVATE
        ${SDL2_INCLUDE_DIRS}
        ${SDL2_MIXER_INCLUDE_DIRS}
    )
    target_link_directories(dmcr PRIVATE
        ${SDL2_LIBRARY_DIRS}
        ${SDL2_MIXER_LIBRARY_DIRS}
    )
    target_link_libraries(dmcr PRIVATE ${SDL2_LIBRARIES} ${SDL2_MIXER_LIBRARIES})
endif()

# Link libraries
target_link_libraries(dmcr PRIVATE CommCore platform_compat)

if(WIN32)
    target_link_libraries(dmcr PRIVATE
        winmm ws2_32 iphlpapi advapi32 psapi
    )
    if(MSVC)
        target_link_libraries(dmcr PRIVATE dplayx dxguid ole32)
    endif()
endif()

# Disable precompiled headers (only 3 files use stdafx.h in original project)
# Suppress warnings
if(MSVC)
    target_compile_definitions(dmcr PRIVATE _CRT_SECURE_NO_WARNINGS)
    target_compile_options(dmcr PRIVATE /wd4996 /wd4200)
elseif(CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
    target_compile_options(dmcr PRIVATE
        -Wno-deprecated-declarations
        -Wno-write-strings
        -Wno-narrowing
        -Wno-format
        -Wno-switch
        -Wno-parentheses
        -Wno-dangling-else
        -Wno-sizeof-array-argument
        -fmax-errors=0
        -Wpointer-to-int-cast
        -Wint-to-pointer-cast
        -g
    )
    if(WIN32)
        # Static link GCC/C++ runtime, GUI subsystem, set minimum Windows version
        # winpthread linked statically via custom specs in toolchain files
        if(CMAKE_SIZEOF_VOID_P EQUAL 4)
            # 32-bit: Windows XP (5.1)
            target_link_options(dmcr PRIVATE -static-libgcc -static-libstdc++ -mwindows
                -Wl,--major-subsystem-version,5,--minor-subsystem-version,1)
        else()
            # 64-bit: Windows 7 (6.1)
            target_link_options(dmcr PRIVATE -static-libgcc -static-libstdc++ -mwindows
                -Wl,--major-subsystem-version,6,--minor-subsystem-version,1)
        endif()
    endif()
else()
    # Clang
    target_compile_options(dmcr PRIVATE
        -Wno-pragma-pack
        -Wno-deprecated-declarations
        -Wno-writable-strings
        -Wno-c++11-narrowing
        -Wno-format
        -Wno-switch
        -Wno-parentheses
        -Wno-dangling-else
        -Wno-extra-qualification
        -Wno-microsoft-anon-tag
        -Wno-sizeof-array-argument
        -Wno-nonportable-include-path
        -Wno-tautological-constant-out-of-range-compare
        -ferror-limit=0
        -fno-omit-frame-pointer
        -g
    )
    option(ENABLE_ASAN "Enable AddressSanitizer" OFF)
    if(ENABLE_ASAN)
        target_compile_options(dmcr PRIVATE -fsanitize=address)
        target_link_options(dmcr PRIVATE -fsanitize=address)
    endif()
endif()
