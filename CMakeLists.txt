# @file CMakeLists.txt
#
# CMakefiles files for ASSGN1: stacks

# project info
project(markdown-parser)

set(CMAKE_CXX_STANDARD 20)

# Add executable and specify source files
add_executable(markdown-parser src/main.cpp src/Token.cpp src/Lexer.cpp src/Parser.cpp)
