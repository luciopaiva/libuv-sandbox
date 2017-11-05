cmake_minimum_required(VERSION 3.8)
project(libuv_sandbox)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cpp)

link_directories(../libuv/.libs)

add_executable(libuv_sandbox ${SOURCE_FILES})

include_directories(
        ../libuv/include
)

target_link_libraries(libuv_sandbox uv)
