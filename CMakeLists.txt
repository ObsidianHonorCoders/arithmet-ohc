# @file      CMakeLists.txt
# @brief     Main CMake configuration file for the ArithmetOHC project.
# @author    Calileus
# @date      2026-03-10
# @copyright 2026 Obsidian Honor Coders. Licensed under Apache 2.0.
# @see       https://github.com/ObsidianHonorCoders/arithmet-ohc
# @details   Configures the build system for the arithmetic bot application,
#            including library definitions and executable linking.

cmake_minimum_required(VERSION 3.28)

# Project configuration
project(
    ArithmetOHC
    VERSION 0.0.0
    LANGUAGES CXX
    DESCRIPTION "Framework for arithmetic expression evaluators"
    HOMEPAGE_URL "https://github.com/ObsidianHonorCoders/arithmet-ohc"
)

# C++ Standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_definitions(-DUNICODE -D_UNICODE)

# Default executable name
if(NOT DEFINED EXE_NAME)
    set(EXE_NAME
        "arithmet_ohc"
        CACHE STRING "Executable name" FORCE)
endif()

# Build options
option(BUILD_TESTING "Build unit tests" ON)
option(OHC_ENABLE_WERROR "Treat compiler warnings as errors" ON)

# Include CTest for testing support
include(CTest)

# Compiler warnings
if(MSVC)
    add_compile_options(/W4)
    if(OHC_ENABLE_WERROR)
        add_compile_options(/WX)
    endif()
else()
    add_compile_options(-Wall -Wextra -Wpedantic)
    if(OHC_ENABLE_WERROR)
        add_compile_options(-Werror)
    endif()
endif()

add_library(luis_aritmetic_bot STATIC
    src/aritmetic_bot_luis/bot_functions.cpp
)
target_include_directories(luis_aritmetic_bot PUBLIC
    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include/aritmetic_bot_luis>
)
target_compile_features(luis_aritmetic_bot PUBLIC cxx_std_17)

add_library(marco_aritmetic_bot STATIC
    src/aritmetic_bot_marco/bot_functions.cpp
)
target_include_directories(marco_aritmetic_bot PUBLIC
    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include/aritmetic_bot_marco>
)
target_compile_features(marco_aritmetic_bot PUBLIC cxx_std_17)

add_library(calileus_aritmetic_bot STATIC
    src/aritmetic_bot_calileus/bot_functions.cpp
)
target_include_directories(calileus_aritmetic_bot PUBLIC
    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include/aritmetic_bot_calileus>
)
target_compile_features(calileus_aritmetic_bot PUBLIC cxx_std_17)

add_executable(${EXE_NAME} src/app/main.cpp)
target_link_libraries(${EXE_NAME} PRIVATE
    luis_aritmetic_bot
    marco_aritmetic_bot
    calileus_aritmetic_bot
)

if(BUILD_TESTING)
    add_subdirectory(tests)
endif()

# Installation and package export
include(GNUInstallDirs)

install(
    TARGETS luis_aritmetic_bot marco_aritmetic_bot calileus_aritmetic_bot ${EXE_NAME}
    EXPORT ${PROJECT_NAME}-targets
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
    INCLUDES DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
)

install(
    DIRECTORY include/aritmetic_bot_luis/
    DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/aritmetic_bot_luis
    FILES_MATCHING
    PATTERN "*.hpp"
)

install(
    DIRECTORY include/aritmetic_bot_marco/
    DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/aritmetic_bot_marco
    FILES_MATCHING
    PATTERN "*.hpp"
)

install(
    DIRECTORY include/aritmetic_bot_calileus/
    DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/aritmetic_bot_calileus
    FILES_MATCHING
    PATTERN "*.hpp"
)

install(
    EXPORT ${PROJECT_NAME}-targets
    FILE ${PROJECT_NAME}-targets.cmake
    NAMESPACE ${PROJECT_NAME}::
    DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/${PROJECT_NAME}
)

include(CMakePackageConfigHelpers)
configure_package_config_file(
    ${CMAKE_CURRENT_SOURCE_DIR}/cmake/${PROJECT_NAME}-config.cmake.in
    ${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}-config.cmake
    INSTALL_DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/${PROJECT_NAME}
)

write_basic_package_version_file(
    ${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}-config-version.cmake
    VERSION ${PROJECT_VERSION}
    COMPATIBILITY SameMajorVersion
)

install(
    FILES
        ${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}-config.cmake
        ${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}-config-version.cmake
    DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/${PROJECT_NAME}
)

include(CPack)
