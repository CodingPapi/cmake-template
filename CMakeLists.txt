cmake_minimum_required(VERSION 3.12)
project(CMakeTemplate VERSION 1.0.0 LANGUAGES C CXX DESCRIPTION "A cmake template project")

configure_file(src/c/cmake_template_version.h.in "${PROJECT_SOURCE_DIR}/src/c/cmake_template_version.h")
add_executable(demo src/c/main.c)
