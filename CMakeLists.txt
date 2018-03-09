cmake_minimum_required(VERSION 3.9)
project(MyProgram)

set(CMAKE_CXX_STANDARD 14)

# Executable for our main program runner
add_executable(MyProgram main.cpp myfunction.h myfunction.cpp)

# Executable for our catch test runner
add_executable(MyProgram-Test catch.hpp tests.cpp myfunction.cpp)