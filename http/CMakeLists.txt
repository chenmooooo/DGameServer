cmake_minimum_required(VERSION 3.5)
project(DGame_http)
set(CMAKE_CXX_STANDARD 17)

# 取出当前目录中的所有的源文件，存储到一个变量中
aux_source_directory(./ SRC)

add_library(DGame_http STATIC  ${SRC})