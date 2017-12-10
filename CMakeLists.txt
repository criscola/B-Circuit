# CMake meta
cmake_minimum_required(VERSION 3.7)

# Project
project(B-Circuit)

# Source code
include_directories(${CMAKE_SOURCE_DIR}/inc)
aux_source_directory(${CMAKE_SOURCE_DIR}/src SOURCES)

# Executable
add_executable(B-Circuit ${SOURCES})
