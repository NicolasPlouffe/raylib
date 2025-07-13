cmake_minimum_required(VERSION 3.28)
project(Tuto) 
set(CMAKE_CXX_STANDARD 23)
set(Tuto_sources
    src/main.cpp
    src/program.cpp
    )
include_directories(include)
link_directories(include)
add_library(raylib SHARED  ./lib/raylib-5.5_linux_amd64/include/raylib ./lib/raylib-5.5_linux_amd64/lib/libraylib.so)
add_executable(Tuto ${Tuto_sources} )
target_include_directories(Tuto PUBLIC
				"src"
				"include"
				"lib/raylib-5.5_linux_amd64/include"	
                          )
target_link_libraries(Tuto raylib)

