cmake_minimum_required(VERSION 3.7)

#######################################################################
# Project
project(B-Circuit)

# version
set(B-Circuit_VERSION_MAJOR 0)
set(B-Circuit_VERSION_MINOR 1)

#######################################################################
# Compiler settings

# debug
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -Wall")

# release
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -Wall -Werror")

#######################################################################
# Source code

include_directories(${CMAKE_SOURCE_DIR}/inc)
file(GLOB_RECURSE SOURCES ${CMAKE_SOURCE_DIR} "src/*.cpp")
# aux_source_directory(${CMAKE_SOURCE_DIR}/src SOURCES)

#######################################################################
# Executable

add_executable(B-Circuit ${SOURCES})




#######################################################################
# Test Units

project(B-Circuit-tests)

# compiler flags
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -lcgreen")

# sources
include_directories(${CMAKE_SOURCE_DIR}/inc)

# aux_source_directory(${CMAKE_SOURCE_DIR}/src SOURCES)
# aux_source_directory(${CMAKE_SOURCE_DIR}/tests TEST_SOURCES)

file(GLOB_RECURSE SOURCES RELATIVE ${CMAKE_SOURCE_DIR} "src/*.cpp")
file(GLOB_RECURSE TEST_SOURCES RELATIVE ${CMAKE_SOURCE_DIR} "tests/*.cpp")

list(REMOVE_ITEM SOURCES ${CMAKE_SOURCE_DIR} "src/main.cpp")
set(ALL_SOURCES ${TEST_SOURCES} ${SOURCES})

# executable
add_executable(B-Circuit-tests ${ALL_SOURCES})

# Test (and show output)
add_custom_target(check COMMAND B-Circuit-tests)
add_custom_command( # run test after each build
    TARGET B-Circuit-tests
    POST_BUILD
    COMMAND ${CMAKE_COMMAND} --build ${CMAKE_BINARY_DIR} --target check
)

# Test with ctest (no output)
enable_testing()
add_test(B-Circuit-tests B-Circuit-tests)
