cmake_minimum_required(VERSION 3.22)

project( Audio-Android )

if( CMAKE_BUILD_TYPE STREQUAL "Debug")
    set( BUILD_VARIANT "debug" )
else()
    set( BUILD_VARIANT "release" )
endif()

add_definitions(-DANDROID)

set( SOUNDTOUCH_INCLUDE_DIRS "${ANDROID_LIB_PATH}/soundtouch/include" )

add_library( SOUNDTOUCH SHARED IMPORTED )
set_target_properties( # Specifies the target library.
        SOUNDTOUCH

        # Specifies the parameter you want to define.
        PROPERTIES IMPORTED_LOCATION

        # Provides the path to the library you want to import.
        ${ANDROID_LIB_PATH}/libs/${BUILD_VARIANT}/${ANDROID_ABI}/libsoundtouch.so)

add_library( SOUNDTOUCHFP SHARED IMPORTED )
set_target_properties( # Specifies the target library.
        SOUNDTOUCHFP

        # Specifies the parameter you want to define.
        PROPERTIES IMPORTED_LOCATION

        # Provides the path to the library you want to import.
        ${ANDROID_LIB_PATH}/libs/${BUILD_VARIANT}/${ANDROID_ABI}/libsoundtouch_fp.so)


include_directories(
        ${SOUNDTOUCH_INCLUDE_DIRS}
        ${M64API_INCLUDE_PATH})

# Find the Oboe package
find_package (oboe REQUIRED CONFIG)

SET(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} -O3 -ffast-math")

add_library (mupen64plus-audio-android SHARED
        src/plugin.cpp
        src/osal_dynamiclib_unix.cpp
        src/AudioHandler.cpp
        src/RingBufferPool.cpp)
target_compile_definitions(mupen64plus-audio-android PUBLIC -D__SOFTFP__ -DSOUNDTOUCH_USE_NEON -DANDROID)

# Specify the libraries which our native library is dependent on, including Oboe
target_link_libraries(mupen64plus-audio-android log oboe::oboe SOUNDTOUCH)

# Build our own native library
add_library (mupen64plus-audio-android-fp SHARED
        src/plugin.cpp
        src/osal_dynamiclib_unix.cpp
        src/AudioHandler.cpp
        src/RingBufferPool.cpp)
target_compile_definitions(mupen64plus-audio-android-fp PUBLIC -DFP_ENABLED -DSOUNDTOUCH_USE_NEON -DSOUNDTOUCH_FLOAT_SAMPLES -DANDROID)

# Specify the libraries which our native library is dependent on, including Oboe
target_link_libraries(mupen64plus-audio-android-fp log oboe::oboe SOUNDTOUCHFP)