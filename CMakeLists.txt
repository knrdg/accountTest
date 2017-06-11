cmake_minimum_required(VERSION 3.5)
project(AccountExample)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Account/Account.cpp Account/Account.h)
add_executable(AccountExample ${SOURCE_FILES})

include_directories(Account)
add_subdirectory(Tests)