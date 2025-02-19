cmake_minimum_required(VERSION 3.5)
project(DGameServer)

set(CMAKE_CXX_STANDARD 17)

include_directories(
        ${PROJECT_SOURCE_DIR}/common
        ${PROJECT_SOURCE_DIR}/http
        ${PROJECT_SOURCE_DIR}/reactor
        ${PROJECT_SOURCE_DIR}/tcp
        ${PROJECT_SOURCE_DIR}/thread
)

#添加子目录
add_subdirectory(common)
add_subdirectory(http)
add_subdirectory(reactor)
add_subdirectory(tcp)
add_subdirectory(thread)

link_libraries(DGame_tcp DGame_http DGame_reactor DGame_thread DGame_common)


add_executable(DGameServer main.cpp)


set(EXECUTABLE_OUTPUT_PATH {PROJECT_SOURCE_DIR}/bin)
