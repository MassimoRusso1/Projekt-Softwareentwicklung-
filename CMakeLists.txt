# define the minimum cmake version
cmake_minimum_required(VERSION 3.20)
project(program VERSION 1.0 LANGUAGES C)
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED True)
add_compile_options(-Wall -Wextra -Werror -pedantic -O0)
add_executable(program
                        src/main.c
                        src/developer.c
                        src/developer_group.c)
target_include_directories(program  PRIVATE include)
