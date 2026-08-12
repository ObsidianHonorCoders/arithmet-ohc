# @file      CMakeLists.txt
# @brief     Main CMake configuration file for the ArithmetOHC project.
# @author    Calileus
# @date      2026-03-10
# @copyright 2026 Obsidian Honor Coders. Licensed under Apache 2.0.
# @see       https://github.com/ObsidianHonorCoders/arithmet-ohc
# @details   Configures the build system for the arithmetic bot application,
#            including library definitions and executable linking.

cmake_minimum_required(VERSION 3.28)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
add_definitions(-DUNICODE -D_UNICODE)

# Project configuration
project(ArithmetOHC VERSION 0.0.0)

# Set executable name from variable or use default
if(NOT DEFINED EXE_NAME)
    set(EXE_NAME "arithmet_ohc")
endif()

# Include directories
include_directories(${CMAKE_SOURCE_DIR})
include_directories(${CMAKE_SOURCE_DIR}/aritmetic_bot_luis)
include_directories(${CMAKE_SOURCE_DIR}/aritmetic_bot_marco)
include_directories(${CMAKE_SOURCE_DIR}/aritmetic_bot_calileus)

file(GLOB LUIS_SOURCES "aritmetic_bot_luis/*.cpp")
add_library(luis_aritmetic_bot STATIC ${LUIS_SOURCES})
target_include_directories(luis_aritmetic_bot PUBLIC ${CMAKE_SOURCE_DIR}/aritmetic_bot_luis )

file(GLOB MARCO_SOURCES "aritmetic_bot_marco/*.cpp")
add_library(marco_aritmetic_bot STATIC ${MARCO_SOURCES})
target_include_directories(marco_aritmetic_bot PUBLIC ${CMAKE_SOURCE_DIR}/aritmetic_bot_marco )

file(GLOB CALILEUS_SOURCES "aritmetic_bot_calileus/*.cpp")
add_library(calileus_aritmetic_bot STATIC ${CALILEUS_SOURCES})
target_include_directories(calileus_aritmetic_bot PUBLIC ${CMAKE_SOURCE_DIR}/aritmetic_bot_calileus )

add_executable(${EXE_NAME} main.cpp)
target_link_libraries(${EXE_NAME} 
    luis_aritmetic_bot 
    marco_aritmetic_bot
    calileus_aritmetic_bot
)

enable_testing()
add_subdirectory(tests)
