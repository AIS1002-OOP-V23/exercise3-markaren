cmake_minimum_required(VERSION 3.15)
project(exercise3)

set(CMAKE_CXX_STANDARD 17)

# Place target artifacts into bin and lib folders
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

# copy data into bin folder
file(COPY "${CMAKE_SOURCE_DIR}/data" DESTINATION "${CMAKE_BINARY_DIR}/bin")

add_executable(main main.cpp)
target_include_directories(main PUBLIC "${CMAKE_SOURCE_DIR}/include")
