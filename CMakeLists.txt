cmake_minimum_required(VERSION 3.13)
project(CTestExample VERSION 1.0 LANGUAGES CXX)

# Set C++ Standard
set(CMAKE_CXX_STANDARD 17)

# Add Library
add_library(MathFunctions src/MathFunctions.cpp)

# Add headerfiles to Library
target_include_directories(MathFunctions PUBLIC include)

# activate tests
enable_testing()

# add tests
add_subdirectory(tests)
