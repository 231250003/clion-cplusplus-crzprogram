cmake_minimum_required(VERSION 3.24)
project(clionc__)

set(CMAKE_CXX_STANDARD 98)

add_executable(main main.cpp)
add_executable(precise preciseplus.cpp)
add_executable(priority-queue-stl-test priority-queue-stl-test.cpp)
add_executable(creating-heap-push creating-heap-push.cpp)
add_executable(creating-heap-pop creating-heap-pop.cpp)
add_executable(heapsorting-stl  heapsorting-stl.cpp)
add_executable(create-heapsorting-wrong create-heapsorting-wrong.cpp)
add_executable(poj-2431-gai poj-2431-gai.cpp)


