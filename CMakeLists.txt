cmake_minimum_required(VERSION 3.16.3)

project(stack)

set(SOURCE_EXE stack.c)

set(SOURCE_LIB queue.c)

add_library(queue STATIC ${SOURCE_LIB})

add_executable(stack ${SOURCE_EXE})

target_link_libraries(stack queue)