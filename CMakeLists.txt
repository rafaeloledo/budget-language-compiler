cmake_minimum_required(VERSION 3.29.2)

project(dbc VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 20)

add_executable(dbc src/main.cpp)

target_include_directories(dbc PUBLIC
  "${PROJECT_BINARY_DIR}"
  "${PROJECT_SOURCE_DIR}/src"
)
