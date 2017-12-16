cmake_minimum_required(VERSION 3.7)

#######################################################################
# Project

project(B-Circuit)

# version
set(B-Circuit_VERSION_MAJOR 0)
set(B-Circuit_VERSION_MINOR 1)

#######################################################################
# Compiler settings

set(CMAKE_CXX_STANDARD 11)

# debug
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -Wall")

# release
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -Wall -Werror")


#######################################################################
# Source code

include_directories(${CMAKE_SOURCE_DIR}/inc)
aux_source_directory(${CMAKE_SOURCE_DIR}/src SOURCES)

#######################################################################
# Executable

add_executable(B-Circuit ${SOURCES})

#######################################################################
# Tests

#add_subdirectory(tests)

#enable_testing()
#add_test(B-Circuit-tests tests/B-Circuit-tests)
