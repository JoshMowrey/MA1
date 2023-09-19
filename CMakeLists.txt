cmake_minimum_required(VERSION 3.0.0)
project(MA1 VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_executable(MA1 main.cpp queue.cpp queue.h testQueue.h testQueue.cpp)

target_include_directories(MA1 PRIVATE ${CMAKE_CURRENT_BINARY_DIR}/include)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
