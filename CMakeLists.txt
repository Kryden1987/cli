cmake_minimum_required(VERSION 3.0)

if(NOT DEFINED CLI_VERSION_MAJOR)
  set(CLI_VERSION_MAJOR 0)
endif()

if(NOT DEFINED CLI_VERSION_MINOR)
  set(CLI_VERSION_MINOR 0)
endif()

if(NOT DEFINED CLI_VERSION_PATCH)
  set(CLI_VERSION_PATCH 0)
endif()

set(CMAKE_VERBOSE_MAKEFILE ON)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -Wall")

include_directories(include/)

set(SOURCE source/cli.cpp source/help.cpp example/example.cpp)


add_executable(cli ${SOURCE})


