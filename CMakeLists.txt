cmake_minimum_required(VERSION 3.10)

# set the project name and version
project(symmetry_detector)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(detect src/main.cc)

include_directories(include)

# link library to executable
target_link_libraries(detect PUBLIC)

# add target directories
target_include_directories(detect PUBLIC
                           "${PROJECT_BINARY_DIR}" 
                           )