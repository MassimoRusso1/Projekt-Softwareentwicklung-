# define the minimum cmake version
cmake_minimum_required(VERSION 3.20)

# define the project name
project(master VERSION 1.0 LANGUAGES C)

# define the c standard version
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED True)

# add some compile options
add_compile_options(-Wall -Wextra -Werror -pedantic -O0)

#add libary
add_library(master_work SHARED 2_src/developer.c 2_src/developer_group.c)

#add executable
add_executable(master_exec 2_src/main.c)

target_include_directories(master_exec PRIVATE include)
