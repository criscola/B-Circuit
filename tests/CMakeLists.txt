cmake_minimum_required(VERSION 3.7)

project(B-Circuit-tests)

# libraries
find_package(cgreen-config)

# compiler flags
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS_DEBUG} -Wall")
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} ${CGREEN_LIBRARIES} -lcgreen")

# sources
include_directories(${CMAKE_SOURCE_DIR}/inc)

aux_source_directory(${CMAKE_SOURCE_DIR}/tests TEST_SOURCES)

# executable
add_executable(B-Circuit-tests ${TEST_SOURCES})
