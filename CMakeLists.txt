cmake_minimum_required(VERSION 3.10)
project(word_count_project)

set(CMAKE_CXX_STANDARD 17)

add_executable(word_count
    src/main.cpp
    src/file_io.cpp
    src/word_counter.cpp
    src/thread_manager.cpp
)
