cmake_minimum_required(VERSION 3.28)
project(Tuto) 
set(CMAKE_CXX_STANDARD 23)

set(Tuto_sources
    src/main.cpp
    src/program.cpp
)

add_library(raylib SHARED IMPORTED)

set_property(TARGET raylib PROPERTY IMPORTED_LOCATION 
	     "${CMAKE_CURRENT_SOURCE_DIR}/lib/raylib-5.5_linux_amd64/lib/libraylib.so"
)
set_property(TARGET raylib PROPERTY INTERFACE_INCLUDE_DIRECTORIES
             "${CMAKE_CURRENT_SOURCE_DIR}/lib/raylib-5.5_linux_amd64/include"
)

add_executable(Tuto ${Tuto_sources} )

target_include_directories(Tuto PUBLIC
	"${CMAKE_CURRENT_SOURCE_DIR}/src"
	"${CMAKE_CURRENT_SOURCE_DIR}/include"
)
target_link_libraries(Tuto PRIVATE raylib)

