# @file      CMakeLists.txt
# @brief     CMake configuration file for the ArithmetOHC test suite.
# @author    Calileus
# @date      2026-03-10
# @copyright 2026 Obsidian Honor Coders. Licensed under Apache 2.0.
# @see       https://github.com/ObsidianHonorCoders/arithmet-ohc
# @details   Configures Google Test integration and builds test executables
#            for unit testing the arithmetic bot implementations.

include(FetchContent)
set(FETCHCONTENT_BASE_DIR "${CMAKE_SOURCE_DIR}/tests/build_gtest")
FetchContent_Declare(googletest
                     URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
                     EXCLUDE_FROM_ALL)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

include(GoogleTest)

add_executable("test_${EXE_NAME}"
    test_smoke.cpp
)

target_link_libraries("test_${EXE_NAME}" PRIVATE
    gtest
    gtest_main
    gmock
    luis_aritmetic_bot
    marco_aritmetic_bot
    calileus_aritmetic_bot
)

target_include_directories("test_${EXE_NAME}" PRIVATE
    "${CMAKE_SOURCE_DIR}"
)

gtest_discover_tests("test_${EXE_NAME}"
    DISCOVERY_MODE PRE_TEST
)
