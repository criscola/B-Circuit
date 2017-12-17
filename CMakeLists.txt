cmake_minimum_required(VERSION 3.7)

#######################################################################
# B-Circuit
project(B-Circuit)

## Version
set(B-Circuit_VERSION_MAJOR 0)
set(B-Circuit_VERSION_MINOR 1)

## Compiler 
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -Wall")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -Wall -Werror")

## Source code
include_directories(${CMAKE_SOURCE_DIR}/inc)
file(GLOB_RECURSE SOURCES ${CMAKE_SOURCE_DIR} "src/*.cpp")

## Executable
add_executable(B-Circuit ${SOURCES})

## Toolchain
# enable useful output for linters
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)



#######################################################################
# Tests (disabled)

# project(B-Circuit-tests)
#
# ## Compiler
# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")
# set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -lcgreen")
# 
# ## Source code
# include_directories(${CMAKE_SOURCE_DIR}/inc)
# 
# file(GLOB_RECURSE SOURCES RELATIVE ${CMAKE_SOURCE_DIR} "src/*.cpp")
# file(GLOB_RECURSE TEST_SOURCES RELATIVE ${CMAKE_SOURCE_DIR} "tests/*.cpp")
# 
# list(REMOVE_ITEM SOURCES ${CMAKE_SOURCE_DIR} "src/main.cpp")
# set(ALL_SOURCES ${TEST_SOURCES} ${SOURCES})
# 
# ## Executable
# add_executable(B-Circuit-tests ${ALL_SOURCES})
# 
# ## Run Test (and show output)
# add_custom_target(check COMMAND B-Circuit-tests)
# add_custom_command( # run test after each build
#     TARGET B-Circuit-tests
#     POST_BUILD
#     COMMAND ${CMAKE_COMMAND} --build ${CMAKE_BINARY_DIR} --target check
# )
# 
# ## Test with ctest (no output)
# enable_testing()
# add_test(B-Circuit-tests B-Circuit-tests)
