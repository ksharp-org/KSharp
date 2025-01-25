# Minimum required CMake version
cmake_minimum_required(VERSION 3.10)

# Project name and version
project(ksharp VERSION 1.0)

# Specify the C++ standard to use
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Define the source directory and list all source files
set(SOURCE_DIR ${CMAKE_SOURCE_DIR}/src)
file(GLOB_RECURSE SOURCES ${SOURCE_DIR}/*.cpp)

# Define the include directories (if any)
include_directories(${CMAKE_SOURCE_DIR}/include)

# Optionally, define preprocessor flags for different platforms
if(WIN32)
    add_definitions(-DPLATFORM_WINDOWS)
elseif(APPLE)
    add_definitions(-DPLATFORM_MAC)
elseif(UNIX)
    add_definitions(-DPLATFORM_LINUX)
endif()

# Create the executable
add_executable(${PROJECT_NAME} ${SOURCES})

# Link external libraries (if any)
# target_link_libraries(${PROJECT_NAME} <external_libraries>)

# Set platform-specific options or flags (optional)

# Windows-specific options
if(WIN32)
    set_target_properties(${PROJECT_NAME} PROPERTIES WIN32_EXECUTABLE True)
endif()

# macOS-specific options
if(APPLE)
    # Add macOS-specific configurations here if needed
endif()

# Linux/Unix/BSD-specific options
if(UNIX AND NOT APPLE)
    # Add Linux/Unix-specific configurations here if needed
endif()

# Example for adding external libraries or dependencies
# find_package(OpenGL REQUIRED)
# target_link_libraries(${PROJECT_NAME} OpenGL::GL)
