# print variables
macro(print_vars)
    foreach(var_  ${ARGN})
        message(STATUS "[${PROJECT_NAME}] ${var_}: ${${var_}}")
    endforeach(var_)
endmacro(print_vars)

# group sources
macro(my_source_group group srcs_var)
    source_group("${group}" FILES ${${srcs_var}})
endmacro(my_source_group)

# glob util sources
macro(glob_util_srcs srcs)
    file(GLOB util_srcs 
        "${CMAKE_SOURCE_DIR}/util/*.h"
        "${CMAKE_SOURCE_DIR}/util/*.hpp"
        "${CMAKE_SOURCE_DIR}/util/*.cxx"
        "${CMAKE_SOURCE_DIR}/util/*.cpp"
        )
    list(APPEND ${srcs} "${util_srcs}")
endmacro(glob_util_srcs)

# add executable by chapter and exercise
macro(my_add_executable chpt ex)
    project(${chpt}_${ex} LANGUAGES CXX)

    file(GLOB ${chpt}_${ex}_HEADERS_H "${CMAKE_SOURCE_DIR}/src/${chpt}/${ex}/*.h")
    file(GLOB ${chpt}_${ex}_SOURCES_CXX "${CMAKE_SOURCE_DIR}/src/${chpt}/${ex}/*.cxx")
    set(${chpt}_${ex}_MAIN_CPP "${CMAKE_SOURCE_DIR}/src/${chpt}/${ex}/main.cpp")

    my_source_group("include" ${chpt}_${ex}_HEADERS_H)
    my_source_group("sources" ${chpt}_${ex}_SOURCES_CXX)
    my_source_group("" ${chpt}_${ex}_MAIN_CPP)
    # my_source_group("util" UTIL_SOURCES)

    print_vars(
        ${chpt}_${ex}_HEADERS_H
        ${chpt}_${ex}_SOURCES_CXX
        ${chpt}_${ex}_MAIN_CPP
        # UTIL_SOURCES
        )

    add_executable(${PROJECT_NAME}
        ${${chpt}_${ex}_HEADERS_H}
        ${${chpt}_${ex}_SOURCES_CXX}
        ${${chpt}_${ex}_MAIN_CPP}
        # ${UTIL_SOURCES}
        )

    # add current chapter directory to include path
    target_include_directories(${PROJECT_NAME} PRIVATE "${CMAKE_SOURCE_DIR}/src/${chpt}")
endmacro(my_add_executable)