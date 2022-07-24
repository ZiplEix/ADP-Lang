############################################################
# HEADER
############################################################

cmake_minimum_required(VERSION 3.16)

project (adp VERSION 1.0)

############################################################
# LIBRARY
############################################################

file(GLOB LIB_SRC "lib/src/*.c")
add_library(mylib ${LIB_SRC})

target_include_directories(mylib PUBLIC ${PROJECT_SOURCE_DIR}/lib/include)

############################################################
# EXECUTABLE
############################################################

file(GLOB SOURCES
    "main.c"
    "src/*.c"
)

SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g3")

add_executable(adp ${SOURCES})

target_include_directories(adp PUBLIC ${PROJECT_SOURCE_DIR}/include)
target_link_libraries(adp PUBLIC mylib)
