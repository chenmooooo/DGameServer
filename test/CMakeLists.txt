cmake_minimum_required(VERSION 3.5)
project(Test)

set(CMAKE_CXX_STANDARD 17)

aux_source_directory(./ SRC)

add_library(test STATIC ${SRC})

target_link_libraries(test protobuf)

#target_include_directories(test protobuf)

