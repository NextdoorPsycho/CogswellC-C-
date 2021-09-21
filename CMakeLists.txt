cmake_minimum_required(VERSION 3.6)
set(CMAKE_C_STANDARD 99)

# project
project(WinsockExample)

# sources
set(source_files
        main.cpp
        )

# build
add_executable(${CMAKE_PROJECT_NAME} ${source_files})
target_link_libraries(${CMAKE_PROJECT_NAME} ws2_32)
