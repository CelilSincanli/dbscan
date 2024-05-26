cmake_minimum_required(VERSION 3.10)

# Project name
project(dbscan)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories
include_directories(
    ${PROJECT_SOURCE_DIR}/include
    ${PROJECT_SOURCE_DIR}/thirdparty/nanoflann
)

# Source files
set(SOURCES
    ${PROJECT_SOURCE_DIR}/src/dbscan.cpp
)

# Add the executable using the project name
add_executable(${PROJECT_NAME} ${SOURCES})
