cmake_minimum_required(VERSION 3.17)

project(hello
        VERSION 0.1.0
        )

set(CMAKE_CXX_STANDARD 17)

function(dump_variables)
    foreach(var ${ARGN})
        message(STATUS "${var} = ${${var}}")
    endforeach()
endfunction()

if(MSVC)
    add_compile_options("/utf-8")
endif()

find_package(Threads REQUIRED)

add_executable(hello hello.cpp)
target_link_libraries(hello Threads::Threads)
